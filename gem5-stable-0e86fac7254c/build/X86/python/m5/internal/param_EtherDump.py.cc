#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_EtherDump[] = {
    120,156,205,88,91,111,219,200,21,62,67,82,178,37,75,177,
    28,199,118,226,184,181,138,194,168,118,209,88,219,52,78,130,
    110,16,180,219,44,208,237,131,119,75,181,117,86,123,97,105,
    114,36,81,230,69,32,199,113,180,176,95,234,160,237,91,127,
    68,209,135,254,143,254,175,246,156,51,36,45,43,73,177,192,
    46,170,216,226,96,56,156,57,115,46,223,185,204,120,144,255,
    85,240,249,101,27,32,235,11,0,31,127,2,66,128,72,0,
    190,11,41,192,95,135,147,10,164,15,192,175,192,43,128,190,
    1,210,128,75,236,152,240,133,1,113,131,215,84,33,52,121,
    68,192,180,14,210,130,126,5,142,226,53,176,100,21,78,234,
    144,254,9,132,16,177,128,231,254,18,248,203,240,10,169,99,
    167,198,4,151,193,175,115,167,6,254,10,119,234,48,109,129,
    92,129,62,18,95,130,126,19,73,189,143,164,110,48,169,127,
    19,41,31,191,220,2,191,73,211,145,151,207,105,166,69,51,
    121,143,27,76,101,181,224,172,5,253,181,162,127,115,166,191,
    206,253,85,144,107,48,190,5,227,13,24,111,194,0,5,110,
    149,84,183,64,154,48,190,13,253,219,32,241,183,5,151,168,
    19,127,109,102,197,29,94,113,179,92,177,205,43,238,66,255,
    46,72,252,109,235,21,85,232,117,54,80,207,193,127,240,175,
    131,122,6,213,192,230,133,76,179,32,137,157,32,30,36,129,
    65,223,171,212,144,85,60,106,150,114,243,252,154,204,243,47,
    96,219,248,70,110,158,11,64,194,130,100,9,13,184,224,206,
    133,1,211,14,156,11,24,91,224,155,112,142,219,84,136,129,
    161,128,75,3,190,52,105,194,5,182,22,42,244,135,96,41,
    109,155,49,43,84,83,90,130,139,10,156,87,160,247,252,220,
    160,129,147,26,164,255,132,111,118,152,232,50,19,53,224,28,
    91,11,46,45,184,168,194,17,78,194,161,113,141,196,23,207,
    207,81,82,28,233,117,44,228,246,112,70,92,18,197,15,210,
    216,141,164,106,97,223,153,184,169,27,57,31,171,145,76,159,
    157,70,147,78,189,152,149,100,251,19,87,141,108,94,102,146,
    62,162,137,98,114,73,44,213,10,118,6,65,236,59,81,226,
    159,134,82,45,19,45,103,16,132,210,113,248,227,39,209,36,
    73,213,199,105,154,164,54,169,148,7,195,196,45,87,144,66,
    189,48,201,100,135,118,227,109,108,34,175,104,246,96,194,20,
    137,1,102,149,22,251,50,243,210,96,162,208,82,154,34,205,
    38,106,29,178,17,55,25,154,4,186,163,36,146,93,25,5,
    225,180,251,76,102,39,42,153,116,63,146,177,55,138,220,244,
    36,136,135,93,247,65,119,40,163,131,123,153,114,143,67,121,
    239,3,249,248,225,192,245,30,221,63,120,224,117,143,79,131,
    208,239,62,127,252,176,59,153,170,81,18,119,163,131,110,16,
    43,137,26,11,187,115,186,218,199,41,55,105,215,179,96,232,
    4,44,175,51,146,225,68,166,77,26,221,38,142,68,75,52,
    68,85,152,162,35,154,216,171,224,99,138,29,99,69,28,6,
    36,177,71,90,32,176,153,5,188,254,1,108,72,196,193,137,
    1,233,14,129,103,140,63,65,214,70,8,245,232,155,193,223,
    126,71,170,210,163,99,147,32,161,7,207,25,112,136,60,156,
    249,132,48,16,3,163,166,2,227,42,104,52,33,8,53,188,
    210,41,181,56,157,200,24,72,220,130,236,239,215,41,196,45,
    64,83,160,83,227,208,38,110,245,103,6,104,175,67,140,31,
    50,80,212,40,200,146,179,152,205,65,125,118,169,30,234,228,
    179,233,167,199,99,233,169,108,23,7,62,79,78,219,158,27,
    199,137,106,187,190,223,118,149,74,131,227,83,37,179,182,74,
    218,123,89,167,70,246,95,43,176,86,210,155,78,10,108,17,
    14,16,91,250,197,15,60,133,47,235,252,194,250,207,164,66,
    156,140,18,63,195,113,34,49,148,202,38,38,213,13,108,126,
    85,108,199,128,236,84,11,248,100,50,28,168,58,35,209,205,
    50,135,183,163,113,6,29,173,126,225,134,167,82,209,124,68,
    139,194,93,169,171,55,90,36,236,110,147,224,133,220,164,75,
    39,78,98,127,138,108,7,222,30,113,116,155,193,215,0,130,
    223,6,66,111,9,219,42,52,17,138,45,195,35,9,173,28,
    120,12,186,77,210,7,48,16,68,30,89,16,128,151,24,127,
    58,6,7,16,22,149,93,180,77,61,90,108,19,190,237,187,
    212,236,80,243,131,66,27,11,82,73,115,94,37,247,137,13,
    131,245,224,153,185,196,165,155,29,94,115,179,59,87,110,134,
    225,179,71,238,98,144,83,93,185,139,73,58,73,159,230,190,
    65,142,136,240,192,207,51,30,193,154,178,41,168,50,190,24,
    204,54,33,116,22,166,195,25,152,218,100,36,198,168,125,231,
    109,90,221,125,103,180,58,212,90,61,32,54,26,57,186,154,
    140,170,186,240,8,26,70,174,99,214,239,51,236,76,183,72,
    191,179,154,221,194,252,120,20,55,57,209,113,178,228,50,65,
    135,27,173,112,221,177,8,135,3,19,54,243,4,150,81,116,
    152,164,201,203,105,59,25,180,21,20,60,60,217,203,246,247,
    178,15,49,126,180,159,114,68,210,17,68,199,136,84,78,82,
    140,5,53,126,209,254,237,176,175,59,121,10,66,11,80,49,
    192,134,99,189,115,56,203,84,74,81,108,145,74,175,151,74,
    39,25,62,36,30,234,172,113,19,182,240,169,11,102,212,73,
    56,186,114,133,194,95,241,249,136,116,79,226,75,160,186,209,
    238,105,49,88,66,146,213,254,201,53,60,45,70,62,251,125,
    220,240,89,225,157,85,40,209,67,143,73,18,144,195,252,21,
    184,164,19,240,23,32,164,32,32,114,23,99,103,166,135,12,
    190,78,211,191,6,14,92,111,200,153,134,118,85,35,15,109,
    232,201,217,35,158,170,83,232,111,225,111,51,81,239,210,4,
    65,233,206,204,139,182,217,116,103,149,206,205,16,251,86,41,
    205,186,30,5,200,102,35,55,163,105,218,223,205,210,223,175,
    2,104,89,109,97,16,91,16,250,150,245,238,14,49,250,201,
    21,246,40,151,220,21,235,198,12,162,126,74,205,189,18,76,
    162,24,251,255,243,188,59,31,252,103,242,161,163,3,238,111,
    136,49,139,69,89,173,114,84,40,41,148,46,84,41,92,232,
    126,233,66,146,83,192,43,174,249,169,53,8,28,151,134,192,
    67,22,22,69,116,190,177,64,86,160,95,37,103,227,154,86,
    228,190,40,138,88,72,49,244,90,126,97,77,29,106,29,150,
    248,208,166,167,230,229,34,99,15,89,255,73,232,70,199,190,
    251,244,143,196,1,177,225,21,222,105,20,50,181,102,101,34,
    207,18,111,19,139,95,63,40,100,123,177,200,184,243,51,220,
    176,148,137,189,204,79,60,14,54,191,31,201,118,36,163,99,
    60,8,142,130,73,123,16,186,67,182,163,153,203,252,105,33,
    179,98,32,204,103,253,140,34,218,97,210,246,146,24,211,199,
    169,167,146,180,237,75,60,31,73,191,125,175,205,185,167,29,
    100,109,247,24,191,186,158,210,158,114,61,6,112,217,233,166,
    195,140,43,204,147,51,234,46,26,7,14,158,136,3,172,179,
    143,10,157,233,163,90,153,72,184,180,214,110,135,201,25,207,
    61,106,170,67,228,67,106,222,163,102,15,222,129,124,211,197,
    13,255,64,59,147,106,171,24,197,106,66,173,206,6,128,207,
    104,77,246,122,24,56,251,54,97,64,223,178,228,193,160,74,
    51,229,18,29,210,169,173,81,202,233,215,139,193,21,110,27,
    60,216,44,46,114,110,240,224,42,244,91,116,27,66,35,107,
    20,75,150,190,107,44,97,167,91,180,187,125,245,189,134,16,
    251,254,187,36,146,253,115,200,107,149,183,133,15,49,43,111,
    83,135,143,177,40,78,16,179,194,242,133,198,230,235,152,116,
    188,84,186,74,106,131,110,47,86,122,142,76,154,31,167,52,
    107,33,98,121,178,122,84,138,121,201,133,219,244,214,76,121,
    207,86,22,71,88,101,225,17,224,156,53,225,24,250,20,112,
    133,101,171,84,8,233,54,150,103,206,156,82,116,149,79,220,
    184,147,137,140,253,171,10,158,191,44,18,32,20,249,142,225,
    170,104,194,114,253,22,62,175,59,50,9,57,35,51,219,183,
    82,186,238,130,45,205,56,31,22,54,238,208,37,215,85,212,
    183,201,194,58,206,151,33,222,254,69,105,179,237,55,128,56,
    114,95,134,50,166,35,228,255,250,140,165,155,190,94,225,87,
    190,227,152,159,201,23,140,68,230,173,31,137,8,233,150,94,
    216,26,236,85,190,12,37,162,118,110,133,190,1,213,9,204,
    151,152,155,147,41,30,17,249,108,133,239,161,227,44,60,115,
    61,198,13,191,132,60,88,82,230,170,98,238,218,192,255,154,
    85,19,92,60,204,221,87,107,102,233,60,161,79,17,211,204,
    230,80,181,90,218,135,239,85,139,108,205,206,74,181,240,161,
    27,233,187,49,190,224,177,127,68,205,143,11,19,179,85,244,
    105,147,207,110,250,76,141,142,201,149,13,23,50,246,62,141,
    211,189,69,116,176,95,72,180,175,37,234,5,145,190,8,228,
    171,221,232,64,173,205,77,243,83,23,251,27,115,163,153,76,
    3,55,12,190,209,23,128,197,48,39,238,121,186,196,79,249,
    198,233,254,122,44,101,19,167,114,24,100,72,132,41,148,179,
    243,136,66,138,86,59,111,0,213,236,202,69,195,65,23,231,
    250,242,226,41,93,137,103,79,176,161,43,190,218,106,77,84,
    13,186,91,54,69,93,52,133,37,26,205,154,89,171,214,42,
    38,66,134,70,214,69,221,172,213,27,130,254,119,17,60,117,
    99,183,81,19,255,5,48,51,9,81,
};

EmbeddedPython embedded_m5_internal_param_EtherDump(
    "m5/internal/param_EtherDump.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_EtherDump.py",
    "m5.internal.param_EtherDump",
    data_m5_internal_param_EtherDump,
    2154,
    6782);

} // anonymous namespace