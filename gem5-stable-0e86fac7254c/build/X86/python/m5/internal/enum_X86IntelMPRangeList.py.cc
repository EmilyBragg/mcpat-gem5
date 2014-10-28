#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_X86IntelMPRangeList[] = {
    120,156,205,87,223,111,27,69,16,158,189,59,59,177,19,55,
    78,67,155,150,6,106,132,34,76,69,99,84,53,109,165,86,
    21,253,129,32,8,66,57,75,52,53,136,195,185,91,219,231,
    156,239,172,187,77,139,81,242,66,42,224,141,63,2,241,192,
    255,193,223,196,43,204,55,103,59,78,85,36,222,18,219,55,
    154,155,219,155,157,249,246,155,217,181,79,227,79,129,175,143,
    106,68,217,223,172,4,252,83,20,17,13,20,181,20,41,173,
    40,88,162,189,2,165,55,41,40,208,75,162,150,69,218,162,
    35,86,108,250,198,162,120,81,222,41,82,100,139,69,209,168,
    76,218,161,86,129,158,198,203,228,232,34,237,149,41,253,158,
    148,82,177,162,157,96,142,130,121,122,201,222,89,41,137,195,
    121,10,202,162,148,40,88,16,165,76,163,42,233,5,106,177,
    243,57,106,85,216,213,53,118,117,78,92,253,5,87,1,63,
    169,82,80,193,112,142,229,25,70,58,24,41,115,156,19,47,
    75,164,109,234,87,169,85,21,101,153,90,203,162,156,167,214,
    121,81,86,168,181,130,208,155,245,101,78,61,252,135,63,117,
    197,154,89,100,241,92,167,89,152,196,94,24,119,146,208,194,
    243,34,4,16,243,33,230,198,208,61,2,116,127,146,224,22,
    88,99,232,14,137,20,238,137,34,139,14,69,57,180,104,84,
    167,3,69,125,135,2,155,14,120,154,2,29,41,234,42,58,
    178,232,91,27,3,14,89,58,156,236,219,228,152,28,183,190,
    36,155,123,154,163,195,2,29,20,168,185,115,96,193,176,87,
    162,244,15,250,113,77,156,206,139,83,139,14,88,58,116,228,
    208,97,145,158,242,32,54,245,75,128,72,237,28,112,166,108,
    105,214,29,142,118,123,38,93,164,18,132,105,220,30,104,115,
    153,117,79,199,251,3,111,231,206,173,173,216,232,232,139,39,
    110,59,238,234,207,195,204,212,203,147,225,73,182,49,108,155,
    158,43,239,219,0,102,48,52,226,55,137,181,89,96,165,19,
    198,129,55,72,130,253,72,155,121,56,245,58,97,164,61,79,
    30,110,13,134,73,106,62,78,211,36,117,129,173,24,163,164,
    61,125,3,200,250,81,146,233,58,102,147,105,92,184,55,24,
    221,25,138,71,4,32,49,227,229,64,103,126,26,14,13,47,
    89,238,17,163,225,173,142,197,18,145,237,179,104,244,146,129,
    110,232,65,24,141,26,143,117,182,103,146,97,227,161,142,253,
    222,160,157,238,133,113,183,209,190,217,232,234,193,230,245,204,
    180,119,35,125,253,67,125,231,86,167,237,223,190,177,121,211,
    111,236,238,135,81,208,96,96,26,195,145,233,37,113,99,176,
    217,8,25,35,134,46,106,252,23,104,27,60,246,60,166,127,
    17,118,189,80,18,247,122,58,26,234,180,2,235,155,8,77,
    85,213,162,42,42,91,213,85,133,181,2,95,182,90,179,22,
    212,118,136,212,125,192,1,250,217,19,194,253,78,178,180,204,
    140,61,139,210,53,208,169,207,63,133,245,103,82,53,241,204,
    146,103,95,1,179,220,218,183,65,146,220,120,32,20,100,46,
    242,200,123,96,69,76,194,163,2,245,139,148,243,139,105,153,
    19,46,29,65,242,112,184,177,216,185,67,217,111,39,61,196,
    85,226,53,225,18,100,211,69,158,234,39,161,108,179,142,192,
    183,133,49,166,23,102,201,139,88,214,5,186,20,89,147,49,
    121,50,250,114,183,175,125,147,93,101,195,179,100,191,230,183,
    227,56,49,181,118,16,212,218,198,164,225,238,190,209,89,205,
    36,181,245,172,94,2,17,150,39,164,155,250,27,13,39,36,
    3,33,152,100,249,77,16,250,134,111,86,228,70,240,207,180,
    97,194,244,146,32,99,59,92,116,181,113,17,164,57,199,226,
    193,100,58,97,102,189,56,225,81,166,163,142,41,11,37,219,
    89,230,201,116,176,11,251,240,246,243,118,180,175,13,198,51,
    109,12,207,10,53,159,232,76,240,239,18,16,152,0,0,80,
    189,56,137,131,17,199,31,250,235,8,237,146,176,112,145,192,
    195,11,204,193,57,150,69,170,48,39,171,150,143,84,157,49,
    3,133,125,23,1,12,9,35,212,184,233,48,19,143,184,53,
    213,45,233,45,146,179,20,109,13,26,94,118,65,116,247,10,
    196,26,196,91,19,88,78,27,155,202,171,216,220,64,60,150,
    0,226,219,227,212,167,133,183,125,162,240,46,31,23,30,183,
    216,38,10,200,66,153,29,23,144,13,112,210,251,227,106,65,
    105,50,97,248,241,76,141,8,100,110,21,80,20,39,244,118,
    193,217,89,226,118,103,136,235,98,181,132,181,238,229,255,130,
    247,234,217,131,183,155,195,187,137,120,22,199,124,171,8,207,
    202,202,7,89,172,49,216,2,244,99,86,70,171,0,122,22,
    226,85,222,76,159,198,21,217,21,101,103,149,253,62,239,68,
    57,242,185,226,128,153,29,155,46,142,119,187,12,141,99,152,
    38,63,140,106,73,167,102,104,18,195,189,245,108,99,61,187,
    203,173,165,118,95,154,85,222,92,242,246,145,234,97,202,109,
    162,36,55,121,233,123,210,6,188,241,54,197,75,113,1,16,
    91,147,5,144,78,151,153,20,13,238,76,160,95,158,162,143,
    100,238,34,152,178,64,111,211,42,95,101,37,17,123,137,116,
    96,57,215,200,83,190,30,98,17,128,131,38,156,4,221,102,
    158,143,164,138,164,221,247,78,48,236,148,19,117,175,241,204,
    143,39,133,91,164,41,159,112,217,72,5,181,244,11,159,29,
    20,40,245,51,129,59,76,145,113,245,73,157,227,2,5,86,
    48,252,59,146,230,246,154,13,214,202,171,216,26,183,63,46,
    242,236,182,12,205,247,219,207,232,215,153,206,120,100,147,194,
    222,104,143,207,124,179,123,163,51,173,123,33,221,255,218,255,
    156,147,13,2,139,215,107,103,24,150,183,2,123,218,10,142,
    155,236,244,140,198,253,237,180,249,56,159,135,225,33,226,173,
    99,54,98,227,185,162,86,172,25,142,125,0,113,125,74,47,
    53,177,157,98,240,87,95,221,41,102,118,81,47,239,206,159,
    34,66,71,114,90,42,202,106,188,242,223,33,207,230,141,233,
    146,140,50,23,22,119,9,194,154,244,30,238,84,124,62,52,
    35,57,149,228,83,78,77,104,71,219,124,240,200,79,207,53,
    188,247,14,196,187,16,239,195,3,38,203,43,90,202,34,111,
    96,177,126,33,45,76,120,226,110,192,142,214,188,213,124,240,
    40,25,240,81,58,100,156,196,242,245,39,179,150,85,204,246,
    122,72,228,8,228,63,111,167,103,166,11,8,118,247,242,222,
    124,31,255,10,50,236,229,56,211,148,150,74,170,104,225,84,
    109,171,50,159,111,28,181,88,41,217,165,98,169,96,243,25,
    7,150,21,85,182,75,229,146,226,175,245,47,95,218,99,162,
};

EmbeddedPython embedded_m5_internal_enum_X86IntelMPRangeList(
    "m5/internal/enum_X86IntelMPRangeList.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/enum_X86IntelMPRangeList.py",
    "m5.internal.enum_X86IntelMPRangeList",
    data_m5_internal_enum_X86IntelMPRangeList,
    1504,
    3868);

} // anonymous namespace