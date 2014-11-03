function getstats(templateLoc, config, stats, output)
config = 'config.ini'
stats = 'stats.txt'
templateFile = 'template.xml'
templateFileOut = 'templateOut.xml';
fhC = fopen(config, 'r');
line = fgetl(fhC)
tagFront = '';
tag = '';
tagStruct = {};
while ischar(line) 
	if isempty(line)
		line = fgetl(fhC);
		continue;
	elseif line(1) == '[' 
		%line is a new section
		line = line(line ~= '[' & line ~= ']');
		tagFront = ['config.' line];
	else
		%get value		
		[tmpTag, value] = strtok(line, '=');
		tag = [tagFront '.' tmpTag];
		value = value(2:end);
		tagStruct(:, end+1) = {tag, value};
	end
	line = fgetl(fhC);
end

%simulation stats
fhS = fopen(stats);
line = fgetl(fhS);
tagFront = 'stats.'
while ischar(line)
	if ~isempty(line)
		if line(1) ~= '-'
			[tmpTag rest] = strtok(line, ' ');
			[value, rest] = strtok(rest, ' ');
			tagStruct(:, end+1) = {[tagFront, tmpTag], value};
		end
	end
	line = fgetl(fhS);
end
%TODO REMOVE NEXT 4 LINES - debugging purposes only!
outfile = fopen('outputTags.txt', 'w');
for i = 1:length(tagStruct(1, :))
	fprintf(outfile, "%s: %s\n", tagStruct{1, i}, tagStruct{2, i});
end

fh = fopen(templateFile, 'r')
fhOut = fopen(templateFileOut, 'w');
fhDebugOut = fopen('debug.out', 'w');
line = fgets(fh)
while ischar(line)
	if isempty(strfind(line, 'REPLACE'))
		fprintf(fhOut, line);
	else
		%need to replace values
		%handle addition, division, constants, convertToInt, commas, 
		startLoc=strfind(line, 'REPLACE');
		endLoc = find(line == '}');
		lineFront = line(1:startLoc-1);
		lineEnd = line(endLoc+1:end);
		lineMiddle = getLineGuts(line(startLoc:endLoc), tagStruct, fhDebugOut);
		fprintf(fhOut, '%s', [lineFront, lineMiddle, lineEnd]);
%		fprintf(fhDebugOut, line);
		fprintf(fhDebugOut, [lineFront, lineMiddle, lineEnd]);
	end
	line = fgets(fh);
end

fclose all;
end
function out=getLineGuts(str, tagStruct, fhDebug)
	out = str;
	start = find(str == '{');
	str = str(start+1:end-1); %deletes wrapper and close brace
	if ~any(str == '/' | str == '*' | str == '+' | str == '-' | str == '(')
		% just rep[lacing single term
		commas = [1, find(str == ','), length(str)+1]
		out = '';
		for i = 1:length(commas)-1
			out = [out, ',', findTerm(str(commas(i):commas(i+1)-1), tagStruct, fhDebug)];
		end	
		out(1) = [];
	else 
		%if it has any logic and commas
		%handle int conversion
		str = strrep(str, 'int(', 'floor(');
		subs = strfind(str, ' -');
%		str(subs) = [];
		ops = [1, find(str == '/' | str == '*' | str == '+'),  length(str)+1, subs+1]
		ops = sort(ops);
		out = '';
		for i = 1:length(ops)-1
			out = [out, str(ops(i)), findTerm(str(ops(i):ops(i+1)-1), tagStruct, fhDebug)];
		end	
		out(1) = [];
		out = num2str(eval(out));
	end
end
function value = findTerm(str, tagStruct, fhDebug)
		str = strtrim(str)
		minus = strfind(str, '- ');
		str(minus:minus+1) = [];
		str(str==',' | str==' ' | str == '*' | str == '+' | str == '/'|str==9 ) = [];
		if str(1) == '('
			parenFlag = true;
			str(1) = []
		else 
			parenFlag = false;
		end
		if str(end) == ')'
			parenFlag2 = true;
			str(end) = []
		else 
			parenFlag2 = false;
		end
		
		if ~isempty(strfind(str, 'floor('))
			floorIt = true
			str(1:6) = [];
		else 
			floorIt = false;
		end
		
		locs = find(strcmp(tagStruct(1, :), str))
		if isempty(locs)
			fprintf(fhDebug, 'what happened? %s\n', str);
			value = str;
		else
			value = tagStruct{2, locs};
		end
		if parenFlag
			value = ['(' value];
		end
		if parenFlag2
			value = [ value ')'];
		end
		if floorIt
			value = ['floor(' value]
		end
end

