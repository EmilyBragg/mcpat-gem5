#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_PageManage[] = {
    120,156,205,86,81,111,27,69,16,158,189,59,59,177,19,55,
    78,211,164,45,13,212,8,69,152,138,198,168,106,218,74,173,
    42,40,69,162,72,132,114,126,104,106,16,199,229,110,109,95,
    98,223,89,119,155,20,163,228,133,84,192,27,63,2,241,192,
    255,224,127,193,124,115,103,199,137,64,226,137,224,228,70,115,
    179,123,179,59,223,126,51,59,1,21,191,18,63,31,54,136,
    178,121,69,20,242,191,162,1,209,80,81,71,145,210,138,194,
    37,218,47,81,122,151,194,18,189,38,234,88,164,45,58,97,
    197,166,175,44,138,23,229,155,50,13,108,177,40,26,87,73,
    59,212,41,209,139,120,153,28,93,166,253,42,165,223,146,82,
    42,86,180,19,206,81,56,79,175,217,59,43,21,113,56,79,
    97,85,148,10,133,11,162,84,105,92,39,189,64,29,118,62,
    71,157,26,187,186,197,174,46,137,171,63,224,42,228,145,58,
    133,53,76,231,189,188,196,76,7,51,101,141,75,226,101,137,
    180,77,123,117,234,212,69,89,166,206,178,40,151,169,115,89,
    148,21,234,172,136,114,133,58,87,68,89,165,206,42,130,105,
    55,151,25,149,232,79,254,53,25,21,50,139,44,14,117,154,
    69,73,236,69,113,55,137,44,140,151,33,128,97,0,49,87,
    128,249,49,192,252,157,4,201,208,42,192,60,38,82,120,39,
    26,88,116,44,202,177,69,227,38,29,41,218,115,40,180,233,
    136,151,41,209,137,162,158,162,19,139,190,182,49,225,152,165,
    195,225,191,69,142,201,145,220,147,240,115,79,115,116,92,162,
    163,18,181,119,142,44,24,246,43,148,254,70,223,175,139,211,
    121,113,106,209,17,75,135,78,28,58,46,211,11,158,196,166,
    189,10,64,83,59,71,28,41,91,218,77,135,119,187,61,19,
    46,66,9,163,52,246,135,218,212,89,247,116,124,48,244,158,
    251,61,253,185,31,179,108,86,39,179,146,108,115,228,155,190,
    43,159,217,192,99,56,50,226,46,137,181,89,96,165,27,197,
    161,55,76,194,131,129,54,243,240,229,117,163,129,246,60,25,
    124,54,28,37,169,249,36,77,147,212,5,164,98,28,36,254,
    244,11,0,26,12,146,76,55,177,154,44,227,194,189,193,236,
    238,72,60,98,3,178,85,124,28,234,44,72,163,145,225,147,
    202,61,98,54,188,53,113,70,34,50,62,18,106,245,147,161,
    110,233,97,52,24,183,158,234,108,223,36,163,214,19,29,7,
    253,161,159,238,71,113,175,229,223,109,245,244,112,235,118,102,
    252,221,129,190,253,129,126,112,175,235,7,247,239,108,221,13,
    90,187,7,209,32,108,237,60,184,215,26,141,77,63,137,91,
    195,173,86,20,27,205,136,13,90,231,176,218,228,41,151,177,
    234,171,168,231,69,18,175,215,215,131,145,78,107,176,190,129,
    29,169,186,90,84,101,101,171,166,170,177,86,226,199,86,235,
    214,130,218,142,16,113,0,20,64,54,123,66,175,95,73,14,
    146,121,176,111,81,186,14,242,236,241,191,194,105,51,133,218,
    24,179,100,236,75,64,149,91,247,108,80,34,55,30,9,225,
    152,121,60,243,17,56,16,147,176,166,68,123,101,202,217,196,
    36,204,233,149,142,33,121,58,220,88,236,220,161,236,151,179,
    30,226,58,241,81,112,10,178,105,141,151,250,65,8,218,110,
    98,227,219,66,20,211,143,178,228,85,44,199,1,93,82,170,
    205,152,60,31,127,177,187,167,3,147,221,100,195,203,228,160,
    17,248,113,156,152,134,31,134,13,223,152,52,218,61,48,58,
    107,152,164,177,145,53,43,56,255,229,9,215,166,254,198,163,
    9,183,192,3,230,86,254,18,70,129,225,151,21,121,17,252,
    51,109,152,39,253,36,204,216,14,23,61,109,92,108,210,92,
    98,241,209,100,57,33,100,179,60,161,79,166,7,93,83,21,
    38,250,89,230,201,114,176,11,233,240,245,161,63,56,208,6,
    243,153,45,134,87,133,154,47,116,145,180,187,134,192,39,113,
    3,75,47,78,226,112,204,219,142,130,13,236,232,154,144,111,
    145,64,191,85,166,222,28,203,50,213,152,138,117,43,64,132,
    78,65,60,33,221,26,240,32,33,130,42,42,11,19,240,132,
    235,79,211,146,2,34,161,74,138,54,160,225,99,23,252,118,
    111,64,172,67,188,57,65,227,130,32,169,157,135,228,14,182,
    97,9,14,129,93,68,60,77,179,237,51,105,118,253,52,205,
    184,124,182,145,46,22,146,234,52,93,108,96,146,62,46,114,
    3,137,200,244,224,225,153,140,16,164,92,20,85,225,151,144,
    217,5,67,103,105,218,155,161,169,139,67,18,142,186,215,255,
    9,213,155,255,27,84,123,57,170,91,216,198,98,193,174,154,
    176,170,170,2,80,195,42,48,22,124,159,178,50,190,10,124,
    103,145,189,202,247,227,139,184,38,23,157,92,150,114,169,231,
    229,38,7,60,87,28,240,176,107,211,90,113,129,101,168,14,
    163,52,249,110,220,72,186,13,67,147,61,60,218,200,54,55,
    178,135,92,63,26,143,165,34,229,21,36,175,17,169,30,165,
    92,11,42,242,146,231,183,39,185,238,21,87,16,159,192,42,
    144,181,38,184,75,57,203,76,138,42,118,145,160,87,167,160,
    35,134,135,216,67,85,16,183,233,42,63,85,37,27,245,18,
    169,174,210,161,200,40,63,79,128,61,194,215,132,46,207,109,
    231,97,72,132,136,213,125,247,12,159,46,38,62,247,22,47,
    248,116,146,157,101,154,178,7,143,141,8,144,48,63,113,23,
    160,64,160,31,9,76,97,66,20,41,38,201,140,7,7,190,
    130,233,223,144,20,174,191,185,51,173,60,85,173,162,180,113,
    38,103,247,101,106,126,133,126,70,63,207,84,189,19,155,20,
    174,59,187,104,218,102,175,59,103,154,220,66,177,127,117,165,
    57,103,171,0,206,172,239,103,152,150,231,187,61,205,247,211,
    2,58,237,182,184,136,93,16,251,230,243,213,61,108,244,217,
    41,247,112,151,220,80,43,214,12,163,222,135,184,61,37,147,
    154,216,254,251,61,223,60,95,252,103,238,67,47,47,184,159,
    98,99,142,132,178,84,22,236,207,181,250,121,16,107,211,3,
    24,103,46,44,238,18,132,53,169,43,92,133,184,193,51,99,
    105,43,242,37,167,38,148,154,109,238,28,242,174,183,129,239,
    222,134,120,7,226,61,120,192,98,121,218,74,18,228,197,41,
    214,175,164,60,9,43,220,77,42,122,19,118,26,75,253,133,
    226,249,161,207,173,239,161,118,165,65,199,226,210,60,79,237,
    98,218,62,3,140,120,9,14,253,244,162,19,94,128,123,148,
    23,221,199,104,229,179,123,44,208,154,84,150,42,170,108,161,
    39,182,85,149,219,20,71,45,214,42,118,165,92,41,217,220,
    170,192,178,162,170,118,165,90,81,197,159,245,23,225,95,70,
    142,
};

EmbeddedPython embedded_m5_internal_enum_PageManage(
    "m5/internal/enum_PageManage.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/enum_PageManage.py",
    "m5.internal.enum_PageManage",
    data_m5_internal_enum_PageManage,
    1505,
    3806);

} // anonymous namespace