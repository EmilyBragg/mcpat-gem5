#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_Float_vector[] = {
    120,156,205,92,251,115,219,198,17,94,128,15,137,180,100,189,
    44,201,175,196,204,67,9,147,214,86,154,218,73,154,120,60,
    105,154,166,77,166,163,164,80,166,118,148,52,8,4,156,36,
    72,36,192,0,144,108,186,82,155,70,206,99,218,180,233,115,
    58,157,254,216,233,15,253,63,250,159,244,15,105,247,219,3,
    40,62,228,78,60,84,74,136,226,206,17,0,15,251,237,125,
    183,119,187,184,163,75,233,95,137,223,47,215,136,226,199,13,
    34,143,255,13,106,16,53,13,90,51,200,80,6,121,115,180,
    83,162,232,42,121,37,186,71,180,102,146,50,233,144,11,5,
    122,215,164,96,66,190,83,166,70,65,142,24,212,174,146,42,
    210,90,137,110,6,51,84,84,101,218,169,82,244,1,25,134,
    17,24,116,203,27,35,111,156,238,113,237,92,168,72,133,227,
    228,85,165,80,33,239,148,20,170,212,158,38,117,138,214,184,
    242,49,90,155,228,170,158,230,170,78,75,85,255,66,85,30,
    159,57,67,222,36,46,103,93,222,193,149,69,92,41,247,56,
    45,181,76,145,55,133,90,54,24,195,116,231,66,174,184,64,
    219,51,180,54,67,138,255,167,233,144,97,122,51,217,133,179,
    157,11,103,229,194,57,90,155,35,197,255,179,250,194,50,173,
    214,231,217,98,254,127,248,175,206,22,163,100,130,197,158,138,
    98,63,12,108,63,216,8,125,19,231,203,16,176,175,11,49,
    150,26,250,123,48,244,63,73,172,236,153,169,161,15,136,43,
    54,96,199,134,73,7,82,56,48,169,93,167,125,131,182,139,
    228,21,104,159,111,83,130,2,155,6,29,154,244,94,1,23,
    28,176,44,178,105,30,166,98,162,173,188,45,166,209,53,141,
    209,65,137,246,75,180,122,107,223,196,129,157,10,69,255,160,
    187,23,165,210,113,169,212,164,125,150,69,58,44,210,65,153,
    110,242,69,124,104,187,2,248,198,173,125,70,202,71,86,235,
    69,214,118,165,11,46,160,120,126,20,56,77,149,76,114,217,
    126,173,17,58,137,189,167,220,36,140,234,213,236,146,48,190,
    210,114,146,45,75,190,83,128,49,154,173,68,234,10,3,149,
    156,226,194,134,31,120,118,51,244,118,27,42,25,71,69,246,
    134,223,80,182,45,39,95,111,182,194,40,249,126,20,133,145,
    5,123,202,65,190,81,231,27,176,166,219,8,99,85,199,221,
    228,54,22,170,79,112,245,70,75,106,132,2,162,39,190,236,
    169,216,141,252,86,194,205,164,107,196,213,168,173,142,6,18,
    17,163,193,150,183,194,166,90,86,77,191,209,94,126,85,197,
    59,73,216,90,126,69,5,238,86,211,137,118,252,96,115,217,
    185,186,188,169,154,215,46,199,137,179,222,80,151,159,81,47,
    60,183,225,184,207,63,123,237,170,187,188,190,235,55,188,229,
    91,47,60,183,220,106,39,91,97,176,220,188,182,236,7,137,
    98,115,53,150,187,13,117,133,207,207,226,150,183,253,77,219,
    23,176,246,150,106,180,84,4,155,198,231,161,142,49,109,76,
    24,101,163,96,212,141,73,46,149,248,93,48,46,154,167,140,
    21,31,112,93,152,0,52,43,100,196,250,59,73,19,50,3,
    118,76,138,46,130,54,219,252,111,160,157,153,60,171,56,103,
    202,185,31,195,78,250,232,118,1,100,208,7,247,133,106,204,
    57,190,242,58,90,63,32,225,75,137,182,203,164,121,196,244,
    211,196,138,218,144,124,57,170,49,185,242,34,197,95,246,214,
    16,76,19,183,3,119,76,62,180,192,183,250,88,168,185,90,
    135,226,43,194,146,100,203,143,195,219,129,180,5,202,210,153,
    86,217,38,111,181,223,92,223,102,75,197,151,248,192,59,225,
    110,205,117,130,32,76,106,142,231,213,156,36,137,252,245,221,
    68,197,181,36,172,45,197,245,10,26,127,38,35,90,167,190,
    118,43,35,22,72,192,196,210,31,60,223,77,248,195,156,124,
    16,251,199,42,97,146,108,133,94,204,199,81,197,166,74,44,
    40,153,156,102,241,221,236,118,194,198,122,57,227,78,172,26,
    27,73,85,104,232,196,177,45,183,195,113,97,28,190,189,231,
    52,118,85,130,235,153,42,9,223,21,69,125,163,145,113,238,
    44,80,103,160,97,72,59,8,3,175,205,58,251,238,18,212,
    57,43,204,155,32,112,111,158,121,55,198,178,76,147,204,195,
    105,211,5,188,98,202,58,97,220,2,140,65,194,2,35,117,
    40,204,190,67,118,59,117,83,252,134,224,148,206,89,67,9,
    95,182,64,110,235,2,196,69,136,135,50,83,140,194,30,147,
    253,246,120,22,58,152,98,4,183,144,194,237,116,176,149,158,
    14,118,238,168,131,177,203,92,69,71,49,209,157,142,58,74,
    1,6,137,110,164,189,2,93,144,137,193,167,187,250,130,152,
    201,154,6,252,114,70,99,11,220,236,38,232,102,23,65,45,
    180,144,176,211,58,119,63,147,94,202,135,73,55,181,73,175,
    65,135,137,148,87,147,194,167,170,225,130,20,102,106,96,49,
    238,171,92,104,47,194,184,221,102,93,228,1,241,102,48,41,
    35,155,140,142,50,194,107,47,163,173,173,11,69,48,112,163,
    64,11,233,136,21,195,41,180,162,240,78,187,22,110,212,18,
    202,116,184,190,20,95,89,138,95,98,183,81,187,33,142,72,
    59,14,237,26,34,213,138,216,5,84,228,131,238,214,182,116,
    113,59,29,118,216,252,24,253,165,213,196,232,226,197,226,36,
    130,243,26,153,197,171,29,139,3,192,75,80,160,42,230,46,
    208,34,191,171,134,104,105,135,226,81,101,62,34,103,249,253,
    10,12,15,236,138,48,223,179,86,53,6,129,7,160,214,147,
    61,76,26,1,56,235,105,190,219,171,89,167,44,83,135,55,
    120,23,160,62,250,201,103,36,179,55,131,62,37,112,132,169,
    144,246,44,233,195,120,163,169,231,112,249,251,36,206,234,152,
    65,210,212,61,212,76,221,25,119,224,248,121,185,84,143,153,
    111,208,231,93,158,238,176,64,6,198,183,66,58,63,235,30,
    223,138,157,62,45,228,250,74,99,88,177,183,243,163,193,182,
    156,24,151,233,110,94,232,116,243,35,167,217,153,91,177,239,
    26,5,239,198,245,173,109,104,249,250,17,235,48,120,92,48,
    230,204,46,46,125,19,226,114,135,70,70,118,236,255,172,240,
    165,126,111,223,53,250,217,218,195,254,16,90,21,5,199,84,
    89,198,127,61,29,121,157,171,116,184,154,78,247,41,101,221,
    231,223,157,238,163,196,241,223,147,217,61,164,9,110,28,154,
    6,7,70,60,9,66,76,82,36,85,162,181,50,169,49,76,
    194,17,241,148,210,136,135,35,11,20,78,209,81,132,36,209,
    15,130,36,3,145,77,26,36,157,206,130,36,14,111,38,164,
    48,157,198,65,28,209,164,145,207,44,34,31,20,230,210,200,
    103,141,99,165,25,41,204,167,33,206,218,2,2,59,20,22,
    17,73,161,112,150,188,121,41,156,35,111,65,10,231,201,91,
    148,194,5,120,6,140,59,210,251,178,183,120,109,120,251,158,
    97,80,26,119,69,55,123,135,207,154,170,16,119,70,230,37,
    193,214,235,13,167,185,238,57,55,86,113,123,232,224,102,174,
    196,204,0,77,119,3,130,27,48,238,135,73,62,62,147,1,
    219,27,153,135,252,22,72,154,1,18,127,224,133,174,184,197,
    183,183,84,173,169,154,235,28,157,110,249,173,218,70,195,217,
    148,22,44,164,128,223,204,0,39,194,217,254,105,73,12,223,
    187,18,214,220,48,224,33,110,23,247,171,121,138,227,54,229,
    213,46,215,100,124,172,249,113,205,89,231,179,142,155,232,110,
    221,235,173,100,70,236,68,155,177,76,126,119,110,163,56,82,
    6,216,28,163,251,60,255,127,187,195,128,1,74,67,101,239,
    136,201,130,170,212,113,91,231,105,132,131,33,154,250,230,128,
    230,29,238,78,234,166,220,54,178,233,102,55,113,37,232,61,
    51,224,208,108,9,83,114,128,13,67,218,173,12,155,142,112,
    59,227,124,119,231,236,0,212,99,244,32,198,185,65,140,126,
    224,70,93,147,54,124,35,24,25,13,193,47,40,244,206,128,
    19,26,26,167,167,186,113,90,223,25,97,123,10,76,232,179,
    214,195,215,12,230,15,142,131,249,197,113,148,93,60,6,166,
    207,218,5,174,234,130,122,117,148,80,225,88,50,157,222,29,
    18,238,49,61,84,125,184,235,52,242,130,21,158,80,20,122,
    111,24,63,116,12,119,221,176,213,30,189,27,18,218,66,149,
    159,158,48,188,64,221,73,114,2,15,170,188,63,12,188,99,
    186,164,45,0,109,59,7,16,211,156,159,168,99,159,48,204,
    86,164,246,252,112,55,206,9,204,76,157,15,134,116,58,11,
    131,72,29,111,47,79,46,22,1,113,170,146,51,36,216,249,
    227,216,171,62,100,238,230,4,107,89,8,12,141,214,191,14,
    168,129,202,27,84,104,228,14,9,245,88,159,228,59,158,151,
    31,176,105,252,33,58,121,95,11,220,120,119,61,119,112,69,
    39,117,242,14,202,182,115,213,184,146,98,213,42,109,124,29,
    96,115,213,180,26,172,168,180,73,253,35,108,79,32,189,127,
    20,72,139,178,249,24,55,153,150,124,214,182,183,50,229,235,
    146,85,237,164,188,37,241,167,51,133,173,40,108,169,40,105,
    235,124,238,115,16,79,65,44,245,56,89,79,53,84,162,236,
    222,86,75,166,169,243,8,199,83,113,18,133,109,219,78,109,
    199,95,176,109,137,121,173,23,33,174,67,220,128,120,25,226,
    21,8,164,189,173,215,32,144,149,180,222,128,248,17,4,158,
    67,89,111,65,88,16,200,101,88,63,129,184,217,99,216,81,
    68,241,203,80,3,183,69,122,183,108,92,48,42,70,153,223,
    120,77,240,171,114,223,87,186,142,2,245,232,37,5,131,153,
    86,207,248,10,153,86,189,248,36,205,183,150,179,4,235,88,
    150,96,29,71,82,53,93,109,50,158,229,94,43,89,238,85,
    231,88,39,178,28,235,100,150,99,61,157,229,88,167,178,28,
    235,116,150,99,157,201,114,172,179,89,142,117,46,203,177,158,
    201,114,172,243,89,142,117,33,203,177,46,102,57,214,179,89,
    142,245,28,121,103,179,172,235,185,52,235,234,157,151,194,69,
    242,46,72,225,33,242,46,74,225,97,242,30,146,194,37,242,
    30,150,66,141,188,75,82,120,132,188,154,20,30,37,239,17,
    41,60,70,222,163,82,120,156,188,199,164,176,68,222,227,82,
    120,130,212,147,180,93,167,181,167,200,91,146,35,79,35,213,
    251,196,177,221,249,1,82,189,146,22,29,105,150,172,217,113,
    75,39,145,225,181,158,205,13,30,235,219,148,62,244,186,95,
    118,247,1,163,156,249,190,126,39,174,17,238,43,39,190,58,
    83,39,164,251,14,52,213,78,139,30,246,229,109,223,167,60,
    140,57,226,151,91,3,250,63,64,35,157,237,111,36,27,143,
    174,238,170,40,204,69,200,141,5,86,93,26,125,56,12,212,
    1,62,114,24,20,134,141,92,224,212,115,7,173,78,52,12,
    200,51,131,32,27,42,200,5,70,61,63,17,109,226,97,32,
    78,247,67,108,133,173,28,192,195,84,156,53,73,122,160,61,
    248,28,253,220,96,3,110,170,36,110,248,110,142,162,235,9,
    105,202,35,189,118,79,30,116,156,83,208,71,122,237,157,60,
    104,158,188,231,18,244,145,94,183,135,4,125,204,120,195,149,
    243,80,220,204,15,230,83,25,102,173,214,157,147,135,204,61,
    39,143,144,59,106,181,79,30,114,156,79,200,29,181,238,14,
    9,121,174,31,178,211,106,169,192,203,11,90,228,67,181,70,
    63,163,33,198,222,217,126,148,170,217,74,242,240,116,77,158,
    30,66,151,253,97,224,205,244,195,139,253,187,57,88,194,160,
    151,133,179,42,7,39,218,118,110,67,57,121,8,198,244,150,
    11,214,229,231,67,246,193,193,230,187,237,180,242,210,3,165,
    13,89,159,95,12,211,134,231,251,17,110,98,153,100,163,17,
    186,57,9,172,1,161,71,167,143,78,148,178,235,106,211,15,
    114,0,19,148,21,93,126,57,12,188,129,72,6,3,198,232,
    193,161,211,177,38,31,15,3,109,96,56,140,242,210,116,24,
    9,181,50,135,195,0,28,240,53,81,62,26,15,110,6,170,
    220,27,6,220,64,170,132,3,91,123,221,113,119,114,0,80,
    150,39,164,234,124,66,195,13,24,131,211,153,200,137,115,179,
    52,65,230,52,80,232,211,30,152,133,110,152,47,30,193,100,
    140,122,131,231,153,174,77,44,178,247,192,184,25,76,99,163,
    203,190,108,65,176,77,189,215,229,40,163,89,236,241,72,129,
    186,109,119,27,69,231,173,145,215,232,218,44,0,195,200,137,
    145,165,62,241,196,236,51,162,108,115,192,148,81,160,51,252,
    30,226,209,104,47,227,119,227,45,77,249,156,176,65,246,29,
    101,74,253,122,152,222,61,192,250,141,40,12,242,176,134,12,
    132,23,93,190,56,81,207,156,19,199,133,94,6,85,126,51,
    164,211,26,140,52,227,216,223,12,242,194,83,137,52,69,163,
    223,158,52,208,72,73,60,150,35,160,90,163,47,79,26,168,
    31,196,42,74,242,4,84,107,244,187,33,129,14,60,157,96,
    251,169,104,47,55,77,58,166,155,20,42,253,126,24,23,52,
    48,127,114,157,150,227,250,185,200,148,96,254,148,169,243,135,
    1,144,61,107,108,114,188,89,229,79,153,230,245,111,80,247,
    2,27,11,59,61,244,146,154,163,213,52,120,88,43,143,74,
    173,15,32,214,33,176,78,206,194,130,42,11,107,117,172,109,
    136,6,68,0,129,103,170,22,30,196,201,188,199,66,170,223,
    66,30,216,66,154,208,66,142,201,66,178,194,250,8,2,129,
    146,133,249,182,133,137,154,245,57,196,175,32,100,81,15,220,
    189,5,15,97,129,82,214,31,33,254,12,241,23,136,191,66,
    252,173,199,19,164,75,126,122,166,96,216,235,96,189,219,99,
    244,81,88,30,75,243,97,164,24,75,134,176,8,167,252,63,
    22,222,220,231,85,28,60,38,243,202,190,159,55,209,24,225,
    48,244,78,212,118,140,213,63,100,77,117,108,165,215,41,167,
    139,168,208,236,50,69,90,113,154,250,7,21,228,135,1,172,
    71,32,30,203,232,32,174,76,111,87,150,253,191,122,71,54,
    79,120,101,207,153,108,49,179,174,64,96,181,81,130,125,239,
    125,203,229,176,228,42,226,216,49,230,3,98,141,193,167,56,
    221,151,140,180,181,244,198,68,189,191,252,6,178,221,49,248,
    136,223,95,168,76,85,140,178,137,95,253,40,24,85,99,210,
    40,26,19,147,149,66,165,92,41,21,184,69,113,100,206,168,
    22,42,213,133,197,138,81,53,23,158,170,24,255,5,118,72,
    202,79,
};

EmbeddedPython embedded_m5_internal_Float_vector(
    "m5/internal/Float_vector.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/Float_vector.py",
    "m5.internal.Float_vector",
    data_m5_internal_Float_vector,
    3250,
    18390);

} // anonymous namespace