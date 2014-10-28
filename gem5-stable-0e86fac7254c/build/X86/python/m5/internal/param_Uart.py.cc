#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Uart[] = {
    120,156,205,88,235,111,27,199,17,159,189,35,41,145,18,245,
    176,36,203,15,57,162,155,168,102,131,90,76,93,203,54,16,
    195,104,108,21,168,11,68,113,201,180,118,216,162,215,211,221,
    146,58,234,30,196,221,74,14,3,233,75,101,180,253,214,63,
    162,232,135,254,31,253,155,250,181,157,153,189,59,29,41,169,
    8,144,192,140,196,91,204,237,99,118,103,230,55,143,61,7,
    210,191,50,62,191,104,0,36,255,17,0,46,254,4,248,0,
    129,128,174,0,33,5,184,43,112,88,134,248,33,184,101,120,
    7,208,53,64,26,112,134,132,9,191,55,32,156,231,53,21,
    240,77,238,17,48,170,129,44,65,183,12,175,195,101,40,201,
    10,28,214,32,254,19,8,33,66,1,111,220,25,112,103,225,
    29,114,71,162,202,12,103,193,173,49,81,5,119,142,137,26,
    140,150,64,206,65,23,153,207,64,183,142,172,62,70,86,11,
    204,234,223,196,202,197,145,85,112,235,52,29,207,242,21,205,
    44,209,76,222,99,129,185,44,102,39,91,130,238,114,70,95,
    43,208,43,5,122,181,64,175,21,232,235,5,122,189,64,223,
    40,208,55,11,244,173,2,125,187,64,111,20,232,59,5,250,
    131,2,189,89,160,27,76,47,130,92,134,193,93,24,252,8,
    6,31,66,15,141,177,148,75,252,17,72,19,6,91,208,221,
    2,137,191,143,224,12,237,229,46,23,86,252,152,87,92,203,
    87,220,227,21,77,232,54,65,226,239,158,94,81,129,78,115,
    13,49,224,253,23,255,154,136,1,80,243,216,28,203,56,241,
    162,208,242,194,94,228,25,52,94,161,134,16,227,80,51,147,
    66,231,5,65,231,95,192,184,113,141,20,58,167,128,140,5,
    201,226,27,112,202,196,169,1,163,38,156,8,24,148,192,53,
    225,4,183,41,211,1,250,2,206,12,248,131,73,19,78,177,
    45,161,177,63,128,146,210,184,25,176,177,53,167,25,56,45,
    195,73,25,58,111,78,12,234,56,172,66,252,79,248,102,131,
    153,206,50,83,3,78,176,45,193,89,9,78,43,240,26,39,
    97,215,160,74,226,139,55,39,40,41,246,116,154,37,60,237,
    94,65,92,18,197,245,226,208,14,164,154,67,218,26,218,177,
    29,88,191,181,99,213,172,101,19,162,100,123,104,171,131,54,
    175,48,73,21,193,80,49,167,40,212,203,122,94,232,90,65,
    228,30,249,82,205,18,27,171,231,249,210,178,120,240,101,48,
    140,98,245,203,56,142,226,54,105,147,59,253,200,206,87,144,
    46,29,63,74,100,147,118,227,109,218,196,94,209,236,222,144,
    57,210,1,242,83,186,50,113,98,111,168,208,72,154,35,205,
    38,110,77,50,15,55,73,31,155,214,65,20,200,150,12,60,
    127,212,218,149,201,161,138,134,173,231,50,116,14,2,59,62,
    244,194,126,203,126,216,234,203,96,231,126,162,236,125,95,222,
    255,68,62,121,212,179,157,199,15,118,30,58,173,253,35,207,
    119,91,111,158,60,106,13,71,234,32,10,91,193,78,203,11,
    149,68,101,249,173,115,53,109,227,232,53,218,240,173,215,183,
    60,22,213,58,144,254,80,198,117,234,189,69,135,17,75,98,
    94,84,132,41,154,162,142,84,25,31,83,108,24,115,98,207,
    35,97,29,82,0,65,204,204,64,245,15,96,243,161,245,15,
    13,136,55,8,50,3,252,9,178,49,2,167,67,99,6,143,
    253,134,180,164,123,7,38,1,65,119,158,48,204,16,111,56,
    243,41,89,62,4,198,74,25,6,21,208,24,66,232,105,80,
    197,35,106,113,58,177,49,144,121,9,146,191,143,115,8,151,
    0,173,128,97,6,187,174,227,86,127,102,88,118,154,116,240,
    61,198,136,58,240,146,232,109,200,150,32,154,29,169,131,58,
    121,53,250,98,127,32,29,149,108,98,199,87,209,81,195,177,
    195,48,82,13,219,117,27,182,82,177,183,127,164,100,210,80,
    81,99,43,105,86,201,244,203,25,204,114,126,163,97,6,43,
    130,0,194,74,191,184,158,163,240,101,133,95,88,255,137,84,
    8,145,131,200,77,176,159,88,244,165,106,211,33,213,2,54,
    159,101,219,49,22,155,149,12,57,137,244,123,170,198,32,180,
    147,196,226,237,168,159,241,70,171,143,109,255,72,42,154,143,
    64,81,184,43,145,122,163,41,33,238,6,201,156,137,76,106,
    180,194,40,116,71,120,98,207,217,162,195,220,96,220,205,3,
    33,111,13,81,55,131,109,5,234,136,194,37,195,33,225,74,
    41,230,24,111,215,73,21,192,24,16,105,40,65,236,157,97,
    192,105,26,28,49,88,74,118,204,6,81,180,184,77,208,110,
    223,166,102,131,154,59,153,34,222,191,54,234,147,218,120,64,
    39,48,88,5,142,153,10,155,59,215,222,152,115,221,60,119,
    46,12,149,29,114,18,131,92,233,220,73,76,82,71,252,44,
    245,8,114,63,4,5,14,23,252,128,149,212,94,34,225,43,
    25,132,219,132,203,34,56,251,5,112,182,201,62,140,204,246,
    205,171,20,186,249,67,80,104,95,43,116,135,78,48,159,98,
    170,206,88,170,9,135,0,97,164,234,101,213,238,34,49,90,
    39,213,22,149,186,142,105,240,117,88,231,124,198,57,145,43,
    21,29,95,180,174,53,81,34,244,245,76,184,158,230,169,132,
    194,193,48,142,190,30,53,162,94,67,65,118,134,167,91,201,
    246,86,242,41,6,140,198,51,14,65,58,100,232,160,16,203,
    97,140,206,95,229,23,237,208,22,59,183,149,166,27,84,62,
    229,124,182,25,171,156,227,87,162,98,10,91,83,210,119,45,
    215,55,29,255,83,218,190,198,202,54,97,29,159,154,224,51,
    90,17,71,82,174,65,120,20,159,231,164,118,146,92,2,85,
    173,237,142,150,128,133,35,49,219,247,198,80,244,222,69,107,
    127,140,123,237,102,238,88,129,28,51,244,152,116,120,242,144,
    191,2,215,107,2,254,2,132,15,132,65,234,83,236,189,244,
    144,153,87,104,250,31,129,131,212,37,169,209,208,190,105,164,
    97,12,93,55,121,204,83,117,166,252,53,252,173,16,225,206,
    76,16,148,213,204,180,34,43,102,181,82,238,205,12,172,111,
    149,185,74,227,110,79,230,58,176,19,154,166,29,220,204,29,
    252,60,88,230,245,20,70,173,247,143,185,89,189,177,69,103,
    124,121,142,56,74,25,183,197,138,81,192,209,79,169,185,159,
    67,72,100,125,239,245,184,155,147,49,190,144,241,44,29,87,
    127,69,103,42,177,20,139,21,206,224,180,56,119,151,114,230,
    46,15,114,119,145,28,228,223,113,5,79,173,65,104,56,51,
    4,94,231,176,216,161,155,84,9,100,25,186,21,114,44,46,
    83,69,234,119,34,11,121,20,42,199,50,8,235,103,79,107,
    46,7,132,182,53,53,95,79,41,196,144,185,159,250,118,176,
    239,218,207,72,37,9,157,192,201,60,209,200,196,89,42,138,
    67,94,36,174,146,136,95,63,201,196,58,158,82,120,249,25,
    232,75,25,139,195,206,228,70,14,199,148,47,15,100,35,144,
    193,62,94,230,14,188,97,163,231,219,125,182,158,153,138,251,
    69,38,174,98,243,79,102,243,132,2,215,94,212,112,162,16,
    115,195,145,163,162,184,225,74,188,232,72,183,113,191,193,137,
    165,225,37,13,123,31,71,109,71,105,175,24,119,117,134,160,
    29,247,19,174,23,15,223,18,57,69,235,91,120,161,245,176,
    96,118,51,117,233,235,86,158,37,184,70,214,46,134,73,23,
    47,48,106,164,131,224,35,106,126,66,205,22,76,55,153,180,
    112,175,125,218,148,20,90,193,56,85,21,156,59,105,252,21,
    205,76,46,122,123,248,109,188,93,127,182,193,9,178,2,131,
    25,110,103,41,131,116,171,89,103,141,219,57,238,156,207,162,
    67,157,59,23,248,131,139,254,68,180,68,145,162,242,93,35,
    5,251,213,20,61,106,240,189,6,136,246,131,31,136,52,237,
    159,67,90,112,92,21,28,12,40,92,20,30,235,224,160,173,
    133,101,201,104,181,80,178,178,228,226,53,214,16,88,214,158,
    112,193,107,25,186,178,61,55,45,87,5,70,230,91,161,124,
    107,157,35,85,23,173,4,21,123,56,148,161,123,94,144,242,
    200,148,244,69,190,78,30,147,85,3,88,125,174,226,115,17,
    205,36,90,65,82,70,109,57,199,239,173,233,90,60,201,67,
    220,242,88,136,107,147,73,117,80,203,227,153,182,207,250,88,
    20,177,144,115,224,33,111,186,255,92,57,134,133,8,7,214,
    172,99,114,226,208,183,85,47,138,131,203,152,228,99,25,147,
    172,131,45,160,232,216,174,244,165,146,5,196,40,58,120,122,
    153,116,37,230,157,104,132,119,27,190,25,224,187,111,89,211,
    12,205,79,64,127,34,77,22,210,208,92,193,91,226,154,168,
    150,170,130,51,226,196,135,84,125,74,50,130,174,128,71,73,
    155,61,116,49,183,8,43,37,203,67,236,138,116,167,219,179,
    3,253,249,134,63,68,180,239,82,243,97,102,79,246,38,125,
    73,226,123,135,190,5,162,219,113,186,230,236,220,222,166,126,
    130,103,176,179,157,137,178,173,69,249,50,179,163,193,195,234,
    206,165,179,94,134,42,126,17,97,19,249,252,25,230,226,140,
    206,40,81,50,80,183,39,6,101,120,20,88,159,203,32,138,
    71,159,71,174,84,119,39,198,63,75,75,9,61,197,58,150,
    84,115,168,198,165,91,140,207,189,176,149,158,132,131,250,219,
    27,23,207,23,199,95,248,145,115,40,221,116,206,229,210,242,
    156,221,40,176,177,255,242,93,58,94,182,203,242,196,184,27,
    211,170,181,137,222,68,198,158,237,123,223,72,181,49,169,0,
    215,141,219,118,216,151,153,236,151,155,233,85,234,41,87,168,
    230,185,157,120,206,43,47,218,149,199,158,35,175,56,244,249,
    56,193,44,27,84,171,132,185,203,184,16,168,199,187,184,22,
    97,145,201,3,216,41,99,217,247,208,242,49,179,25,159,157,
    134,252,39,151,132,154,226,202,41,58,176,190,32,232,79,36,
    207,232,35,123,242,59,108,232,243,97,117,177,42,42,6,125,
    178,54,69,77,212,69,73,204,215,171,102,181,82,45,155,232,
    228,212,179,34,106,102,181,54,47,254,255,255,38,134,130,154,
    177,57,87,21,255,3,38,78,81,186,
};

EmbeddedPython embedded_m5_internal_param_Uart(
    "m5/internal/param_Uart.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_Uart.py",
    "m5.internal.param_Uart",
    data_m5_internal_param_Uart,
    2266,
    7041);

} // anonymous namespace