#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_MemSched[] = {
    120,156,205,86,223,111,27,69,16,158,189,59,59,177,19,55,
    78,67,127,209,64,141,80,132,169,104,140,170,166,173,212,170,
    130,82,36,138,212,0,231,135,166,6,113,92,238,214,246,57,
    246,157,117,183,105,49,114,94,72,5,188,241,71,32,30,248,
    63,248,155,120,133,249,230,206,142,83,129,196,19,193,201,173,
    230,230,102,103,103,190,253,102,118,3,42,126,37,126,62,104,
    16,101,127,176,16,242,191,162,33,209,72,81,71,145,210,138,
    194,53,58,40,81,122,139,194,18,189,36,234,88,164,45,58,
    102,193,166,47,45,138,87,101,78,153,134,182,104,20,77,170,
    164,29,234,148,232,105,188,78,142,46,211,65,149,210,111,72,
    41,21,43,218,11,151,40,92,166,151,236,157,133,138,56,92,
    166,176,42,66,133,194,21,17,170,52,169,147,94,161,14,59,
    95,162,78,141,93,93,103,87,231,196,213,239,112,21,242,151,
    58,133,53,152,115,44,207,96,233,192,82,214,56,39,94,214,
    72,219,52,168,83,167,46,194,58,117,214,69,56,79,157,243,
    34,108,80,103,3,161,183,155,235,156,122,244,39,255,154,138,
    37,179,202,195,115,157,102,81,18,123,81,220,77,34,11,223,
    203,24,128,88,128,97,169,128,238,35,64,247,27,9,110,161,
    85,64,119,68,164,240,78,52,180,232,72,132,35,139,38,77,
    154,42,26,56,20,218,52,229,101,74,116,172,168,167,232,216,
    162,175,108,24,28,241,232,112,178,111,146,99,114,220,6,146,
    108,238,105,137,142,74,52,45,81,123,111,106,65,113,80,161,
    244,87,250,110,83,156,46,139,83,139,166,60,58,116,236,208,
    81,153,158,178,17,171,6,21,64,164,246,166,156,41,107,218,
    77,135,163,221,93,72,23,169,132,81,26,251,35,109,206,177,
    236,233,248,112,228,61,209,163,118,208,215,97,179,58,179,73,
    178,237,177,111,250,174,76,178,129,198,104,108,196,89,18,107,
    179,194,66,55,138,67,111,148,132,135,67,109,150,225,201,235,
    70,67,237,121,242,241,241,104,156,164,230,227,52,77,82,23,
    128,138,114,152,248,243,25,128,51,24,38,153,110,98,53,89,
    198,133,123,3,235,238,88,60,34,0,9,20,147,67,157,5,
    105,52,54,188,79,185,71,88,195,91,19,59,36,67,54,224,
    161,213,79,70,186,165,71,209,112,210,122,164,179,3,147,140,
    91,15,117,28,244,71,126,122,16,197,189,150,127,171,213,211,
    163,157,27,153,241,247,135,250,198,251,250,238,237,174,31,220,
    185,185,115,43,104,237,31,70,195,176,181,119,247,118,107,60,
    49,253,36,110,141,118,90,81,108,52,227,53,108,157,66,106,
    155,13,206,99,205,23,81,207,139,36,91,175,175,135,99,157,
    214,160,125,29,241,168,186,90,85,101,101,171,166,170,177,84,
    226,199,86,155,214,138,218,141,144,111,0,12,64,52,123,70,
    173,95,72,54,145,57,112,96,81,186,9,226,112,74,3,133,
    157,102,250,180,241,205,146,111,95,0,168,92,59,176,65,135,
    92,57,21,178,49,235,216,242,62,246,63,38,97,76,137,6,
    101,202,153,196,4,204,169,149,78,48,178,57,220,88,236,220,
    161,236,231,211,30,226,58,241,70,112,177,177,234,34,47,245,
    189,144,179,221,68,224,187,66,19,211,143,178,228,69,44,155,
    1,89,202,169,205,152,124,62,249,108,127,160,3,147,93,99,
    197,179,228,176,17,248,113,156,152,134,31,134,13,223,152,52,
    218,63,52,58,107,152,164,177,149,53,43,216,253,245,25,211,
    230,254,38,227,25,179,192,2,102,86,254,18,70,129,225,151,
    13,121,17,252,51,109,152,37,253,36,204,88,15,23,61,109,
    92,4,41,20,255,112,182,156,208,177,89,158,145,39,211,195,
    174,169,10,15,253,44,243,100,57,232,133,114,152,253,220,31,
    30,106,3,123,230,138,225,85,33,230,11,157,29,233,46,35,
    237,89,214,64,210,139,147,56,156,112,208,81,176,133,120,46,
    11,245,86,9,228,187,192,196,91,226,177,76,53,38,98,221,
    10,144,159,83,208,78,40,119,17,104,144,208,64,21,61,133,
    233,119,204,157,167,105,73,235,144,68,165,60,27,144,48,217,
    5,187,221,171,24,54,49,188,49,195,226,76,0,169,189,10,
    200,77,4,97,9,10,129,93,228,59,47,177,221,83,37,118,
    229,164,196,184,109,182,81,42,22,10,234,164,84,108,32,146,
    62,40,234,2,69,200,212,224,207,11,213,32,56,185,117,228,
    95,158,17,217,5,59,23,41,218,91,160,168,139,45,18,126,
    186,87,254,9,211,107,255,19,76,123,57,166,59,8,98,181,
    96,86,77,24,85,85,1,104,97,21,8,11,186,143,88,152,
    92,2,186,139,184,94,226,83,241,105,92,147,227,77,142,72,
    57,184,243,70,147,195,157,11,14,56,216,181,233,98,113,108,
    101,232,11,227,52,249,118,210,72,186,13,67,179,24,238,111,
    101,219,91,217,61,238,28,141,7,210,139,242,222,145,119,135,
    84,143,83,238,2,21,121,201,43,219,147,42,247,138,163,135,
    241,191,0,92,173,25,234,210,200,50,147,162,127,157,29,228,
    213,57,228,200,224,30,34,168,10,222,54,93,226,167,170,36,
    76,47,145,174,42,183,18,249,202,207,67,32,143,228,53,225,
    30,231,182,243,36,36,63,100,234,190,115,138,75,103,145,157,
    123,157,151,123,52,171,203,50,205,153,131,199,70,252,40,149,
    31,249,228,87,32,207,15,4,150,48,25,138,226,146,50,198,
    131,205,222,128,249,215,36,13,235,111,78,74,43,47,82,171,
    104,105,92,195,217,29,49,205,15,206,79,233,167,133,110,119,
    108,147,194,33,103,23,215,180,197,67,206,153,151,181,208,235,
    95,29,100,206,233,250,199,142,245,253,12,102,121,165,219,243,
    74,63,105,156,243,27,22,183,175,51,97,222,114,190,182,135,
    48,31,159,240,14,39,200,85,181,97,45,176,233,61,12,55,
    230,68,82,51,221,127,29,241,181,87,91,254,194,25,232,229,
    109,246,19,132,229,72,34,107,101,193,253,149,139,125,158,194,
    107,115,240,39,153,11,141,187,134,193,154,245,19,238,62,124,
    165,51,147,252,174,44,75,206,85,104,49,187,124,87,200,111,
    185,13,204,123,11,195,219,24,222,133,7,44,150,23,172,20,
    64,222,148,98,253,66,218,146,48,194,221,166,226,54,210,13,
    186,153,76,232,166,34,162,209,237,46,228,45,70,193,115,63,
    61,219,74,22,84,238,231,157,244,1,238,229,25,142,91,220,
    53,42,107,21,85,182,112,197,181,85,149,239,29,142,90,173,
    85,236,74,185,82,178,249,238,1,205,134,170,218,149,106,69,
    241,159,245,23,82,72,50,196,
};

EmbeddedPython embedded_m5_internal_enum_MemSched(
    "m5/internal/enum_MemSched.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/enum_MemSched.py",
    "m5.internal.enum_MemSched",
    data_m5_internal_enum_MemSched,
    1480,
    3731);

} // anonymous namespace