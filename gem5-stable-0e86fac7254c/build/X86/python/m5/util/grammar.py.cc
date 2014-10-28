#include "sim/init.hh"

namespace {

const uint8_t data_m5_util_grammar[] = {
    120,156,189,87,109,111,27,199,17,158,61,190,137,52,101,41,
    182,171,90,109,146,158,219,42,98,155,216,44,2,219,77,2,
    65,72,156,56,105,209,64,8,78,65,139,26,5,216,211,113,
    73,29,117,188,59,220,46,107,17,144,208,194,14,208,126,201,
    255,233,223,232,63,232,135,254,137,126,40,218,121,102,111,41,
    57,13,138,126,162,69,174,103,119,103,111,150,51,207,51,51,
    151,80,253,175,193,223,15,67,34,243,37,11,99,254,40,202,
    136,158,173,100,69,207,2,47,55,68,14,72,55,105,162,104,
    220,160,175,136,94,18,253,246,89,139,198,77,210,109,89,109,
    173,86,59,56,116,60,104,243,131,211,127,243,191,35,219,99,
    241,139,184,50,250,105,85,21,85,226,239,16,240,247,9,238,
    112,135,5,205,214,21,78,178,209,175,216,122,131,162,227,1,
    52,146,70,125,93,124,63,134,250,27,44,88,162,153,162,11,
    162,11,69,47,3,82,23,1,38,35,185,243,241,64,177,198,
    209,0,7,108,151,135,167,231,137,46,109,90,228,118,131,103,
    163,81,154,167,118,52,178,45,236,23,103,58,119,154,77,30,
    140,206,38,182,195,194,92,27,19,79,117,132,157,1,249,193,
    176,131,104,120,90,204,245,80,207,211,108,57,252,68,155,51,
    91,148,195,39,58,79,78,231,113,117,150,230,211,97,252,112,
    56,213,243,71,247,141,141,79,50,125,255,103,250,189,199,147,
    56,249,249,187,143,30,38,67,83,37,195,114,105,79,139,124,
    56,127,52,92,216,52,27,78,171,120,206,71,31,148,203,8,
    191,247,30,236,224,46,164,182,213,209,0,82,125,237,60,158,
    107,190,118,79,38,243,98,188,200,48,133,194,81,145,107,57,
    124,117,213,181,220,23,54,66,216,129,237,182,18,207,125,230,
    182,87,81,110,250,40,127,113,21,101,2,88,0,42,37,66,
    3,232,130,208,4,186,198,93,192,10,128,98,224,181,105,220,
    150,45,70,85,71,132,13,26,111,136,208,5,66,224,140,68,
    213,96,194,247,87,48,181,71,130,92,198,198,89,155,170,187,
    64,11,91,120,17,80,46,128,1,82,148,67,10,226,123,100,
    129,85,231,80,243,230,74,12,83,19,198,121,152,102,153,158,
    198,89,24,91,91,165,39,11,171,5,149,246,38,15,31,249,
    37,193,181,4,38,211,231,163,179,231,113,53,53,162,22,73,
    248,240,248,122,113,93,161,177,175,9,154,237,162,252,92,159,
    235,234,211,56,177,69,181,124,11,139,109,193,86,159,255,196,
    113,205,154,90,226,184,63,254,15,199,113,104,234,245,138,172,
    162,89,64,179,6,88,243,82,209,239,2,186,228,15,43,52,
    104,38,89,129,23,205,111,228,120,203,251,61,192,113,142,230,
    1,43,113,44,67,204,54,232,224,42,36,109,23,18,48,246,
    40,130,51,255,143,96,136,111,139,133,45,23,214,224,87,240,
    79,55,96,208,151,167,58,116,203,225,36,229,227,243,133,177,
    161,206,199,225,243,212,158,134,112,80,119,117,112,156,86,233,
    191,56,81,201,18,59,218,89,28,0,204,209,13,44,33,146,
    133,17,166,149,177,61,149,196,97,202,44,181,209,150,103,39,
    63,218,224,209,22,7,150,113,146,120,20,52,61,10,162,77,
    232,226,142,108,79,254,103,83,235,195,195,45,143,7,73,196,
    30,16,111,83,157,126,5,16,65,95,221,85,91,170,161,186,
    170,167,94,11,18,207,169,166,207,188,191,80,18,44,70,200,
    89,64,213,235,52,37,9,156,140,51,142,29,246,2,217,123,
    95,150,20,42,130,130,20,184,205,134,108,254,90,54,27,171,
    205,166,219,108,202,230,159,137,253,59,107,227,195,216,185,112,
    207,14,232,107,81,101,140,96,218,118,7,218,114,224,175,114,
    160,131,207,213,129,166,63,208,145,105,199,29,232,200,129,191,
    215,215,53,127,19,192,185,9,67,113,151,51,207,174,232,245,
    68,111,67,213,122,255,164,241,141,87,244,250,181,222,166,232,
    189,237,245,238,41,222,21,189,46,205,122,116,204,96,24,223,
    36,219,135,189,151,194,170,73,64,59,47,234,34,181,181,74,
    61,25,40,106,162,62,80,178,227,81,194,139,66,2,129,29,
    16,101,1,160,100,81,85,58,183,35,57,34,229,53,37,159,
    142,252,158,41,22,85,162,133,231,7,57,87,134,195,20,60,
    183,253,235,199,211,92,11,79,246,247,204,126,88,156,204,116,
    98,195,211,216,132,121,113,197,173,16,155,3,88,141,190,135,
    1,54,220,37,119,95,185,105,153,45,163,239,99,229,117,12,
    96,67,244,134,79,123,48,148,23,142,70,146,11,151,165,190,
    150,25,49,192,222,250,120,112,67,170,231,84,91,152,29,141,
    222,135,201,15,106,2,116,85,135,41,208,187,54,190,121,109,
    236,170,166,218,250,198,255,189,160,161,12,126,241,129,97,167,
    229,211,67,137,70,130,4,129,216,117,60,113,254,65,210,178,
    48,2,172,244,43,92,161,172,148,63,235,83,232,78,157,100,
    5,28,89,139,46,91,53,210,25,187,204,147,75,6,62,203,
    27,210,239,40,71,27,1,25,175,114,102,101,92,97,53,109,
    202,161,27,52,235,131,107,143,235,201,38,184,229,39,55,193,
    18,63,217,2,137,30,95,50,73,152,66,219,196,85,3,171,
    183,232,162,131,91,94,178,185,13,154,221,6,113,216,14,131,
    251,66,202,243,5,223,152,26,151,93,170,111,113,199,49,185,
    75,174,30,31,153,31,33,172,213,116,49,103,172,185,212,123,
    162,195,56,116,62,122,39,124,206,64,3,182,4,191,18,145,
    178,226,156,155,160,69,51,2,155,88,100,129,199,180,176,133,
    100,102,141,34,59,89,228,137,228,95,33,128,72,99,125,178,
    152,74,18,182,85,156,0,30,131,239,96,130,171,164,38,229,
    39,198,121,162,101,122,18,27,237,46,33,136,140,126,8,61,
    144,99,34,64,206,245,115,1,178,60,54,201,152,58,34,165,
    57,23,9,161,128,187,91,89,114,182,119,96,71,163,17,161,
    170,70,251,24,6,190,28,120,171,81,232,87,62,143,92,226,
    149,39,150,16,29,119,138,82,124,118,69,135,113,204,208,132,
    29,71,227,232,167,216,69,158,142,134,24,126,178,210,75,19,
    43,122,165,123,46,196,74,155,69,102,215,71,166,190,55,63,
    114,94,253,61,108,134,194,38,148,145,219,204,146,45,181,169,
    118,88,222,148,191,237,224,46,179,105,83,37,190,172,224,43,
    157,71,254,13,134,84,251,144,185,165,176,65,93,114,0,72,
    69,249,3,175,22,136,218,19,200,92,75,88,51,191,13,207,
    48,131,216,199,142,38,32,149,99,17,148,132,72,140,96,230,
    203,215,193,170,247,67,248,43,243,238,183,33,86,115,65,215,
    213,10,184,97,81,73,51,113,5,224,129,36,187,119,48,220,
    247,113,129,134,8,104,215,175,96,22,29,120,133,74,199,227,
    107,109,193,3,170,123,131,232,61,90,99,239,46,124,112,177,
    147,27,195,226,118,29,185,182,186,197,99,159,115,219,182,107,
    2,224,169,150,207,101,232,250,217,157,213,80,58,69,169,124,
    240,174,212,183,153,188,40,126,215,133,100,210,164,29,110,11,
    243,109,105,29,69,145,223,20,177,196,126,112,237,32,71,240,
    69,221,137,203,123,140,249,1,143,199,203,220,198,231,161,240,
    157,171,81,184,103,62,216,27,243,167,119,120,184,103,14,14,
    164,154,153,221,111,81,68,127,87,76,88,127,128,203,70,232,
    30,163,123,171,74,164,207,75,110,226,176,243,135,56,91,104,
    121,121,17,12,56,238,73,141,20,78,206,205,116,125,97,64,
    137,40,71,242,19,254,4,115,61,137,65,155,25,243,86,176,
    173,86,222,95,181,96,15,201,119,232,51,169,22,187,155,215,
    157,63,105,56,255,54,254,219,191,130,118,131,172,245,203,186,
    137,78,78,99,78,152,150,17,190,103,194,15,67,241,177,212,
    47,135,206,143,189,251,162,39,24,94,117,87,244,9,134,167,
    107,69,44,92,101,157,171,254,66,171,23,153,6,39,148,35,
    151,67,177,16,73,219,46,173,138,116,41,63,38,223,147,128,
    128,209,71,24,62,197,240,25,173,253,117,25,85,12,21,195,
    224,122,109,213,109,117,111,118,247,111,221,233,246,187,27,46,
    147,160,73,119,136,200,150,15,208,0,34,151,74,249,192,2,
    154,192,72,249,88,184,55,31,233,220,228,193,235,253,45,114,
    169,3,247,166,116,136,154,41,93,16,222,32,250,193,78,235,
    63,37,226,240,104,
};

EmbeddedPython embedded_m5_util_grammar(
    "m5/util/grammar.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/src/python/m5/util/grammar.py",
    "m5.util.grammar",
    data_m5_util_grammar,
    1877,
    4711);

} // anonymous namespace