#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal[] = {
    120,156,93,78,177,10,194,48,20,140,224,224,103,56,118,169,
    79,164,209,14,34,34,206,46,126,64,136,233,179,9,205,75,
    74,94,28,250,247,38,224,228,193,29,199,221,112,103,196,15,
    171,194,235,86,8,94,23,51,8,241,108,106,242,104,106,247,
    39,172,138,128,141,132,128,228,252,2,119,228,41,199,25,110,
    24,140,37,157,38,23,70,208,29,140,72,178,229,172,95,30,
    219,61,246,199,183,54,167,131,236,12,112,50,48,47,217,198,
    0,36,193,133,140,41,104,15,74,185,224,178,82,187,210,109,
    202,198,153,226,240,241,120,169,79,184,46,127,1,164,203,41,
    167,
};

EmbeddedPython embedded_m5_internal(
    "m5/internal/__init__.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/src/python/m5/internal/__init__.py",
    "m5.internal",
    data_m5_internal,
    145,
    174);

} // anonymous namespace
