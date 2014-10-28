#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_MemObject[] = {
    120,156,189,80,77,75,195,64,16,157,124,180,168,32,232,85,
    16,61,6,161,93,145,86,61,136,72,245,170,98,235,197,92,
    194,102,51,109,98,178,73,200,110,161,57,235,255,214,153,196,
    234,63,112,63,30,51,187,143,121,111,70,193,207,242,232,222,
    157,2,152,51,10,18,58,14,20,0,26,32,4,112,18,23,
    16,96,233,64,226,193,39,192,7,192,91,72,137,15,139,96,
    64,244,236,139,86,224,80,100,247,9,238,139,74,229,152,60,
    199,239,168,172,221,165,151,71,212,125,166,182,114,76,158,177,
    220,17,5,84,155,203,17,146,142,7,161,207,234,225,0,230,
    139,192,165,239,57,147,205,33,129,70,45,232,70,85,87,108,
    156,166,193,144,69,119,8,162,168,148,26,163,200,238,117,137,
    174,146,117,193,169,207,132,182,198,46,120,109,214,216,177,101,
    108,108,35,201,29,179,213,102,19,165,40,19,108,2,182,246,
    7,230,133,64,164,149,70,129,58,43,90,241,128,38,183,85,
    45,102,88,170,84,203,38,207,202,149,144,19,177,66,61,29,
    25,43,227,2,71,231,120,125,185,148,234,234,98,58,81,194,
    52,138,13,139,223,1,140,235,182,107,231,132,203,179,249,161,
    195,251,169,111,20,182,221,254,139,145,110,18,55,253,164,110,
    143,89,134,77,28,184,223,123,211,120,168,
};

EmbeddedPython embedded_m5_objects_MemObject(
    "m5/objects/MemObject.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/src/mem/MemObject.py",
    "m5.objects.MemObject",
    data_m5_objects_MemObject,
    299,
    532);

} // anonymous namespace