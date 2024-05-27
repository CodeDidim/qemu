/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-hw_alpha.h"

uint16_t _TRACE_ALPHA_PCI_IACK_WRITE_DSTATE;
TraceEvent _TRACE_ALPHA_PCI_IACK_WRITE_EVENT = {
    .id = 0,
    .name = "alpha_pci_iack_write",
    .sstate = TRACE_ALPHA_PCI_IACK_WRITE_ENABLED,
    .dstate = &_TRACE_ALPHA_PCI_IACK_WRITE_DSTATE 
};
TraceEvent *hw_alpha_trace_events[] = {
    &_TRACE_ALPHA_PCI_IACK_WRITE_EVENT,
  NULL,
};

static void trace_hw_alpha_register_events(void)
{
    trace_event_register_group(hw_alpha_trace_events);
}
trace_init(trace_hw_alpha_register_events)
