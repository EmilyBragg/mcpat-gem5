#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_GarnetNetwork[] = {
    120,156,205,85,75,111,211,64,16,30,231,253,104,105,16,106,
    15,92,240,1,164,168,82,227,170,15,40,79,161,82,9,113,
    41,200,133,3,185,88,142,61,142,157,248,17,121,55,37,129,
    99,57,241,167,97,102,109,167,73,91,9,42,113,104,28,143,
    102,191,221,157,157,199,183,99,7,242,95,153,222,183,58,128,
    248,69,138,75,127,13,66,128,207,185,166,101,90,9,194,18,
    68,37,232,151,64,227,113,25,194,50,68,101,232,151,179,113,
    5,194,10,68,21,232,87,104,92,5,44,131,167,129,91,131,
    159,0,23,0,95,251,85,112,235,128,21,133,54,22,104,13,
    220,38,96,73,161,173,5,90,7,183,13,103,221,53,114,39,
    248,77,191,174,70,154,100,177,157,169,247,73,28,219,2,223,
    219,105,140,242,20,229,183,36,29,103,83,237,108,42,112,204,
    100,42,49,205,192,117,18,239,194,196,25,163,251,113,48,66,
    71,74,182,157,237,206,214,57,203,201,56,230,100,156,144,130,
    0,125,141,83,66,81,83,46,40,86,202,3,69,136,85,24,
    213,0,235,48,106,112,38,46,8,108,44,129,77,78,7,131,
    45,48,207,186,85,50,100,86,216,141,26,107,234,56,177,79,
    106,132,145,145,78,7,115,35,206,2,48,134,202,33,195,11,
    113,22,12,66,220,153,4,19,12,131,24,141,108,83,207,247,
    197,99,218,119,30,164,114,106,135,186,227,219,113,140,161,208,
    39,152,234,5,152,219,18,15,105,97,60,141,6,52,149,120,
    215,102,187,156,38,217,32,97,89,177,29,161,101,201,150,26,
    68,137,59,13,121,168,28,158,79,80,54,73,113,102,51,203,
    9,109,33,212,42,30,249,104,187,152,74,142,237,147,157,218,
    145,228,188,125,136,165,138,145,16,140,179,28,159,59,194,34,
    247,172,115,58,89,94,250,100,37,158,149,251,100,21,62,169,
    147,24,100,68,116,185,24,151,66,252,32,97,248,73,132,6,
    70,65,56,55,78,80,140,101,50,49,142,49,118,252,200,78,
    199,65,60,52,236,3,99,136,209,225,142,144,54,231,111,23,
    143,158,122,182,243,108,239,240,192,49,68,234,24,255,158,241,
    21,102,245,38,115,85,192,39,236,200,61,18,53,45,123,214,
    180,38,189,114,107,65,166,124,3,37,2,83,58,25,175,211,
    234,236,175,180,98,66,17,88,47,8,213,88,34,84,115,9,
    108,1,221,51,6,219,204,50,197,45,190,23,178,67,226,170,
    31,226,245,173,248,118,117,59,51,111,155,11,124,162,7,177,
    158,98,104,203,32,137,117,153,232,137,244,137,97,185,65,154,
    44,206,251,111,68,101,18,153,42,184,58,11,166,172,201,68,
    49,153,137,102,187,184,86,95,200,215,253,61,89,226,150,225,
    154,124,223,77,46,148,185,193,162,179,66,165,187,193,39,46,
    85,143,29,233,92,242,169,180,81,48,106,253,42,163,174,19,
    233,232,70,34,81,135,29,85,153,78,121,91,170,21,72,165,
    96,75,125,193,150,77,62,254,197,173,136,177,26,134,239,7,
    42,151,220,204,92,244,236,105,40,245,193,212,243,168,148,34,
    248,142,47,245,93,98,132,27,56,182,68,65,154,23,196,129,
    196,124,5,165,55,224,59,37,248,242,164,170,191,233,197,49,
    58,229,123,136,162,219,184,161,246,139,178,155,15,138,118,159,
    25,180,248,72,185,185,210,98,216,160,149,27,187,99,245,103,
    71,159,179,35,173,69,253,155,244,156,170,160,85,43,140,14,
    123,19,110,173,66,245,105,30,165,201,108,110,242,7,205,100,
    158,155,229,226,195,162,200,164,44,222,177,40,149,231,175,178,
    111,202,155,71,69,247,108,105,45,173,195,79,105,171,185,213,
    254,3,55,63,41,123,
};

EmbeddedPython embedded_m5_objects_GarnetNetwork(
    "m5/objects/GarnetNetwork.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/src/mem/ruby/network/garnet/flexible-pipeline/GarnetNetwork.py",
    "m5.objects.GarnetNetwork",
    data_m5_objects_GarnetNetwork,
    822,
    2183);

} // anonymous namespace