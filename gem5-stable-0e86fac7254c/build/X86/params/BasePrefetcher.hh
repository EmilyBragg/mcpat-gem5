#ifndef __PARAMS__BasePrefetcher__
#define __PARAMS__BasePrefetcher__

class BasePrefetcher;

#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include "params/System.hh"
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include "base/types.hh"

#include "params/ClockedObject.hh"

struct BasePrefetcherParams
    : public ClockedObjectParams
{
    bool data_accesses_only;
    Cycles latency;
    bool use_master_id;
    int degree;
    bool on_read_only;
    bool inst_tagged;
    bool on_prefetch;
    System * sys;
    bool serial_squash;
    bool on_miss_only;
    bool cross_pages;
    int size;
};

#endif // __PARAMS__BasePrefetcher__
