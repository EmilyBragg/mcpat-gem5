#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86IntelMPBus[] = {
    120,156,205,89,95,111,219,200,17,159,37,37,217,146,173,216,
    142,237,56,137,221,51,139,194,168,122,61,91,215,52,78,130,
    94,96,244,146,28,112,41,90,39,165,138,218,167,182,199,163,
    201,149,68,153,34,5,114,29,159,14,246,75,29,180,125,235,
    135,40,250,208,239,209,239,213,206,204,146,180,236,179,207,7,
    180,128,28,139,139,229,114,119,118,254,252,102,102,103,227,65,
    246,175,140,207,47,45,128,180,35,0,124,252,9,8,1,6,
    2,218,2,132,20,224,47,194,97,25,146,199,224,151,225,61,
    64,219,0,105,192,25,118,76,248,131,1,209,44,175,169,64,
    104,242,136,128,81,13,100,9,218,101,216,139,22,160,36,43,
    112,88,131,228,43,16,66,68,2,246,253,41,240,167,225,61,
    82,199,78,149,9,78,131,95,227,78,21,252,25,238,212,96,
    52,15,114,6,218,72,124,10,218,117,36,245,33,146,186,195,
    164,254,77,164,124,252,178,4,126,157,166,35,47,95,208,204,
    18,205,228,61,238,48,149,185,156,179,121,104,47,228,253,187,
    99,253,197,177,254,18,247,231,64,46,64,127,25,250,247,160,
    191,2,168,16,127,190,216,225,62,72,19,250,15,160,253,0,
    36,254,238,195,25,234,199,95,24,91,241,144,87,220,45,86,
    172,242,138,53,104,175,129,196,223,170,94,81,129,86,99,25,
    117,30,252,7,255,53,80,231,160,102,177,121,39,147,52,136,
    35,39,136,58,113,96,208,247,10,53,100,33,143,154,169,204,
    84,47,201,84,255,2,182,147,111,100,166,58,5,36,44,72,
    150,208,128,83,238,156,26,48,106,192,137,128,126,9,124,19,
    78,112,155,50,49,208,21,112,102,192,31,77,154,112,138,109,
    9,149,251,1,148,148,182,83,159,149,171,41,77,193,105,25,
    78,202,208,218,63,49,104,224,176,10,201,63,225,155,53,38,
    58,205,68,13,56,193,182,4,103,37,56,173,192,30,78,194,
    161,126,149,196,23,251,39,40,41,142,180,26,37,228,118,119,
    76,92,18,197,15,146,200,29,72,181,132,125,103,232,38,238,
    192,217,127,246,228,117,164,100,248,155,183,47,142,210,70,45,
    159,25,167,91,67,87,245,108,94,106,146,78,6,67,197,36,
    227,72,170,25,236,116,130,200,119,6,177,127,20,74,53,77,
    244,156,78,16,74,199,225,143,175,7,195,56,81,159,37,73,
    156,216,164,86,30,12,99,183,88,65,74,245,194,56,149,13,
    218,141,183,177,137,188,162,217,157,33,83,36,6,152,93,90,
    236,203,212,75,130,161,66,107,105,138,52,155,168,53,200,78,
    220,164,67,108,154,189,120,32,155,114,16,132,163,230,43,153,
    30,170,120,216,124,33,35,175,55,112,147,195,32,234,54,221,
    199,205,174,28,108,111,166,202,61,8,229,230,199,242,217,147,
    142,235,61,125,180,253,216,107,30,28,5,161,223,68,149,52,
    135,35,213,139,163,230,96,187,25,160,118,80,107,97,243,10,
    125,109,225,180,187,180,243,113,208,117,2,150,217,233,201,112,
    40,147,58,141,62,36,174,196,188,152,21,21,97,138,134,168,
    99,175,140,143,41,214,140,25,177,27,144,212,30,105,130,64,
    103,230,48,251,7,176,65,17,15,135,6,36,107,4,162,62,
    254,4,89,29,161,212,162,111,6,127,251,45,169,75,143,246,
    77,130,134,30,60,97,224,33,2,113,230,115,194,66,4,140,
    158,50,244,43,160,81,133,96,212,48,75,70,212,226,116,34,
    99,32,241,18,164,127,191,72,33,154,7,52,7,58,58,14,
    221,195,173,254,204,64,109,53,136,241,93,6,139,234,5,105,
    124,28,177,73,168,207,174,213,66,157,188,29,189,57,232,75,
    79,165,235,56,240,69,124,100,121,110,20,197,202,114,125,223,
    114,149,74,130,131,35,37,83,75,197,214,70,218,168,18,6,
    22,114,188,21,244,70,195,28,95,132,5,196,151,126,241,3,
    79,225,203,34,191,176,254,83,169,16,43,189,216,79,113,156,
    72,116,165,178,137,73,117,7,155,79,243,237,24,148,141,74,
    14,161,84,134,29,85,99,52,186,105,234,240,118,52,206,192,
    163,213,239,220,240,72,42,154,143,136,81,184,43,117,245,70,
    147,134,222,125,18,62,151,157,244,233,68,113,228,143,144,245,
    192,219,32,174,238,51,0,103,129,32,184,140,240,155,194,182,
    2,117,132,227,188,225,145,148,165,12,124,12,188,123,164,19,
    96,48,136,44,202,32,8,207,48,22,53,12,14,38,44,46,
    187,170,69,61,90,108,19,198,237,85,106,214,168,249,65,174,
    145,9,170,165,126,89,45,143,136,21,131,117,225,153,153,212,
    133,187,237,94,112,183,7,231,238,134,225,180,69,110,99,144,
    115,157,187,141,73,122,73,118,50,31,33,135,68,152,224,231,
    49,207,96,109,217,243,164,133,74,14,106,155,144,58,14,215,
    238,24,92,109,50,20,99,213,126,112,157,102,215,111,149,102,
    187,90,179,219,196,202,108,134,178,58,163,171,38,60,130,136,
    145,233,153,117,252,10,59,163,21,210,241,184,118,87,48,103,
    238,69,117,78,126,156,64,249,24,161,67,143,86,186,238,148,
    8,143,29,19,238,101,73,45,165,72,49,76,226,175,71,86,
    220,177,20,228,60,60,223,72,183,54,210,79,48,150,88,59,
    28,157,116,52,209,241,34,145,195,4,227,66,149,95,180,175,
    59,236,247,78,150,146,208,10,116,64,96,227,177,238,57,180,
    165,42,161,136,54,105,197,215,10,197,147,28,159,16,31,53,
    214,186,9,43,248,212,4,51,235,196,28,109,249,228,194,95,
    241,121,65,250,39,21,72,160,179,165,221,210,162,176,148,36,
    175,253,227,11,184,154,156,140,246,135,184,233,171,220,83,43,
    80,160,136,30,147,164,32,231,249,43,240,113,79,192,95,128,
    16,131,192,200,220,141,29,155,30,50,252,34,77,255,18,56,
    144,93,145,71,13,237,182,70,22,234,208,171,211,167,60,85,
    167,213,95,193,223,198,162,224,153,9,130,82,160,153,29,232,
    198,83,96,169,112,116,134,218,247,74,115,165,139,17,129,236,
    214,115,83,154,166,125,223,44,124,255,60,160,22,167,48,12,
    104,19,68,225,180,230,192,33,102,95,159,99,144,242,203,170,
    88,52,198,144,245,17,53,155,5,168,68,62,54,25,190,215,
    47,39,132,177,60,233,232,32,252,57,49,87,98,113,230,42,
    10,225,3,68,165,245,169,243,242,205,175,223,236,182,156,140,
    96,254,138,132,11,47,43,231,94,246,168,240,50,201,217,226,
    61,151,11,212,26,132,157,51,67,96,173,134,231,40,42,147,
    74,32,203,208,174,144,63,242,81,88,100,238,42,242,144,73,
    161,246,66,42,98,37,238,106,245,22,240,209,200,160,230,235,
    73,135,40,2,199,243,208,29,28,248,238,206,30,113,65,172,
    120,185,3,27,185,92,243,227,114,145,243,137,235,68,227,215,
    143,115,249,222,77,58,60,253,12,55,45,228,98,103,244,99,
    143,99,210,239,122,210,26,200,193,1,214,146,189,96,104,117,
    66,183,203,246,52,51,185,223,228,114,43,6,196,229,131,66,
    74,129,111,55,182,188,56,194,108,115,228,169,56,177,124,137,
    229,149,244,173,77,139,83,149,21,164,150,123,128,95,93,79,
    105,103,186,24,42,248,196,234,38,221,148,15,167,135,199,212,
    189,13,120,112,176,176,14,240,152,190,159,235,77,87,123,69,
    222,225,147,185,246,76,204,231,88,54,169,145,142,166,79,168,
    249,9,53,27,112,75,210,83,19,55,253,61,237,78,42,174,
    96,192,171,10,62,206,93,152,248,150,214,94,17,26,142,191,
    79,104,208,23,56,89,128,168,208,76,57,69,53,63,181,85,
    202,82,237,90,62,56,195,237,44,15,214,243,59,162,59,60,
    56,7,237,121,186,92,161,145,5,138,47,83,255,107,124,97,
    39,156,180,250,201,253,190,252,191,134,21,251,209,109,19,203,
    254,57,100,199,156,235,66,138,24,151,185,174,67,74,95,228,
    133,200,184,192,124,71,242,240,106,124,58,94,34,93,37,181,
    113,31,78,94,11,28,181,52,79,95,21,38,206,69,45,10,
    181,167,133,184,103,124,246,27,45,141,85,10,108,113,177,135,
    7,53,172,38,78,88,35,142,161,11,138,115,108,151,10,197,
    172,96,19,201,99,231,10,229,232,162,129,56,114,135,67,25,
    249,231,5,1,127,153,52,96,40,50,82,124,201,207,94,120,
    250,95,194,231,219,14,78,194,142,201,206,182,46,23,46,125,
    11,172,206,216,239,229,246,110,208,61,218,121,102,176,201,218,
    58,23,20,105,192,254,69,97,63,235,26,96,31,28,233,43,
    28,170,79,111,158,132,167,65,78,83,249,128,250,224,59,86,
    4,62,19,189,97,10,145,172,100,36,3,159,173,197,94,232,
    203,80,42,121,21,222,20,9,153,221,9,248,18,115,124,60,
    194,202,148,203,57,124,15,29,231,86,100,191,103,184,233,159,
    32,11,180,148,253,42,152,255,150,241,175,90,170,10,62,136,
    92,186,62,215,12,83,245,162,11,151,81,106,115,136,155,43,
    108,200,87,188,121,214,103,231,166,226,124,215,29,232,43,58,
    190,99,178,127,72,205,143,114,24,176,106,117,145,203,229,162,
    46,231,209,145,249,148,196,135,34,123,139,198,127,138,205,96,
    123,43,151,106,235,91,82,185,169,124,25,71,157,160,251,89,
    164,146,17,223,58,15,182,213,234,149,203,90,193,64,95,99,
    170,133,75,223,253,196,197,254,242,165,209,84,38,129,27,6,
    223,232,123,203,124,152,171,144,155,248,248,8,110,42,60,46,
    46,224,83,137,218,188,113,21,162,145,0,150,200,110,144,34,
    59,204,203,181,92,100,113,240,217,119,57,218,56,181,219,0,
    80,93,126,232,155,156,29,250,255,130,116,7,27,186,247,172,
    206,85,69,197,160,75,119,83,212,68,93,148,196,108,189,106,
    86,43,213,178,137,32,166,145,69,81,51,171,181,89,161,255,
    214,17,208,53,99,125,182,42,254,11,142,171,99,155,
};

EmbeddedPython embedded_m5_internal_param_X86IntelMPBus(
    "m5/internal/param_X86IntelMPBus.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_X86IntelMPBus.py",
    "m5.internal.param_X86IntelMPBus",
    data_m5_internal_param_X86IntelMPBus,
    2206,
    7085);

} // anonymous namespace