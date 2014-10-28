#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86E820Table[] = {
    120,156,205,88,109,111,219,200,17,158,37,37,218,146,173,216,
    142,227,56,78,156,179,138,214,168,122,104,172,156,47,78,140,
    94,16,220,75,2,92,138,194,185,82,7,216,209,29,202,210,
    228,74,162,76,145,2,185,78,78,7,251,75,29,180,253,214,
    31,81,244,67,255,71,255,87,59,51,75,210,180,227,160,7,
    180,128,236,136,155,229,114,119,118,103,230,153,183,245,32,251,
    171,226,243,121,19,32,77,4,128,143,63,1,33,192,72,64,
    87,128,144,2,252,101,56,170,66,242,8,252,42,188,3,232,
    26,32,13,56,195,142,9,223,25,16,205,243,26,11,66,147,
    71,4,76,234,32,43,208,173,194,126,180,4,21,105,193,81,
    29,146,63,130,16,34,18,112,224,207,128,63,11,239,144,58,
    118,106,76,112,22,252,58,119,106,224,207,113,167,14,147,69,
    144,115,208,69,226,51,208,109,32,169,143,145,212,13,38,245,
    47,34,229,227,151,91,224,55,104,58,158,229,53,205,172,208,
    76,222,227,6,83,89,200,79,182,8,221,165,188,127,179,212,
    95,46,245,111,149,250,43,220,95,0,185,4,195,219,48,92,
    133,225,29,232,161,32,22,139,221,214,64,154,48,188,11,221,
    187,32,241,183,6,103,40,43,127,169,180,226,30,175,184,89,
    172,88,231,21,247,161,123,31,36,254,214,245,10,11,58,173,
    21,148,127,240,111,252,107,161,252,65,205,99,243,70,38,105,
    16,71,78,16,245,226,192,160,239,22,53,164,45,143,154,153,
    76,109,95,145,218,254,9,172,51,223,200,212,118,10,72,88,
    16,47,161,1,167,220,57,53,96,210,130,19,1,195,10,248,
    38,156,224,54,85,58,64,95,192,153,1,223,155,52,225,20,
    219,10,10,250,35,168,40,173,179,33,11,90,83,154,129,211,
    42,156,84,161,115,112,98,208,192,81,13,146,127,192,143,235,
    76,116,150,137,26,112,130,109,5,206,42,112,106,193,62,78,
    194,161,97,141,216,23,7,39,200,41,142,116,90,21,60,237,
    94,137,93,98,197,15,146,200,29,73,181,140,125,103,236,38,
    238,200,57,216,125,252,98,119,251,225,183,238,97,40,91,245,
    124,98,156,110,141,93,53,176,121,165,73,34,25,141,21,83,
    140,35,169,230,176,211,11,34,223,25,197,254,113,40,213,44,
    145,115,122,65,40,29,135,63,190,28,141,227,68,189,72,146,
    56,177,73,170,60,24,198,110,177,130,100,234,133,113,42,91,
    180,27,111,99,19,121,69,179,123,99,166,72,7,224,211,210,
    98,95,166,94,18,140,21,42,75,83,164,217,68,173,69,106,
    226,38,141,177,105,15,226,145,108,203,81,16,78,218,207,101,
    122,164,226,113,251,75,25,121,131,145,155,28,5,81,191,237,
    62,106,247,229,104,231,65,170,136,227,7,15,229,238,227,158,
    235,61,217,222,121,228,181,15,143,131,208,111,163,68,218,227,
    137,26,196,81,123,180,211,14,34,37,81,104,97,251,125,113,
    109,225,172,155,180,241,219,160,239,4,204,178,51,144,225,88,
    38,13,26,189,75,135,18,139,98,94,88,194,20,45,209,192,
    94,21,31,83,172,27,115,98,47,32,166,61,18,4,65,206,
    204,65,246,119,96,117,34,26,142,12,72,214,9,66,67,252,
    9,210,57,2,169,67,223,12,254,246,123,146,150,30,29,154,
    4,12,61,120,194,176,67,252,225,204,167,132,132,8,24,59,
    85,24,90,160,49,133,80,212,32,75,38,212,226,116,34,99,
    32,241,10,164,127,187,72,33,90,4,212,6,154,60,14,221,
    198,173,254,196,48,237,180,232,224,123,140,21,53,8,210,248,
    109,196,26,161,62,27,86,7,101,242,205,228,213,225,80,122,
    42,221,192,129,215,241,113,211,115,163,40,86,77,215,247,155,
    174,82,73,112,120,172,100,218,84,113,115,51,109,213,8,2,
    75,57,220,10,122,147,113,14,47,130,2,194,75,191,248,129,
    167,240,133,113,236,176,252,83,169,16,42,131,216,79,113,156,
    72,244,165,178,233,144,234,6,54,95,228,219,49,38,91,86,
    142,160,84,134,61,85,103,48,186,105,234,240,118,52,206,184,
    163,213,111,220,240,88,42,154,143,128,81,184,43,117,245,70,
    83,70,222,29,226,61,103,157,196,233,68,113,228,79,240,228,
    129,183,73,135,186,195,248,155,7,66,224,10,162,111,6,91,
    11,26,136,198,69,195,35,38,43,25,246,24,119,183,73,36,
    192,88,16,153,139,65,12,158,161,35,106,25,236,73,152,91,
    54,212,38,245,104,177,77,16,183,239,81,179,78,205,253,92,
    32,211,147,74,227,178,84,182,233,36,6,139,194,51,51,166,
    11,99,219,187,96,108,107,231,198,134,174,180,67,70,99,144,
    105,157,27,141,73,98,73,158,101,22,66,230,136,32,193,207,
    37,187,96,97,217,139,36,4,43,135,180,77,56,45,131,181,
    95,2,171,77,122,98,164,218,107,31,18,236,198,117,18,108,
    95,11,118,135,78,50,159,97,172,193,216,170,11,143,0,98,
    100,98,102,17,63,199,206,100,149,68,92,22,238,42,134,203,
    253,168,193,113,143,99,39,103,19,218,239,104,153,235,78,133,
    208,216,51,225,118,22,207,82,114,19,227,36,254,97,210,140,
    123,77,5,249,25,158,110,166,91,155,233,103,232,72,154,207,
    216,53,105,87,162,157,69,34,199,9,58,133,26,191,104,67,
    119,216,232,157,44,28,161,18,40,55,96,221,177,232,217,175,
    165,42,33,119,54,101,185,215,11,185,19,27,159,209,49,234,
    44,116,19,86,241,169,11,62,171,19,179,167,229,156,133,191,
    226,243,37,137,159,36,32,129,50,76,187,163,57,97,38,137,
    93,251,151,23,80,53,53,22,237,143,113,207,231,185,153,90,
    80,96,136,30,147,152,32,203,249,11,112,158,39,224,207,64,
    120,65,88,100,182,198,86,77,15,169,125,153,166,255,1,216,
    137,93,17,66,13,109,179,70,230,230,208,164,211,39,60,85,
    71,212,223,194,95,75,30,240,204,4,65,209,207,204,50,185,
    114,244,171,20,86,206,64,251,73,17,174,114,209,29,144,218,
    6,110,74,211,180,225,155,133,225,159,59,211,34,255,66,111,
    54,61,12,206,234,3,56,116,214,151,231,8,164,208,114,79,
    44,27,37,92,253,154,154,7,5,164,68,62,54,149,99,111,
    92,142,5,165,8,233,104,255,251,53,157,173,194,220,44,88,
    106,21,255,71,34,47,59,95,56,95,189,250,221,171,189,142,
    83,208,43,44,171,154,91,214,118,97,89,146,227,195,59,46,
    14,168,53,8,48,103,134,192,42,13,243,38,42,144,42,32,
    171,208,181,200,6,57,243,21,153,137,138,220,75,146,119,189,
    16,124,88,116,123,90,168,5,102,52,28,168,249,97,202,94,
    137,16,241,52,116,71,135,190,251,236,128,14,65,39,241,114,
    163,53,114,182,22,203,108,145,193,137,15,113,198,175,15,115,
    246,222,76,217,35,125,66,64,200,217,98,251,243,99,143,221,
    208,183,3,217,28,201,209,33,214,141,131,96,220,236,133,110,
    159,181,105,102,108,191,202,217,86,12,135,203,137,65,74,190,
    110,47,110,122,113,132,225,229,216,83,113,210,244,37,214,82,
    210,111,62,104,114,108,106,6,105,211,61,196,175,174,167,180,
    1,93,244,14,156,159,186,73,63,229,84,244,232,45,117,175,
    1,26,28,172,161,3,204,201,95,231,98,211,149,93,17,104,
    56,13,215,214,136,241,27,107,36,53,209,254,243,49,53,191,
    162,102,19,174,71,60,106,227,158,251,180,57,9,216,66,23,
    87,19,92,231,149,231,125,67,43,211,247,189,194,225,79,241,
    10,250,214,38,243,13,22,205,148,51,84,220,83,91,163,168,
    212,173,231,119,64,115,60,56,79,23,46,190,197,35,55,200,
    139,204,252,175,94,132,109,237,26,88,153,243,127,117,30,246,
    246,53,227,202,254,20,178,252,229,67,142,67,148,89,110,104,
    199,49,20,121,121,81,230,151,175,61,214,174,196,161,227,37,
    210,85,82,107,246,238,212,101,192,158,73,31,201,45,244,155,
    51,90,20,95,79,10,102,207,56,165,155,220,42,165,255,172,
    110,177,143,249,23,150,8,39,44,15,199,208,85,194,57,174,
    43,133,88,168,122,141,228,91,231,125,209,232,66,128,14,228,
    142,199,50,242,207,147,124,254,50,101,176,144,243,35,39,146,
    103,84,152,209,223,194,231,125,211,38,86,75,156,179,162,171,
    133,49,79,95,229,12,251,65,174,236,214,2,148,125,191,77,
    170,214,222,190,112,244,246,111,10,229,125,116,53,166,101,132,
    9,180,76,169,222,252,111,83,48,191,227,124,58,123,103,177,
    178,169,248,50,148,74,94,1,11,69,167,201,170,113,95,98,
    180,141,39,88,20,114,41,133,239,161,227,92,135,64,180,139,
    123,82,49,147,82,236,164,64,100,97,40,90,17,181,74,77,
    112,62,112,233,198,90,159,150,68,165,75,134,73,106,179,15,
    90,40,36,205,215,170,121,244,101,251,163,162,120,207,29,233,
    123,49,190,217,177,127,70,205,207,115,101,177,233,232,234,146,
    11,53,93,70,163,173,113,178,194,185,137,189,69,227,148,109,
    143,118,182,114,150,182,50,102,94,160,74,38,206,27,73,169,
    14,223,238,142,118,88,155,229,169,23,184,231,5,234,222,149,
    83,58,193,72,95,41,170,165,75,223,253,196,197,254,202,165,
    209,84,38,129,27,6,63,234,59,196,124,88,145,64,46,19,
    36,182,138,55,78,1,212,47,224,131,229,0,3,39,145,253,
    32,69,146,76,175,88,155,185,157,221,92,38,87,192,182,188,
    248,26,224,76,103,243,250,42,228,25,93,182,167,159,99,67,
    215,134,181,133,154,176,12,186,178,54,69,93,52,68,69,204,
    55,106,102,205,170,85,77,196,34,141,44,139,186,89,171,207,
    139,252,223,6,98,179,110,108,204,213,196,127,0,228,20,18,
    174,
};

EmbeddedPython embedded_m5_internal_param_X86E820Table(
    "m5/internal/param_X86E820Table.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_X86E820Table.py",
    "m5.internal.param_X86E820Table",
    data_m5_internal_param_X86E820Table,
    2177,
    6903);

} // anonymous namespace