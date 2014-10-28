#ifndef __PARAMS__LRU__
#define __PARAMS__LRU__

class LRU;

#include <cstddef>
#include <cstddef>
#include "base/types.hh"

#include "params/BaseTags.hh"

struct LRUParams
    : public BaseTagsParams
{
    LRU * create();
    bool sequential_access;
    int assoc;
};

#endif // __PARAMS__LRU__
