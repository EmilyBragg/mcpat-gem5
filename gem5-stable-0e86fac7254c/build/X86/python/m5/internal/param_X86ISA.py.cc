#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86ISA[] = {
    120,156,205,88,91,111,220,198,21,62,67,114,41,237,74,107,
    73,150,109,249,214,136,69,32,116,27,212,218,212,181,108,163,
    49,140,38,113,129,186,104,229,148,219,86,206,54,45,67,145,
    179,187,92,241,178,32,71,118,54,144,94,42,163,237,91,127,
    68,209,135,254,143,254,175,246,156,51,36,69,41,49,16,160,
    69,54,210,114,48,28,206,156,57,151,239,92,102,2,40,255,
    90,248,252,204,1,40,134,2,32,196,159,128,24,32,17,128,
    239,66,10,8,55,225,168,5,249,3,8,91,240,6,96,104,
    128,52,224,12,59,38,252,193,128,116,149,215,216,16,155,60,
    34,96,222,1,105,193,176,5,7,233,6,88,210,134,163,14,
    228,159,131,16,34,21,240,50,92,130,112,25,222,32,117,236,
    180,153,224,50,132,29,238,180,33,92,225,78,7,230,235,32,
    87,96,136,196,151,96,216,69,82,239,33,169,43,76,234,223,
    68,42,196,47,215,32,236,210,116,228,229,83,154,105,209,76,
    222,227,10,83,89,171,56,91,135,225,70,213,191,218,232,111,
    114,127,13,228,6,76,175,193,244,58,76,111,192,8,5,94,
    175,169,110,129,52,97,122,19,134,55,65,226,111,11,206,80,
    39,225,70,99,197,45,94,113,181,94,113,155,87,220,129,225,
    29,144,248,187,173,87,216,48,232,93,71,61,71,255,193,191,
    30,234,25,212,42,54,175,100,94,68,89,234,69,233,40,139,
    12,250,110,83,67,86,9,168,89,42,205,243,49,153,231,95,
    192,182,9,141,210,60,167,128,132,5,201,18,27,112,202,157,
    83,3,230,61,56,17,48,181,32,52,225,4,183,105,17,3,
    99,1,103,6,124,102,210,132,83,108,45,84,232,59,96,41,
    109,155,41,43,84,83,90,130,211,22,156,180,96,240,242,196,
    160,129,163,54,228,255,132,47,239,50,209,101,38,106,192,9,
    182,22,156,89,112,106,195,1,78,194,161,105,155,196,23,47,
    79,80,82,28,25,244,44,228,118,191,33,46,137,18,70,121,
    234,39,82,117,177,239,205,252,220,79,188,151,143,31,62,31,
    124,216,235,84,83,178,98,119,230,171,137,203,107,76,82,70,
    50,83,76,43,75,165,90,193,206,40,74,67,47,201,194,227,
    88,170,101,34,228,141,162,88,122,30,127,124,158,204,178,92,
    253,60,207,179,220,37,125,242,96,156,249,245,10,210,102,16,
    103,133,236,209,110,188,141,75,228,21,205,30,205,152,34,49,
    192,124,210,226,80,22,65,30,205,20,154,73,83,164,217,68,
    173,71,6,226,166,32,131,245,39,89,34,251,50,137,226,121,
    255,153,44,142,84,54,235,127,36,211,96,146,248,249,81,148,
    142,251,254,131,254,88,38,123,247,10,229,31,198,242,222,251,
    242,241,195,145,31,60,186,191,247,32,232,31,30,71,113,216,
    71,93,244,103,115,53,201,210,126,178,215,143,82,37,81,93,
    113,191,169,168,93,252,126,149,182,124,29,141,189,136,133,245,
    38,50,158,201,156,116,90,220,38,118,196,186,88,21,182,48,
    69,79,116,177,215,194,199,20,119,141,21,177,31,145,184,1,
    169,128,96,102,86,192,250,7,176,9,17,1,71,6,228,119,
    9,54,83,252,9,178,51,130,103,64,223,12,254,246,27,210,
    147,30,157,154,4,6,61,120,194,80,67,204,225,204,39,100,
    253,20,24,47,45,152,218,160,113,132,240,211,192,202,231,212,
    226,116,34,99,32,113,11,138,191,95,164,144,174,3,218,1,
    221,25,135,110,224,86,127,102,104,14,122,196,248,62,163,68,
    77,162,34,123,157,178,45,168,207,206,52,64,157,124,50,127,
    113,56,149,129,42,182,113,224,211,236,216,9,252,52,205,148,
    227,135,161,227,43,149,71,135,199,74,22,142,202,156,157,162,
    215,38,227,111,84,64,171,233,205,103,21,176,8,4,8,44,
    253,18,70,129,194,151,77,126,97,253,23,82,33,72,38,89,
    88,224,56,145,24,75,229,18,147,234,10,54,31,86,219,49,
    26,123,118,133,157,66,198,35,213,97,24,250,69,225,241,118,
    52,206,136,163,213,175,252,248,88,42,154,143,80,81,184,43,
    117,245,70,11,195,220,77,146,186,18,154,20,233,165,89,26,
    206,145,231,40,216,33,118,110,50,242,86,129,176,119,29,113,
    183,132,173,13,93,196,225,186,17,144,120,86,137,58,70,220,
    13,82,6,48,10,68,25,80,16,125,103,24,118,122,6,199,
    13,150,147,157,211,161,30,45,118,9,220,238,29,106,238,82,
    243,189,74,21,139,208,71,247,178,62,238,19,15,6,43,33,
    48,75,113,107,7,219,191,224,96,183,206,29,12,67,230,128,
    28,197,32,119,58,119,20,147,20,146,63,45,189,130,92,16,
    129,129,159,27,190,192,106,114,215,73,124,187,130,177,75,216,
    108,2,116,220,0,168,75,22,98,116,186,183,222,166,210,237,
    239,134,74,199,90,165,123,196,195,106,137,171,46,227,169,35,
    2,2,133,81,42,152,149,251,12,59,243,45,82,110,83,173,
    91,152,16,15,210,46,103,54,206,142,92,23,232,40,163,181,
    173,59,22,33,112,100,194,141,50,99,21,20,20,102,121,246,
    197,220,201,70,142,130,138,135,39,59,197,238,78,241,1,134,
    13,231,41,7,34,29,56,116,104,200,229,44,199,16,208,230,
    23,237,214,30,187,184,87,166,29,84,63,101,127,182,26,43,
    157,163,88,161,114,10,94,11,211,120,167,214,56,9,240,1,
    49,208,97,117,155,176,133,79,71,48,151,94,198,17,149,235,
    17,254,138,207,71,164,120,146,93,2,85,137,238,64,203,192,
    226,145,160,238,15,46,32,105,1,194,185,239,225,110,207,42,
    167,180,161,198,13,61,38,177,79,126,242,87,224,234,77,192,
    95,128,48,130,80,40,61,139,125,152,30,50,245,38,77,255,
    19,112,176,250,154,36,105,104,15,53,202,112,134,14,92,60,
    226,169,58,103,254,18,254,214,136,116,103,38,8,202,111,102,
    89,159,53,243,155,85,251,52,131,235,27,229,48,235,162,243,
    147,193,38,126,65,211,180,155,155,181,155,159,7,205,186,182,
    194,216,181,8,220,45,235,173,61,226,242,249,57,234,40,121,
    220,17,155,70,3,75,63,162,230,94,13,35,81,141,125,203,
    12,111,95,142,246,141,236,231,233,8,251,11,226,202,98,57,
    214,108,69,6,209,203,189,143,95,252,234,197,254,192,195,110,
    237,65,173,202,131,238,215,30,36,57,246,191,225,2,159,90,
    131,224,113,102,8,60,81,97,29,68,135,25,11,100,11,134,
    54,249,26,215,176,162,116,69,81,197,65,138,159,23,18,11,
    171,107,95,43,178,70,136,54,62,53,95,44,44,238,144,253,
    159,196,126,114,24,250,79,127,79,219,19,15,65,229,156,70,
    37,208,122,83,32,114,44,241,54,153,248,245,253,74,176,87,
    11,139,57,63,198,221,106,129,216,195,194,44,224,64,243,219,
    137,116,18,153,28,226,121,111,18,205,156,81,236,143,217,130,
    102,41,240,139,74,96,197,16,184,156,232,11,138,102,251,153,
    19,100,41,38,141,227,64,101,185,19,74,60,9,201,208,185,
    231,112,198,113,162,194,241,15,241,171,31,40,237,40,23,253,
    159,107,76,63,31,23,92,78,30,189,166,238,66,17,224,225,
    169,55,194,138,250,160,82,152,62,145,213,233,131,139,104,237,
    117,152,143,241,132,163,230,58,54,62,164,230,135,212,236,192,
    162,179,76,31,119,251,29,109,75,74,181,49,124,181,5,159,
    69,244,140,79,104,118,241,85,191,255,245,55,241,123,125,135,
    82,122,191,93,93,190,44,129,92,166,195,246,176,67,55,24,
    52,178,66,33,97,233,127,13,9,236,62,11,117,156,63,254,
    95,35,129,123,255,59,35,143,251,19,40,203,141,183,69,1,
    209,20,182,171,163,192,84,84,181,127,83,82,190,129,216,188,
    4,48,47,200,165,175,164,182,227,237,5,202,205,161,69,51,
    227,213,214,172,132,171,79,67,143,106,1,207,184,234,154,95,
    107,84,229,108,92,113,128,37,18,86,238,39,172,3,207,208,
    197,251,57,126,173,90,21,132,140,84,190,246,154,234,208,149,
    57,177,226,207,102,50,13,207,171,110,254,178,48,80,80,220,
    250,28,206,203,29,44,177,175,225,243,85,183,37,241,26,210,
    178,89,91,181,163,46,210,192,12,108,89,153,182,71,145,238,
    60,96,187,100,88,29,162,235,232,236,254,20,170,136,93,67,
    55,148,177,68,128,52,77,198,118,44,15,173,161,196,36,150,
    205,241,4,197,167,15,124,143,61,111,177,81,254,49,238,246,
    25,148,39,65,138,242,54,198,249,182,213,22,156,94,47,93,
    220,106,46,169,218,214,53,246,188,112,57,10,172,213,74,224,
    59,198,42,165,177,55,208,201,113,223,79,244,85,17,95,121,
    184,223,167,230,221,74,153,12,103,125,16,227,147,141,62,107,
    34,242,57,247,115,170,119,119,105,156,14,243,201,222,110,37,
    202,174,22,101,16,37,250,94,140,175,57,147,61,46,80,155,
    211,194,220,199,254,245,75,163,133,204,35,63,142,190,212,247,
    97,213,176,34,73,46,211,37,126,234,55,78,139,234,29,248,
    154,34,152,109,156,203,113,84,32,49,166,84,175,42,189,151,
    148,173,110,93,14,113,205,101,11,5,131,174,94,245,177,254,
    41,93,16,23,79,176,161,107,175,246,90,91,216,6,93,182,
    154,162,35,186,194,18,171,221,182,217,182,219,45,19,1,67,
    35,155,162,99,182,59,171,130,254,183,17,62,29,99,187,211,
    22,255,5,83,31,166,2,
};

EmbeddedPython embedded_m5_internal_param_X86ISA(
    "m5/internal/param_X86ISA.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_X86ISA.py",
    "m5.internal.param_X86ISA",
    data_m5_internal_param_X86ISA,
    2103,
    6537);

} // anonymous namespace