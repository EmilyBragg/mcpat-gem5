#include "sim/init.hh"

namespace {

const uint8_t data_m5_util_dot_writer[] = {
    120,156,189,89,77,108,92,87,21,62,247,189,249,241,179,199,
    63,137,237,216,110,76,113,243,215,145,104,61,73,155,244,159,
    182,73,157,8,161,218,9,111,146,184,53,73,135,231,121,215,
    246,27,191,153,55,121,239,57,177,209,184,27,87,64,37,118,
    44,16,149,16,98,197,170,72,108,186,128,85,89,192,130,5,
    11,54,69,98,73,133,16,18,43,216,33,224,124,231,190,55,
    246,52,93,123,236,57,190,247,220,255,115,191,243,119,221,164,
    236,99,243,247,205,5,162,228,159,92,240,249,87,81,72,180,
    214,47,43,90,83,121,217,162,53,75,202,22,133,54,181,11,
    180,86,160,118,145,214,138,164,192,181,41,44,81,187,76,107,
    101,83,47,80,56,68,109,135,214,28,82,123,19,249,36,195,
    180,54,76,171,157,81,82,74,233,17,84,58,138,222,241,139,
    244,1,47,91,33,191,36,133,81,242,203,82,24,35,127,72,
    10,227,228,59,82,224,153,134,201,63,65,254,8,170,7,68,
    239,174,113,165,34,109,39,201,31,149,194,36,241,220,254,24,
    125,192,251,159,34,127,92,152,211,228,79,72,225,20,118,82,
    175,158,228,35,7,255,227,207,74,213,226,98,90,66,61,113,
    163,40,77,79,72,177,30,180,111,174,183,116,51,189,203,223,
    40,174,42,244,42,51,185,21,197,169,171,55,12,163,192,228,
    145,23,119,154,152,164,194,223,34,127,223,130,76,191,201,237,
    41,81,143,183,169,40,158,198,170,251,22,117,28,112,90,82,
    78,45,106,217,16,40,75,15,204,2,14,116,96,211,190,13,
    249,245,44,154,97,201,204,160,165,72,173,18,215,10,52,131,
    97,101,244,238,217,232,129,222,5,218,221,146,241,67,212,114,
    48,197,210,253,85,218,47,10,107,152,90,35,212,43,66,254,
    7,22,237,151,168,87,66,121,219,166,248,17,166,224,149,103,
    184,121,102,191,76,233,168,76,91,70,119,76,59,68,189,2,
    181,198,168,55,132,3,168,7,143,136,127,87,49,233,56,197,
    47,171,221,111,147,41,47,221,95,166,125,39,171,244,28,154,
    219,31,166,116,130,122,195,114,238,243,106,247,107,40,47,221,
    159,164,253,17,98,217,246,70,48,49,239,70,61,24,81,171,
    15,62,23,222,112,159,247,57,227,131,183,161,168,117,82,120,
    74,240,84,175,226,126,86,68,220,49,223,81,2,113,223,91,
    76,113,7,141,4,244,76,2,201,47,220,235,188,178,80,157,
    228,146,11,128,167,224,53,58,94,91,167,24,16,235,20,144,
    79,118,214,101,162,174,151,110,165,14,122,52,154,161,151,36,
    141,70,58,36,53,12,224,10,32,226,71,105,163,25,107,47,
    213,220,103,39,73,117,44,72,105,116,25,4,137,204,178,173,
    247,146,116,56,231,53,98,189,145,200,42,155,58,149,246,149,
    168,163,211,241,193,169,58,145,175,101,45,207,247,77,69,182,
    209,220,10,66,63,214,29,87,160,53,241,248,152,36,173,100,
    131,248,12,155,177,215,221,170,86,114,88,38,65,123,37,159,
    169,233,133,161,52,139,0,66,111,93,135,194,223,216,9,195,
    134,28,27,35,242,3,161,69,246,46,130,42,100,181,116,172,
    63,160,223,118,216,19,43,97,151,77,89,65,54,46,167,142,
    214,91,85,72,94,72,114,159,73,109,43,106,235,154,110,7,
    225,94,109,73,39,219,105,212,173,93,211,157,230,86,219,139,
    183,131,206,102,205,187,92,219,212,237,43,207,38,169,183,30,
    234,103,47,234,151,94,216,240,154,47,62,119,229,114,179,150,
    196,205,90,119,47,221,138,58,181,246,149,218,78,26,132,53,
    136,228,81,28,240,198,23,187,123,238,52,175,112,29,75,201,
    130,170,162,28,203,81,167,173,121,251,164,125,74,77,115,125,
    76,157,84,83,182,163,38,212,40,215,70,213,148,53,101,137,
    178,142,240,183,156,43,235,69,62,203,238,111,5,196,162,157,
    162,69,191,130,146,130,37,122,218,179,114,45,178,69,115,140,
    22,77,0,99,172,156,172,221,190,233,92,206,181,184,0,252,
    50,115,6,154,204,250,200,23,14,5,43,230,122,91,34,150,
    39,207,196,224,225,89,227,31,83,58,34,29,148,244,177,233,
    160,192,234,240,41,237,62,141,74,171,194,27,154,35,232,233,
    209,94,101,211,235,231,180,250,96,130,248,87,244,115,148,226,
    103,114,253,28,53,250,57,148,85,88,153,231,88,89,249,110,
    89,83,161,159,179,162,159,142,209,79,86,220,113,209,69,101,
    116,241,191,60,237,103,194,115,250,188,207,68,63,69,37,113,
    223,43,153,38,186,128,65,21,144,117,71,65,0,30,23,168,
    119,133,7,147,234,66,218,46,80,239,2,71,46,212,75,20,
    39,72,130,14,95,126,167,169,93,49,197,149,12,248,192,185,
    246,55,141,166,232,80,183,117,39,77,220,41,140,253,50,5,
    65,215,164,138,107,117,103,64,102,65,230,65,190,2,242,4,
    200,147,32,95,197,96,204,208,117,23,80,127,10,228,76,14,
    218,227,66,238,5,168,23,150,58,35,200,53,104,61,13,188,
    90,227,234,148,53,161,158,28,64,109,179,144,57,151,190,131,
    121,143,196,11,180,196,181,110,51,130,214,112,42,6,107,230,
    81,108,160,150,157,10,123,143,3,241,200,51,25,139,93,73,
    134,79,5,184,166,226,55,24,148,198,4,195,226,230,55,92,
    20,163,11,131,183,124,181,126,251,186,123,244,178,69,130,139,
    213,225,220,11,198,81,168,15,175,216,152,17,157,153,75,182,
    77,108,24,228,218,165,65,140,73,110,255,228,138,49,99,119,
    143,37,36,237,215,153,37,139,31,185,73,92,157,140,193,172,
    183,114,3,133,202,161,129,58,214,11,60,199,43,188,143,165,
    134,228,2,199,249,162,206,170,166,157,153,149,169,252,154,254,
    8,95,64,176,26,187,27,89,64,208,146,107,58,144,200,96,
    233,254,77,185,10,202,110,203,248,60,184,239,98,110,99,230,
    229,46,75,226,248,165,149,239,123,198,12,224,250,28,251,125,
    158,106,70,156,244,60,241,239,42,3,160,37,166,5,51,149,
    160,100,136,2,20,80,193,48,240,197,2,113,172,197,81,86,
    15,97,69,153,191,67,136,176,16,91,141,32,156,98,21,52,
    113,11,71,84,28,72,113,8,197,193,147,9,187,14,148,99,
    130,167,21,113,184,23,206,190,112,233,213,172,116,233,226,171,
    114,143,201,150,215,213,226,97,150,99,221,140,98,223,157,203,
    157,84,26,69,97,26,116,141,199,54,157,211,189,80,39,176,
    15,103,226,104,167,227,107,255,153,133,141,32,12,181,111,218,
    155,81,24,197,9,198,158,189,40,31,227,200,184,135,180,8,
    34,54,162,78,42,144,194,128,171,113,224,133,125,118,18,124,
    215,248,254,75,151,205,64,230,201,192,42,204,148,1,39,207,
    162,125,217,30,251,198,216,107,39,98,189,12,227,161,23,238,
    232,228,208,136,201,8,175,219,213,29,227,239,146,52,150,142,
    65,39,104,160,12,244,182,162,160,227,214,242,41,222,202,188,
    236,88,102,173,54,117,167,129,29,236,196,213,114,31,225,98,
    156,68,74,35,135,147,49,66,19,163,24,216,149,148,100,59,
    238,149,227,182,85,176,200,31,96,41,96,158,172,146,154,103,
    175,90,177,38,213,188,53,206,53,243,51,38,180,34,84,212,
    0,223,147,185,26,220,32,9,135,25,250,61,149,121,75,223,
    56,85,65,164,129,35,195,48,21,47,202,178,101,83,116,20,
    146,190,100,5,7,106,168,94,133,36,87,220,231,33,178,203,
    185,220,220,23,176,189,47,133,145,251,34,154,142,32,200,125,
    9,3,94,6,121,5,228,85,144,215,64,190,14,153,226,10,
    205,245,153,240,205,215,238,141,188,118,59,222,209,226,247,190,
    112,109,199,122,27,144,233,79,177,212,148,24,158,210,145,159,
    113,161,130,126,108,252,246,94,87,55,41,251,64,231,174,225,
    42,158,225,130,166,44,183,67,86,199,121,146,228,33,156,210,
    241,157,112,74,199,119,178,86,194,181,112,58,231,154,216,59,
    192,20,1,230,8,160,78,1,132,16,64,36,129,120,126,113,
    235,192,174,9,133,27,237,200,223,9,17,68,163,95,253,221,
    186,252,125,235,214,29,249,123,237,142,169,47,95,95,150,191,
    75,215,239,10,186,111,222,254,198,117,247,80,148,199,37,207,
    183,121,133,143,177,20,96,126,84,154,77,149,137,173,239,115,
    63,165,60,169,51,174,182,37,56,101,11,157,138,159,173,179,
    40,217,66,152,54,54,159,219,37,138,151,7,7,148,101,192,
    178,12,24,226,1,214,99,3,222,31,28,224,200,128,247,101,
    192,48,213,7,218,70,164,237,35,105,171,124,161,109,84,218,
    62,145,182,49,110,43,32,63,171,31,6,110,98,156,174,121,
    137,198,173,192,52,222,10,162,37,253,48,104,106,19,198,157,
    197,81,113,213,237,43,210,53,146,100,56,17,3,88,231,148,
    71,183,69,112,238,10,137,186,178,113,11,98,247,54,56,55,
    65,238,128,184,185,17,196,58,215,118,18,247,22,24,208,223,
    171,235,108,224,188,102,186,172,219,81,188,231,126,11,189,235,
    184,115,149,43,215,113,66,32,133,51,224,40,68,242,154,70,
    202,90,243,9,214,125,66,212,102,90,149,237,105,80,149,83,
    249,90,125,116,216,57,58,30,146,185,0,49,115,136,200,38,
    201,159,164,122,198,178,132,117,129,252,169,62,203,22,214,203,
    228,79,247,89,5,97,189,77,254,169,62,171,40,172,6,249,
    51,125,86,73,88,49,249,179,217,149,194,8,173,4,127,133,
    62,254,13,228,31,32,191,1,249,29,200,159,65,34,144,61,
    144,31,130,32,126,12,222,5,121,7,228,247,32,191,0,249,
    17,200,175,65,32,133,224,151,184,7,81,247,193,233,13,111,
    112,13,195,27,92,200,240,6,87,51,188,193,37,13,239,11,
    235,138,139,236,227,204,64,11,32,50,136,113,7,96,35,102,
    175,147,153,189,99,133,207,120,6,31,32,39,115,238,127,192,
    202,179,2,160,113,85,120,252,107,146,80,232,29,20,202,6,
    124,138,71,95,140,178,212,147,83,180,167,15,163,70,240,109,
    188,33,153,167,163,125,113,160,61,131,162,143,97,199,63,204,
    123,226,85,168,134,240,48,238,201,112,137,27,179,158,61,250,
    129,188,227,205,124,40,13,166,247,131,21,90,101,27,145,5,
    141,69,164,181,223,231,112,73,130,198,239,73,218,202,230,228,
    158,164,173,156,132,114,66,217,57,13,211,210,179,14,195,213,
    163,173,236,228,227,127,99,18,118,37,28,57,112,156,137,151,
    165,33,218,176,31,155,71,130,170,126,7,206,76,178,188,227,
    208,227,12,216,225,73,136,106,174,175,105,124,104,115,154,211,
    179,190,204,61,85,23,15,190,34,35,55,73,62,243,111,110,
    62,47,159,63,189,97,144,2,168,181,189,93,83,1,201,138,
    88,192,215,221,116,235,184,144,3,200,190,22,122,237,117,223,
    123,253,95,88,146,142,158,23,16,169,47,100,41,6,159,148,
    143,204,199,3,119,101,243,163,159,224,243,247,55,12,208,197,
    108,126,231,152,205,166,187,206,43,252,39,223,181,209,213,123,
    148,135,206,28,181,114,194,110,148,23,58,234,190,119,40,249,
    110,255,69,44,222,92,111,164,81,99,43,109,135,85,121,22,
    128,237,207,94,99,37,203,115,50,165,22,229,146,240,216,76,
    108,234,165,126,93,154,164,163,81,64,185,86,67,55,133,174,
    31,145,148,119,60,242,65,220,248,23,202,115,252,66,69,57,
    156,221,59,197,10,199,204,142,117,90,13,35,187,183,207,89,
    21,53,94,40,169,167,173,126,212,12,0,139,71,57,209,191,
    119,60,248,88,80,159,83,25,0,18,248,172,179,231,23,159,
    219,205,191,230,124,18,157,110,131,132,32,237,227,198,132,38,
    3,94,121,43,32,147,9,12,188,91,252,140,68,113,147,97,
    121,99,48,206,178,159,16,248,120,4,183,216,176,153,60,160,
    39,42,173,82,251,104,165,144,61,136,27,145,224,69,78,236,
    86,43,79,143,213,222,5,169,203,11,54,158,208,193,3,195,
    17,70,201,48,86,59,83,248,55,4,199,171,126,57,127,125,
    150,255,70,192,157,74,0,45,161,172,60,163,26,172,1,213,
    126,96,222,85,81,142,189,206,118,162,187,9,78,120,105,241,
    249,4,183,182,152,60,220,52,133,174,191,145,156,231,194,134,
    23,112,22,178,144,70,11,156,249,233,216,75,245,2,11,108,
    33,218,73,187,59,233,194,70,28,181,23,206,103,207,86,181,
    92,65,150,162,84,94,54,229,145,72,130,176,40,49,143,102,
    75,185,149,18,129,139,114,72,169,193,235,30,169,241,226,46,
    38,50,143,40,133,92,165,120,81,142,210,68,83,120,15,55,
    120,99,72,155,229,125,165,255,234,182,145,113,143,213,129,150,
    100,241,6,51,109,213,247,155,37,85,40,206,178,138,140,114,
    184,53,170,108,251,4,255,181,149,217,151,164,95,119,65,98,
    202,158,22,229,4,237,43,139,253,127,220,200,191,0,204,83,
    161,99,154,178,244,222,202,109,20,179,176,25,17,149,145,62,
    228,117,195,11,19,125,40,127,121,232,145,20,88,50,47,99,
    208,238,229,6,77,116,92,64,239,238,13,168,218,177,122,16,
    147,110,189,142,76,86,114,244,115,234,148,154,224,31,91,190,
    195,182,243,148,51,235,148,156,57,103,98,210,113,166,157,19,
    149,115,142,253,127,133,60,183,40,
};

EmbeddedPython embedded_m5_util_dot_writer(
    "m5/util/dot_writer.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/src/python/m5/util/dot_writer.py",
    "m5.util.dot_writer",
    data_m5_util_dot_writer,
    2969,
    7175);

} // anonymous namespace