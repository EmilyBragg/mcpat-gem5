#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BasicPioDevice[] = {
    120,156,205,88,235,111,220,198,17,159,37,239,78,186,147,78,
    15,75,242,83,142,232,218,66,175,65,173,75,93,203,54,16,
    195,104,28,23,104,10,68,113,168,0,118,212,162,12,69,238,
    157,120,226,227,74,174,228,92,32,125,169,140,182,223,250,71,
    20,253,208,255,163,232,191,213,206,204,146,20,79,143,192,64,
    11,156,164,227,98,184,143,217,157,153,223,60,150,30,228,127,
    117,124,126,101,1,100,255,22,0,62,254,4,132,0,145,128,
    29,1,66,10,240,151,96,191,14,233,99,240,235,240,30,96,
    199,0,105,192,9,18,38,252,206,128,120,150,215,52,32,52,
    185,71,192,168,5,178,6,59,117,120,19,47,66,77,54,96,
    191,5,233,119,32,132,136,5,188,245,167,192,159,134,247,200,
    29,137,38,51,156,6,191,197,68,19,252,25,38,90,48,90,
    0,57,3,59,200,124,10,118,218,200,234,99,100,53,199,172,
    254,69,172,124,28,89,6,191,77,211,241,44,223,210,204,26,
    205,228,61,230,152,203,124,113,178,5,216,89,44,232,107,21,
    122,169,66,47,87,232,149,10,125,189,66,223,168,208,55,43,
    244,173,10,125,187,66,223,169,208,171,76,207,131,92,132,193,
    93,24,124,4,131,53,232,161,114,23,74,9,44,144,38,12,
    238,193,206,61,144,248,179,224,4,245,239,47,86,86,252,132,
    87,92,43,87,220,231,21,15,96,231,1,72,252,221,215,43,
    26,176,221,89,65,155,6,255,193,191,14,218,20,212,44,54,
    135,50,205,130,36,118,130,184,151,4,6,141,55,168,33,4,
    120,212,76,229,80,248,156,160,240,79,96,28,248,70,14,133,
    99,64,198,130,100,9,13,56,102,226,216,128,81,7,142,4,
    12,106,224,155,112,132,219,212,233,0,125,1,39,6,252,222,
    164,9,199,216,214,208,120,31,65,77,105,28,12,216,120,154,
    211,20,28,215,225,168,14,219,111,143,12,234,216,111,66,250,
    15,248,97,149,153,78,51,83,3,142,176,173,193,73,13,142,
    27,240,6,39,97,215,160,73,226,139,183,71,40,41,246,108,
    119,106,120,218,173,138,184,36,138,31,164,177,27,73,69,154,
    112,134,110,234,70,206,75,55,11,188,215,65,242,74,30,6,
    158,236,180,138,169,73,182,49,116,213,158,205,107,77,82,74,
    52,84,204,51,137,165,154,65,162,23,196,190,19,37,254,65,
    40,213,52,49,116,122,65,40,29,135,7,191,136,134,73,170,
    126,157,166,73,106,147,94,185,51,76,220,114,5,105,213,11,
    147,76,118,104,55,222,198,38,246,138,102,247,134,204,145,14,
    192,231,165,197,190,204,188,52,24,42,52,151,230,72,179,137,
    91,135,12,197,77,246,71,108,186,123,73,36,187,50,10,194,
    81,247,149,204,246,85,50,236,190,148,177,183,23,185,233,126,
    16,247,187,238,227,110,95,70,155,15,51,229,238,134,242,225,
    39,242,217,147,158,235,61,125,180,249,216,235,238,30,4,161,
    223,125,251,236,73,119,56,82,123,73,220,141,54,187,65,172,
    36,170,45,236,94,164,176,13,156,119,141,182,126,23,244,157,
    128,133,118,246,100,56,148,105,155,122,111,211,177,196,130,152,
    21,13,97,138,142,104,35,85,199,199,20,171,198,140,216,10,
    72,108,143,84,65,176,51,11,160,253,29,216,164,136,136,125,
    3,210,85,130,209,0,127,130,236,142,96,218,166,49,131,199,
    190,38,125,233,222,129,73,224,208,157,71,12,61,196,32,206,
    124,78,104,136,129,241,83,135,65,3,52,174,16,142,26,104,
    233,136,90,156,78,108,12,100,94,131,236,111,227,28,226,5,
    64,123,96,40,193,174,235,184,213,159,24,170,219,29,58,248,
    22,163,69,237,5,89,242,46,102,155,16,205,206,181,141,58,
    121,61,250,106,119,32,61,149,173,97,199,183,201,129,229,185,
    113,156,40,203,245,125,203,85,42,13,118,15,148,204,44,149,
    88,235,89,167,73,32,88,44,0,87,242,27,13,11,128,17,
    24,16,96,250,197,15,60,133,47,75,252,194,250,207,164,66,
    176,236,37,126,134,253,196,162,47,149,77,135,84,115,216,124,
    86,108,199,168,236,52,10,12,101,50,236,169,22,195,209,205,
    50,135,183,163,126,70,30,173,62,116,195,3,169,104,62,66,
    70,225,174,68,234,141,38,142,189,155,36,125,33,60,41,212,
    137,147,216,31,225,217,3,111,157,142,117,147,17,56,11,132,
    193,21,196,223,20,182,13,104,35,30,23,12,143,196,172,229,
    232,99,228,93,39,165,0,163,65,228,129,6,81,120,130,225,
    168,99,112,60,97,121,217,89,45,162,104,177,77,32,183,239,
    80,179,74,205,221,66,37,147,212,75,251,172,94,30,209,89,
    12,86,134,103,230,98,151,14,183,53,230,112,183,78,29,14,
    67,234,54,57,142,65,238,117,234,56,38,41,38,125,145,123,
    9,185,36,2,5,135,43,190,193,234,178,23,72,13,141,2,
    214,54,97,181,10,216,126,5,176,54,89,138,209,106,223,186,
    76,181,107,87,75,181,125,173,218,77,58,203,108,142,179,54,
    227,171,37,60,2,137,145,43,154,149,252,10,137,209,13,82,
    114,85,189,55,48,113,190,137,219,156,1,57,139,114,173,162,
    163,143,214,186,38,106,132,200,158,9,215,243,204,150,81,176,
    24,166,201,247,35,43,233,89,10,138,51,60,95,207,54,214,
    179,79,49,156,88,47,56,64,233,128,162,67,70,42,135,41,
    134,134,38,191,104,119,119,216,245,157,60,45,161,25,40,55,
    178,245,88,249,28,221,50,149,82,80,155,184,230,91,165,230,
    73,144,79,233,32,45,86,187,9,55,240,105,9,62,173,147,
    112,196,229,250,133,71,241,121,73,6,32,29,72,160,10,214,
    222,214,178,176,152,36,176,253,211,49,100,77,80,72,251,99,
    220,245,85,225,172,13,40,113,68,143,73,98,144,255,252,5,
    184,234,19,240,103,32,204,32,52,114,143,99,223,166,135,76,
    191,68,211,255,0,28,204,46,72,166,134,246,92,35,15,119,
    232,216,217,83,158,170,115,235,111,225,175,149,72,120,98,130,
    160,60,104,230,117,93,53,15,214,74,95,103,176,125,80,174,
    171,141,7,5,50,220,158,155,209,52,237,254,102,233,254,167,
    65,181,172,197,48,166,77,18,135,211,250,8,14,157,246,139,
    83,20,82,146,185,35,150,140,10,182,126,78,205,195,18,86,
    162,232,155,208,193,215,206,102,133,74,182,116,116,36,254,13,
    157,174,198,242,204,55,184,110,24,103,83,186,85,189,112,171,
    71,165,91,73,78,16,239,249,150,64,173,65,88,57,49,4,
    94,1,177,120,162,219,87,13,100,29,118,26,228,128,92,0,
    139,220,63,69,17,36,41,184,142,101,31,214,217,150,214,102,
    9,23,141,4,106,190,159,180,191,50,24,158,135,110,180,235,
    187,47,28,58,6,157,197,43,60,214,40,4,91,168,10,70,
    222,38,46,147,141,95,63,41,4,60,156,180,128,246,47,8,
    52,133,96,236,126,126,226,113,20,250,102,79,90,145,140,118,
    241,18,185,23,12,173,94,232,246,217,162,102,46,248,87,133,
    224,138,33,113,182,58,200,40,212,109,37,150,151,196,152,97,
    14,60,149,164,150,47,241,90,37,125,235,161,197,233,201,10,
    50,203,221,197,81,215,83,218,123,198,131,3,23,170,110,218,
    207,184,38,221,127,71,228,164,21,150,231,218,32,14,176,60,
    255,174,80,156,190,230,149,185,134,61,75,187,34,38,113,188,
    46,169,145,14,160,79,168,249,25,53,235,112,85,82,82,23,
    119,165,52,146,145,146,27,24,227,154,66,45,159,139,12,175,
    105,117,118,62,62,196,31,18,31,244,199,33,156,32,27,48,
    152,226,118,154,50,210,78,179,232,108,113,59,195,157,179,69,
    60,105,115,231,28,127,214,209,31,162,22,40,182,52,254,215,
    216,194,254,55,113,189,147,231,245,254,175,33,197,126,116,229,
    228,178,127,9,121,81,115,89,56,49,160,114,85,121,170,195,
    137,182,32,150,62,163,229,74,169,204,58,16,111,176,78,193,
    114,250,136,11,109,199,208,21,245,169,185,185,242,224,47,40,
    116,227,136,229,59,231,34,28,235,178,153,128,228,14,135,50,
    246,79,75,98,30,153,184,14,41,78,12,224,180,246,192,250,
    119,25,159,243,168,39,113,43,210,51,186,235,37,206,111,95,
    5,89,8,15,73,25,40,23,199,2,165,77,6,215,161,177,
    140,138,218,122,247,46,137,64,206,48,72,28,172,57,83,186,
    159,125,192,44,44,133,244,215,182,188,67,61,248,177,37,161,
    171,80,23,35,230,253,65,19,137,253,76,206,62,239,99,227,
    41,186,214,250,50,148,74,94,8,64,69,50,231,247,100,95,
    98,10,76,70,120,89,227,11,14,190,135,142,115,53,114,195,
    51,29,221,33,155,203,115,67,3,47,192,43,162,89,107,10,
    78,211,103,190,42,235,243,146,17,117,33,63,202,108,14,2,
    243,165,89,217,20,69,74,100,111,167,235,234,150,27,233,239,
    86,252,221,197,38,171,218,247,11,80,176,155,234,91,31,95,
    159,244,5,23,61,155,107,8,46,25,236,141,66,229,209,230,
    70,33,212,134,22,170,148,135,191,189,70,155,28,23,206,79,
    219,30,101,74,70,231,120,200,248,32,114,190,148,81,146,142,
    190,76,124,201,128,171,142,127,150,151,47,122,138,115,40,169,
    206,81,214,133,91,140,207,189,228,184,56,168,191,41,114,57,
    127,126,252,243,48,241,246,165,159,207,185,123,249,156,87,73,
    228,98,255,197,187,108,7,197,46,139,103,198,253,148,86,173,
    156,233,205,100,26,184,97,240,131,84,171,103,21,128,62,101,
    187,113,95,22,178,147,133,139,81,69,134,63,107,6,50,95,
    249,198,213,7,31,114,28,124,236,25,169,236,7,104,149,148,
    217,156,141,224,207,126,52,74,84,151,95,9,87,210,55,9,
    253,29,230,5,69,12,254,44,71,223,45,155,243,77,209,48,
    232,171,185,41,90,162,45,106,98,182,221,52,155,141,102,221,
    68,119,163,158,37,209,50,155,173,89,113,241,255,26,58,99,
    203,88,155,105,138,255,2,15,226,135,86,
};

EmbeddedPython embedded_m5_internal_param_BasicPioDevice(
    "m5/internal/param_BasicPioDevice.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_BasicPioDevice.py",
    "m5.internal.param_BasicPioDevice",
    data_m5_internal_param_BasicPioDevice,
    2235,
    7136);

} // anonymous namespace