/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-accel_tcg.h"

uint16_t _TRACE_EXEC_TB_DSTATE;
uint16_t _TRACE_EXEC_TB_NOCACHE_DSTATE;
uint16_t _TRACE_EXEC_TB_EXIT_DSTATE;
uint16_t _TRACE_MEMORY_NOTDIRTY_WRITE_ACCESS_DSTATE;
uint16_t _TRACE_MEMORY_NOTDIRTY_SET_DIRTY_DSTATE;
uint16_t _TRACE_TRANSLATE_BLOCK_DSTATE;
TraceEvent _TRACE_EXEC_TB_EVENT = {
    .id = 0,
    .name = "exec_tb",
    .sstate = TRACE_EXEC_TB_ENABLED,
    .dstate = &_TRACE_EXEC_TB_DSTATE 
};
TraceEvent _TRACE_EXEC_TB_NOCACHE_EVENT = {
    .id = 0,
    .name = "exec_tb_nocache",
    .sstate = TRACE_EXEC_TB_NOCACHE_ENABLED,
    .dstate = &_TRACE_EXEC_TB_NOCACHE_DSTATE 
};
TraceEvent _TRACE_EXEC_TB_EXIT_EVENT = {
    .id = 0,
    .name = "exec_tb_exit",
    .sstate = TRACE_EXEC_TB_EXIT_ENABLED,
    .dstate = &_TRACE_EXEC_TB_EXIT_DSTATE 
};
TraceEvent _TRACE_MEMORY_NOTDIRTY_WRITE_ACCESS_EVENT = {
    .id = 0,
    .name = "memory_notdirty_write_access",
    .sstate = TRACE_MEMORY_NOTDIRTY_WRITE_ACCESS_ENABLED,
    .dstate = &_TRACE_MEMORY_NOTDIRTY_WRITE_ACCESS_DSTATE 
};
TraceEvent _TRACE_MEMORY_NOTDIRTY_SET_DIRTY_EVENT = {
    .id = 0,
    .name = "memory_notdirty_set_dirty",
    .sstate = TRACE_MEMORY_NOTDIRTY_SET_DIRTY_ENABLED,
    .dstate = &_TRACE_MEMORY_NOTDIRTY_SET_DIRTY_DSTATE 
};
TraceEvent _TRACE_TRANSLATE_BLOCK_EVENT = {
    .id = 0,
    .name = "translate_block",
    .sstate = TRACE_TRANSLATE_BLOCK_ENABLED,
    .dstate = &_TRACE_TRANSLATE_BLOCK_DSTATE 
};
TraceEvent *accel_tcg_trace_events[] = {
    &_TRACE_EXEC_TB_EVENT,
    &_TRACE_EXEC_TB_NOCACHE_EVENT,
    &_TRACE_EXEC_TB_EXIT_EVENT,
    &_TRACE_MEMORY_NOTDIRTY_WRITE_ACCESS_EVENT,
    &_TRACE_MEMORY_NOTDIRTY_SET_DIRTY_EVENT,
    &_TRACE_TRANSLATE_BLOCK_EVENT,
  NULL,
};

static void trace_accel_tcg_register_events(void)
{
    trace_event_register_group(accel_tcg_trace_events);
}
trace_init(trace_accel_tcg_register_events)
