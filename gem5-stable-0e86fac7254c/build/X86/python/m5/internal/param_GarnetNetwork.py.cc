#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_GarnetNetwork[] = {
    120,156,205,89,109,111,219,200,17,158,37,37,217,82,172,216,
    142,147,56,47,78,172,107,234,59,37,151,88,215,52,78,130,
    94,16,180,73,238,218,20,173,239,74,23,72,78,45,202,210,
    228,74,162,204,23,129,92,199,209,193,254,82,7,109,191,245,
    71,20,253,208,255,209,255,213,206,204,146,52,109,203,64,138,
    22,144,99,113,49,92,206,238,206,204,62,243,178,27,23,178,
    127,85,124,126,218,2,72,63,53,0,60,252,9,8,0,66,
    1,93,1,66,10,240,150,96,167,10,201,35,240,170,240,1,
    160,107,128,52,224,16,9,19,126,103,64,52,199,99,106,16,
    152,220,35,96,220,0,89,129,110,21,222,68,139,80,145,53,
    216,105,64,242,71,16,66,68,2,222,122,51,224,205,194,7,
    156,29,137,58,79,56,11,94,131,137,58,120,23,152,104,192,
    120,1,228,5,232,226,228,51,208,109,226,84,247,112,170,139,
    60,213,191,104,42,15,191,92,6,175,73,236,40,203,119,196,
    89,33,78,94,227,34,207,50,159,75,182,0,221,197,156,190,
    84,162,151,74,244,229,18,125,165,68,95,45,209,203,37,250,
    90,137,190,94,162,111,148,232,155,37,122,165,68,223,42,209,
    183,75,244,106,137,110,149,232,79,74,244,15,74,244,157,18,
    253,67,166,231,65,46,194,112,13,134,159,194,240,51,232,225,
    230,45,20,22,106,131,52,97,120,23,186,119,65,226,175,13,
    135,184,191,222,98,105,196,61,30,113,169,24,241,57,143,184,
    15,221,251,32,241,247,185,30,81,131,173,246,21,196,140,255,
    111,252,215,22,72,169,57,108,222,201,36,245,227,200,246,163,
    94,236,27,244,189,70,13,33,204,165,102,38,131,218,75,130,
    218,63,129,113,230,25,25,212,14,0,39,22,164,75,96,192,
    1,19,7,6,140,219,176,47,96,88,1,207,132,125,92,166,
    74,2,244,5,28,26,240,123,147,24,14,176,173,32,56,110,
    67,69,105,156,13,25,28,122,166,25,56,168,194,126,21,182,
    222,238,27,212,177,83,135,228,31,240,253,10,79,58,203,147,
    26,176,143,109,5,14,43,112,80,131,55,200,132,93,195,58,
    169,47,222,238,163,166,216,179,213,174,160,180,155,37,117,73,
    21,207,79,34,39,148,234,50,210,246,200,73,156,208,254,185,
    147,68,82,109,74,181,23,39,59,237,70,206,25,167,235,35,
    71,13,44,30,106,146,77,194,145,226,41,99,100,191,128,68,
    207,143,60,59,140,189,221,64,170,89,154,207,238,249,129,180,
    109,254,248,58,28,197,137,250,42,73,226,196,34,179,114,103,
    16,59,197,8,50,170,27,196,169,108,211,106,188,140,69,211,
    43,226,238,141,120,70,18,128,197,165,193,158,76,221,196,31,
    41,220,45,61,35,113,211,108,109,218,39,110,210,17,54,157,
    65,28,202,142,12,253,96,220,121,37,211,29,21,143,58,47,
    100,228,14,66,39,217,241,163,126,199,121,212,233,203,112,227,
    65,170,156,237,64,62,248,66,62,125,220,115,220,39,15,55,
    30,185,157,237,93,63,240,58,111,159,62,238,140,198,106,16,
    71,157,112,163,227,71,74,162,213,130,206,4,123,173,35,219,
    37,90,121,207,239,219,62,235,108,15,100,48,146,73,147,122,
    111,144,84,98,65,204,137,154,48,69,91,52,145,170,226,99,
    138,21,227,130,216,244,73,107,151,44,65,160,51,115,152,253,
    29,120,67,17,15,59,6,36,43,4,162,33,254,4,237,58,
    66,105,139,190,25,252,237,55,100,46,221,59,52,9,26,186,
    115,159,129,135,8,68,206,103,132,133,8,24,61,85,24,214,
    64,163,10,193,168,97,150,140,169,69,118,154,198,192,201,43,
    144,254,237,248,12,209,2,224,118,96,160,194,174,171,184,212,
    159,24,168,91,109,18,124,147,193,162,6,126,26,239,69,188,
    37,68,179,107,109,161,77,190,29,127,179,61,148,174,74,87,
    177,227,187,120,183,229,58,81,20,171,150,227,121,45,71,169,
    196,223,222,85,50,109,169,184,181,150,182,235,132,129,197,28,
    111,197,124,227,81,142,47,194,2,226,75,191,120,190,171,240,
    101,137,95,216,254,169,84,136,149,65,236,165,216,79,83,244,
    165,178,72,72,117,17,155,159,229,203,49,40,219,181,28,66,
    169,12,122,170,193,104,116,210,212,230,229,168,159,129,71,163,
    223,57,193,174,84,196,143,136,81,184,42,145,122,161,105,67,
    239,26,41,159,235,78,246,180,163,56,242,198,40,186,239,174,
    145,84,215,24,128,115,64,16,188,130,240,155,193,182,6,77,
    132,227,130,225,146,150,149,12,124,12,188,171,100,19,96,48,
    136,44,202,32,8,15,49,22,181,13,14,38,172,46,187,106,
    139,40,26,108,17,198,173,155,212,172,80,115,43,183,200,20,
    205,210,60,105,150,135,36,138,193,182,112,205,76,235,194,221,
    54,143,185,219,245,35,119,195,112,186,69,110,99,144,115,29,
    185,141,73,118,73,158,103,62,66,14,137,48,193,207,37,207,
    96,107,89,11,100,133,90,14,106,139,144,90,134,107,191,4,
    87,139,54,138,177,106,93,63,203,178,171,231,202,178,125,109,
    217,13,18,101,46,67,89,147,209,213,16,46,65,196,200,236,
    204,54,126,133,196,120,153,108,92,182,238,50,230,204,55,81,
    147,147,31,39,80,46,131,116,232,209,70,215,68,133,240,216,
    51,225,106,150,212,82,138,20,163,36,126,63,110,197,189,150,
    130,92,134,103,107,233,250,90,250,37,198,146,214,115,142,78,
    58,154,232,120,145,200,81,130,113,161,206,47,218,215,109,246,
    123,59,75,73,184,11,84,32,240,230,177,237,57,180,165,42,
    161,136,54,109,195,55,10,195,147,30,95,146,28,13,182,186,
    9,203,248,52,4,11,107,199,28,109,185,114,225,175,248,188,
    32,251,147,9,36,80,109,108,109,105,85,88,75,210,215,250,
    236,24,174,166,167,163,117,15,23,125,149,123,106,13,10,20,
    209,99,146,22,228,60,127,1,46,247,4,252,25,8,49,8,
    140,204,221,216,177,233,161,141,95,34,246,63,0,7,178,9,
    121,212,208,110,107,100,161,14,189,58,125,194,172,58,173,254,
    18,254,90,138,130,135,38,8,74,129,102,86,208,149,83,96,
    165,112,116,134,218,71,165,185,202,241,136,64,251,54,112,82,
    98,211,190,111,22,190,127,20,80,139,42,12,3,218,20,81,
    56,171,37,176,73,216,215,71,24,164,252,114,83,44,25,37,
    100,221,167,230,65,1,42,145,247,77,71,238,213,147,9,161,
    148,39,109,29,132,127,65,194,85,88,157,249,26,199,185,99,
    179,20,46,85,205,93,234,97,225,82,146,83,195,7,62,27,
    80,107,16,80,14,13,129,7,75,44,154,232,76,87,1,89,
    133,110,141,156,143,235,94,145,249,166,200,227,35,173,119,44,
    239,176,197,54,181,45,11,172,104,24,80,243,126,218,241,136,
    144,240,44,112,194,109,207,121,222,39,41,72,20,55,247,86,
    35,215,107,161,172,23,121,154,56,75,53,126,253,34,215,239,
    221,180,99,209,143,112,209,66,47,246,60,47,118,57,0,253,
    118,32,91,161,12,183,241,224,56,240,71,173,94,224,244,121,
    63,205,76,239,111,114,189,21,3,226,100,85,144,82,148,219,
    140,91,110,28,97,106,217,117,85,156,180,60,137,103,41,233,
    181,30,180,56,47,181,252,180,229,108,227,87,199,85,218,115,
    142,199,5,46,79,157,164,159,114,37,186,179,71,228,121,192,
    131,141,167,104,31,107,242,65,110,55,125,180,43,146,12,151,
    225,218,13,49,121,227,25,73,141,117,232,124,76,205,93,106,
    214,224,156,228,162,14,46,218,163,213,201,196,53,140,110,117,
    193,181,219,49,198,111,105,108,122,58,52,236,125,76,104,208,
    183,77,89,128,168,17,167,156,161,3,62,181,117,74,73,221,
    70,222,121,129,219,57,238,108,230,23,90,23,185,115,30,186,
    11,116,147,66,61,139,20,95,102,254,215,248,194,78,56,109,
    243,147,251,69,255,215,176,98,61,60,111,106,89,63,134,172,
    166,57,43,164,136,178,206,77,29,82,134,34,63,117,148,21,
    230,11,145,27,147,241,105,187,137,116,148,212,155,123,99,250,
    86,224,168,165,101,26,21,91,156,171,90,156,202,158,20,234,
    30,114,161,55,190,92,58,22,240,142,139,55,88,149,225,209,
    97,159,45,98,27,250,244,112,132,237,74,97,152,101,50,187,
    220,179,39,24,71,159,16,72,34,103,52,146,145,119,84,253,
    243,151,105,3,230,113,102,160,188,208,194,82,255,50,62,167,
    29,156,148,45,233,206,123,93,45,92,250,28,236,58,99,255,
    125,190,223,109,186,52,59,202,12,22,237,182,206,5,69,26,
    176,126,82,236,223,157,51,128,189,189,219,235,201,196,78,253,
    239,37,157,71,63,138,15,11,64,190,78,44,245,169,7,103,
    140,139,118,201,39,237,184,103,143,252,17,14,85,78,95,166,
    188,210,127,55,130,214,36,93,39,126,229,61,102,223,245,100,
    32,149,156,132,82,69,166,201,174,13,60,137,149,65,60,198,
    195,43,159,248,240,61,176,237,115,145,51,159,226,162,33,100,
    225,153,114,102,13,179,230,21,252,171,87,234,130,203,151,19,
    55,236,90,96,178,165,62,219,140,83,139,3,227,124,177,243,
    124,11,156,215,10,28,18,232,252,190,233,132,250,22,143,175,
    161,172,79,168,185,147,131,135,157,89,159,131,249,68,169,79,
    252,232,254,92,91,113,41,101,173,231,168,10,55,214,115,173,
    214,181,86,47,156,84,30,211,140,47,164,195,13,181,50,145,
    253,107,103,55,80,191,142,113,19,248,50,174,204,240,117,16,
    59,202,126,39,169,196,83,87,79,124,124,29,21,159,110,78,
    156,120,203,15,245,213,169,90,60,241,221,75,28,164,175,156,
    232,77,101,226,59,1,161,249,214,196,249,172,221,237,113,174,
    209,234,9,14,212,217,119,81,162,95,249,209,78,46,213,237,
    179,172,83,112,158,177,16,179,88,49,30,120,147,83,11,105,
    142,151,65,236,238,72,47,83,111,242,44,204,243,42,14,73,
    213,201,6,226,117,88,142,147,162,150,36,200,181,153,168,241,
    87,239,63,86,227,140,83,181,206,52,237,203,56,66,175,12,
    2,84,122,50,80,136,105,107,156,42,25,158,154,229,152,61,
    114,105,8,249,57,7,39,176,179,224,73,240,56,213,203,245,
    235,233,130,128,35,72,34,251,126,74,187,179,60,105,100,150,
    22,201,151,89,208,73,81,174,60,203,121,136,60,250,52,170,
    111,241,158,83,112,231,171,31,186,243,174,207,215,69,205,160,
    255,112,49,69,67,52,69,69,204,53,235,102,189,86,175,154,
    24,157,168,103,73,52,204,122,99,78,124,220,223,42,70,178,
    134,177,58,87,23,255,1,210,76,79,52,
};

EmbeddedPython embedded_m5_internal_param_GarnetNetwork(
    "m5/internal/param_GarnetNetwork.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_GarnetNetwork.py",
    "m5.internal.param_GarnetNetwork",
    data_m5_internal_param_GarnetNetwork,
    2379,
    7817);

} // anonymous namespace