#ifndef __PARAMS__DRAMCtrl__
#define __PARAMS__DRAMCtrl__

class DRAMCtrl;

#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "enums/AddrMap.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "enums/PageManage.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "enums/MemSched.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/AbstractMemory.hh"

#include "enums/AddrMap.hh"

#include "enums/PageManage.hh"

#include "enums/MemSched.hh"

struct DRAMCtrlParams
    : public AbstractMemoryParams
{
    DRAMCtrl * create();
    Tick tRFC;
    unsigned activation_limit;
    Tick tWTR;
    int write_low_thresh_perc;
    unsigned channels;
    unsigned min_writes_per_switch;
    unsigned device_bus_width;
    int write_high_thresh_perc;
    Tick tRRD;
    Tick tRTW;
    unsigned max_accesses_per_row;
    unsigned burst_length;
    Tick tRTP;
    Tick tWR;
    unsigned banks_per_rank;
    Tick static_backend_latency;
    Tick tXAW;
    Enums::AddrMap addr_mapping;
    Tick tRCD;
    unsigned write_buffer_size;
    unsigned ranks_per_channel;
    Enums::PageManage page_policy;
    Tick tCL;
    unsigned read_buffer_size;
    Tick tCK;
    Tick tRAS;
    Tick tBURST;
    Tick static_frontend_latency;
    unsigned devices_per_rank;
    Tick tREFI;
    Enums::MemSched mem_sched_policy;
    Tick tRP;
    uint64_t device_rowbuffer_size;
    unsigned int port_port_connection_count;
};

#endif // __PARAMS__DRAMCtrl__
