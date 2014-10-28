#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86IntelMPIOIntAssignment[] = {
    120,156,205,89,109,111,27,199,17,158,189,35,41,147,22,45,
    201,178,252,38,217,98,17,56,101,211,90,76,28,191,181,49,
    140,250,37,64,93,52,146,123,52,96,135,41,122,57,221,45,
    169,163,200,59,246,110,101,135,129,244,165,50,218,162,95,250,
    35,138,126,232,255,232,15,201,63,105,103,102,111,79,39,58,
    178,100,39,64,41,145,139,189,185,221,217,121,121,102,102,119,
    233,67,246,87,198,239,175,27,0,233,223,5,64,128,31,1,
    3,128,161,128,142,0,33,5,4,139,176,93,134,228,38,4,
    101,120,13,208,177,64,90,176,143,29,27,190,178,32,154,229,
    57,21,24,216,76,17,48,174,129,44,65,167,12,207,163,5,
    40,201,10,108,215,32,249,26,132,16,145,128,23,193,12,4,
    167,224,53,114,199,78,149,25,158,130,160,198,157,42,4,167,
    185,83,131,241,60,200,211,208,65,230,51,208,169,35,171,143,
    144,213,25,102,245,31,98,21,224,155,115,16,212,105,56,202,
    242,37,141,44,209,72,94,227,12,115,153,51,146,205,67,103,
    193,244,207,22,250,139,133,254,185,66,127,169,208,63,95,232,
    95,224,254,28,200,5,232,95,132,254,37,232,95,134,46,26,
    104,62,151,98,25,164,13,253,21,232,172,128,196,207,50,236,
    163,13,131,133,194,140,43,60,227,108,62,227,42,207,88,133,
    206,42,72,252,92,213,51,42,208,110,46,161,95,194,255,226,
    95,19,253,2,106,22,155,151,50,73,195,56,114,195,168,27,
    135,22,189,175,80,67,94,244,169,153,201,220,249,136,220,249,
    111,96,95,6,86,230,206,61,64,198,130,116,25,88,176,199,
    157,61,11,198,77,216,21,208,47,65,96,195,46,46,83,38,
    1,122,2,246,45,248,131,77,3,246,176,45,161,3,174,66,
    73,105,95,246,217,1,154,211,12,236,149,97,183,12,237,23,
    187,22,17,182,171,144,252,11,190,93,97,166,167,152,169,5,
    187,216,150,96,191,4,123,21,120,142,131,144,212,175,146,250,
    226,197,46,106,138,148,118,179,132,210,174,23,212,37,85,130,
    48,137,188,161,84,168,13,184,35,47,241,134,238,139,187,183,
    159,68,74,14,190,120,250,100,3,59,15,210,52,236,69,67,
    25,169,102,205,204,138,211,181,145,167,182,28,102,99,147,125,
    134,35,197,236,227,72,170,211,216,233,134,81,224,14,227,96,
    103,32,213,41,226,237,118,195,129,116,93,126,249,100,56,138,
    19,245,121,146,196,137,67,38,102,226,32,246,242,25,100,96,
    127,16,167,178,73,171,241,50,14,177,87,52,186,59,98,142,
    36,0,139,78,147,3,153,250,73,56,82,232,57,205,145,70,
    19,183,38,249,140,155,20,77,15,173,173,120,40,91,114,24,
    14,198,173,199,50,221,86,241,168,245,80,70,254,214,208,75,
    182,195,168,215,242,110,182,122,114,120,235,122,170,188,205,129,
    188,254,177,188,123,187,235,249,119,110,220,186,233,183,54,119,
    194,65,208,66,243,180,70,99,181,21,71,173,225,173,86,136,
    150,66,11,14,90,199,216,110,13,167,156,37,41,94,133,61,
    55,100,253,221,45,57,24,201,164,78,212,203,36,161,152,23,
    179,162,34,108,209,20,117,236,149,241,107,139,21,235,180,88,
    15,201,2,62,89,133,192,104,27,248,253,19,216,209,136,147,
    109,11,146,21,2,87,31,63,130,208,128,16,107,211,59,139,
    223,253,158,76,167,169,125,155,32,163,137,187,12,72,68,38,
    142,188,71,24,137,128,81,85,134,126,5,52,218,16,164,26,
    126,201,152,90,28,78,108,44,100,94,130,244,31,135,57,68,
    243,128,174,193,36,129,164,243,184,212,159,25,192,237,38,9,
    190,206,192,81,91,97,26,191,138,216,61,212,231,144,107,163,
    77,158,142,55,54,251,210,87,233,42,18,190,140,119,26,190,
    23,69,177,106,120,65,208,240,148,74,194,205,29,37,211,134,
    138,27,215,210,102,149,240,176,96,176,151,243,27,143,12,214,
    8,23,136,53,253,16,132,190,194,135,69,126,96,251,167,82,
    33,110,182,226,32,69,58,177,232,73,229,144,144,234,12,54,
    15,204,114,12,208,102,197,192,41,149,131,174,170,49,50,189,
    52,117,121,57,162,51,8,105,246,75,111,176,35,21,141,71,
    244,40,92,149,186,122,161,105,130,225,69,50,132,177,3,217,
    214,141,226,40,24,163,26,161,127,141,36,188,200,96,156,5,
    130,227,18,66,113,6,219,10,212,17,154,243,150,79,26,151,
    50,32,50,8,207,147,125,128,129,33,178,76,132,128,220,199,
    124,213,180,56,225,176,234,28,194,148,100,56,11,57,132,119,
    103,153,154,21,106,174,24,235,76,137,137,234,147,38,186,65,
    98,89,108,23,223,206,44,144,135,225,250,161,48,188,116,16,
    134,152,126,219,20,78,22,5,221,65,56,217,100,163,228,126,
    22,59,20,168,8,31,124,93,136,24,182,156,51,79,22,169,
    24,176,59,132,224,34,140,123,5,24,59,228,52,198,176,115,
    233,40,43,175,78,173,149,123,218,202,183,72,172,217,12,125,
    117,70,93,77,248,4,29,43,179,57,219,251,49,118,198,23,
    200,222,69,75,95,192,122,251,60,170,115,225,228,226,203,219,
    20,157,158,180,3,116,167,68,56,237,218,112,62,43,136,41,
    101,147,81,18,127,51,110,196,221,134,2,35,195,189,107,233,
    218,181,244,51,204,55,141,251,156,193,116,198,209,57,37,145,
    163,4,115,71,149,31,116,62,112,57,55,184,89,9,67,143,
    208,230,130,29,201,126,224,244,151,170,132,178,222,52,57,161,
    150,59,129,116,250,140,100,170,177,7,108,184,128,223,154,96,
    193,221,152,179,51,239,128,248,45,126,31,146,47,200,28,18,
    104,31,235,180,181,90,172,49,233,238,252,244,16,222,166,67,
    95,231,35,20,224,177,137,230,10,228,232,162,175,77,26,81,
    128,253,21,120,11,41,224,47,64,72,66,192,100,33,201,193,
    79,95,2,196,34,13,255,35,112,226,251,158,26,108,233,208,
    182,178,212,136,145,159,222,225,161,186,36,255,22,254,86,200,
    154,251,54,8,42,159,118,182,73,44,150,207,82,158,12,24,
    130,39,42,145,165,195,89,131,124,184,229,165,52,76,231,7,
    59,207,15,7,9,56,223,205,97,210,155,14,111,113,180,161,
    52,46,9,254,228,0,155,84,155,150,197,162,85,64,220,47,
    168,185,158,131,77,24,218,255,95,135,213,201,98,82,168,183,
    174,78,224,191,33,65,75,172,218,92,69,145,216,196,177,253,
    192,125,180,241,187,141,245,182,155,49,207,31,15,47,146,71,
    101,217,68,229,141,60,42,37,87,157,215,124,76,161,214,34,
    124,237,91,2,207,145,184,79,163,35,92,9,100,25,58,21,
    138,95,222,118,139,44,188,133,73,183,148,166,15,149,52,54,
    238,186,54,123,14,49,141,30,106,190,153,162,112,103,0,221,
    27,120,195,205,192,187,223,33,137,72,44,223,4,188,101,116,
    156,47,234,72,193,42,142,82,147,31,63,54,186,190,156,34,
    93,157,79,80,128,92,71,14,228,32,246,57,159,61,219,146,
    141,161,28,110,226,217,118,43,28,53,186,3,175,199,126,182,
    51,27,108,24,27,40,6,202,228,70,36,165,164,185,30,55,
    252,56,194,10,182,227,171,56,105,4,18,143,120,50,104,92,
    111,112,249,107,132,105,195,219,196,183,158,175,116,240,29,78,
    51,188,83,246,146,94,202,155,226,237,87,212,157,34,219,101,
    101,61,140,66,60,42,124,101,108,168,79,159,121,45,227,211,
    129,142,100,220,47,224,209,77,141,117,86,190,77,205,207,168,
    185,6,83,88,242,90,84,47,72,18,50,125,5,19,103,85,
    112,82,58,114,210,83,226,153,190,153,86,190,59,73,90,209,
    23,83,89,114,169,208,72,57,67,247,20,212,86,169,10,118,
    106,134,120,154,219,89,38,214,13,241,12,183,115,76,156,55,
    196,5,110,207,50,113,209,16,207,113,187,196,196,243,134,120,
    129,219,139,76,188,100,136,151,185,93,102,226,138,185,100,187,
    194,196,171,116,45,20,84,152,210,160,36,56,243,67,147,32,
    103,135,105,242,63,229,5,239,71,205,125,206,141,105,86,209,
    249,20,178,125,220,81,121,79,20,245,175,235,188,215,23,230,
    52,86,84,158,47,147,62,60,62,88,92,63,145,158,146,26,
    0,151,167,203,58,156,114,181,124,126,14,3,99,130,252,20,
    123,39,55,195,62,111,122,199,231,10,71,39,70,133,120,142,
    59,84,60,94,237,178,165,92,75,159,176,14,98,161,148,27,
    236,3,108,34,249,234,104,169,180,209,244,137,138,164,243,70,
    35,25,5,7,167,37,126,51,69,38,228,20,191,13,7,27,
    80,60,26,157,195,239,155,137,130,140,80,176,9,227,161,156,
    167,134,41,67,6,199,205,200,96,162,249,19,40,150,59,135,
    16,161,11,92,94,219,156,95,229,62,54,187,212,183,5,197,
    40,30,120,73,168,198,116,192,127,183,9,184,85,214,183,188,
    25,65,125,122,130,217,129,76,149,27,198,174,55,194,157,117,
    24,240,170,239,51,143,22,159,3,190,85,46,210,213,141,19,
    240,98,235,39,59,35,197,23,132,44,194,123,76,35,9,104,
    183,113,152,172,126,126,2,78,120,16,236,245,100,194,43,191,
    203,120,90,146,175,104,245,179,250,228,4,115,211,120,39,241,
    165,187,185,147,26,115,191,251,44,90,151,239,192,139,84,117,
    251,157,221,22,169,48,98,17,222,115,42,201,113,246,13,167,
    211,171,19,57,176,40,126,242,167,19,251,125,98,154,241,251,
    97,50,103,31,174,66,129,28,72,37,143,203,171,138,130,54,
    187,36,36,117,146,120,236,186,250,30,7,159,7,174,59,117,
    91,212,187,40,192,215,144,253,16,66,91,212,10,110,82,151,
    14,253,87,75,85,193,231,137,137,95,229,180,26,13,48,119,
    23,227,212,225,77,192,92,158,169,56,143,152,13,59,151,57,
    186,183,91,247,134,250,134,159,175,165,29,206,125,31,152,100,
    199,69,73,223,121,241,141,145,190,233,195,146,198,135,29,62,
    219,56,107,166,210,13,111,173,25,93,215,100,180,83,84,245,
    169,73,95,22,143,227,107,149,183,12,127,98,194,253,25,69,
    251,135,111,31,252,76,7,234,23,113,160,19,67,113,232,164,
    201,31,122,169,124,20,71,221,176,247,121,164,146,177,90,254,
    222,241,237,112,168,127,133,81,11,19,239,131,196,195,254,210,
    4,53,149,73,232,13,194,111,245,207,46,134,204,103,139,227,
    4,56,246,142,99,98,2,31,98,212,47,143,155,53,1,45,
    14,129,68,246,194,20,69,155,56,243,76,44,144,237,72,238,
    158,180,180,21,57,79,91,56,233,91,15,125,17,125,159,126,
    30,229,43,115,250,57,167,58,87,21,21,139,126,87,180,69,
    77,212,69,73,204,214,171,118,181,82,45,219,24,114,68,89,
    20,53,187,90,155,21,197,255,85,12,189,154,181,186,80,21,
    255,3,150,116,41,125,
};

EmbeddedPython embedded_m5_internal_param_X86IntelMPIOIntAssignment(
    "m5/internal/param_X86IntelMPIOIntAssignment.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_X86IntelMPIOIntAssignment.py",
    "m5.internal.param_X86IntelMPIOIntAssignment",
    data_m5_internal_param_X86IntelMPIOIntAssignment,
    2422,
    8402);

} // anonymous namespace