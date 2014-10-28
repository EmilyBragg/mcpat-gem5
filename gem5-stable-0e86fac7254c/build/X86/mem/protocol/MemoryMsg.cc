/** \file MemoryMsg.cc
 *
 * Auto generated C++ code started by /home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/src/mem/slicc/symbols/Type.py:421
 */

#include <iostream>

#include "mem/protocol/MemoryMsg.hh"
#include "mem/ruby/common/Global.hh"
#include "mem/ruby/system/System.hh"

using namespace std;
/** \brief Print the state of this object */
void
MemoryMsg::print(ostream& out) const
{
    out << "[MemoryMsg: ";
    out << "Addr = " << m_Addr << " ";
    out << "Type = " << m_Type << " ";
    out << "Sender = " << m_Sender << " ";
    out << "OriginalRequestorMachId = " << m_OriginalRequestorMachId << " ";
    out << "DataBlk = " << m_DataBlk << " ";
    out << "MessageSize = " << m_MessageSize << " ";
    out << "Prefetch = " << m_Prefetch << " ";
    out << "ReadX = " << m_ReadX << " ";
    out << "Acks = " << m_Acks << " ";
    out << "Time = " << g_system_ptr->clockPeriod() * getTime() << " ";
    out << "]";
}
bool
MemoryMsg::functionalWrite(Packet* param_pkt)
{
return (testAndWrite(m_Addr, m_DataBlk, param_pkt));

}
bool
MemoryMsg::functionalRead(Packet* param_pkt)
{
return (testAndRead(m_Addr, m_DataBlk, param_pkt));

}
