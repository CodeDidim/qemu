/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_QAPI_COMMANDS_BLOCK_TRACE_EVENTS_GENERATED_TRACERS_H
#define TRACE_QAPI_COMMANDS_BLOCK_TRACE_EVENTS_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_QMP_ENTER_QUERY_PR_MANAGERS_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_QUERY_PR_MANAGERS_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_EJECT_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_EJECT_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_BLOCKDEV_OPEN_TRAY_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_BLOCKDEV_OPEN_TRAY_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_BLOCKDEV_CLOSE_TRAY_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_BLOCKDEV_CLOSE_TRAY_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_BLOCKDEV_REMOVE_MEDIUM_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_BLOCKDEV_REMOVE_MEDIUM_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_BLOCKDEV_INSERT_MEDIUM_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_BLOCKDEV_INSERT_MEDIUM_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_BLOCKDEV_CHANGE_MEDIUM_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_BLOCKDEV_CHANGE_MEDIUM_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_BLOCK_SET_IO_THROTTLE_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_BLOCK_SET_IO_THROTTLE_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_BLOCK_LATENCY_HISTOGRAM_SET_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_BLOCK_LATENCY_HISTOGRAM_SET_EVENT;
extern uint16_t _TRACE_QMP_ENTER_QUERY_PR_MANAGERS_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_QUERY_PR_MANAGERS_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_EJECT_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_EJECT_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_BLOCKDEV_OPEN_TRAY_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_BLOCKDEV_OPEN_TRAY_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_BLOCKDEV_CLOSE_TRAY_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_BLOCKDEV_CLOSE_TRAY_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_BLOCKDEV_REMOVE_MEDIUM_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_BLOCKDEV_REMOVE_MEDIUM_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_BLOCKDEV_INSERT_MEDIUM_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_BLOCKDEV_INSERT_MEDIUM_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_BLOCKDEV_CHANGE_MEDIUM_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_BLOCKDEV_CHANGE_MEDIUM_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_BLOCK_SET_IO_THROTTLE_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_BLOCK_SET_IO_THROTTLE_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_BLOCK_LATENCY_HISTOGRAM_SET_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_BLOCK_LATENCY_HISTOGRAM_SET_DSTATE;
#define TRACE_QMP_ENTER_QUERY_PR_MANAGERS_ENABLED 1
#define TRACE_QMP_EXIT_QUERY_PR_MANAGERS_ENABLED 1
#define TRACE_QMP_ENTER_EJECT_ENABLED 1
#define TRACE_QMP_EXIT_EJECT_ENABLED 1
#define TRACE_QMP_ENTER_BLOCKDEV_OPEN_TRAY_ENABLED 1
#define TRACE_QMP_EXIT_BLOCKDEV_OPEN_TRAY_ENABLED 1
#define TRACE_QMP_ENTER_BLOCKDEV_CLOSE_TRAY_ENABLED 1
#define TRACE_QMP_EXIT_BLOCKDEV_CLOSE_TRAY_ENABLED 1
#define TRACE_QMP_ENTER_BLOCKDEV_REMOVE_MEDIUM_ENABLED 1
#define TRACE_QMP_EXIT_BLOCKDEV_REMOVE_MEDIUM_ENABLED 1
#define TRACE_QMP_ENTER_BLOCKDEV_INSERT_MEDIUM_ENABLED 1
#define TRACE_QMP_EXIT_BLOCKDEV_INSERT_MEDIUM_ENABLED 1
#define TRACE_QMP_ENTER_BLOCKDEV_CHANGE_MEDIUM_ENABLED 1
#define TRACE_QMP_EXIT_BLOCKDEV_CHANGE_MEDIUM_ENABLED 1
#define TRACE_QMP_ENTER_BLOCK_SET_IO_THROTTLE_ENABLED 1
#define TRACE_QMP_EXIT_BLOCK_SET_IO_THROTTLE_ENABLED 1
#define TRACE_QMP_ENTER_BLOCK_LATENCY_HISTOGRAM_SET_ENABLED 1
#define TRACE_QMP_EXIT_BLOCK_LATENCY_HISTOGRAM_SET_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_QMP_ENTER_QUERY_PR_MANAGERS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_QUERY_PR_MANAGERS) || \
    false)

static inline void _nocheck__trace_qmp_enter_query_pr_managers(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_QUERY_PR_MANAGERS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 3 "qapi/qapi-commands-block.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_query_pr_managers " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 82 "trace/trace-qapi_commands_block_trace_events.h"
        } else {
#line 3 "qapi/qapi-commands-block.trace-events"
            qemu_log("qmp_enter_query_pr_managers " "%s" "\n", json);
#line 86 "trace/trace-qapi_commands_block_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_query_pr_managers(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_query_pr_managers(json);
    }
}

#define TRACE_QMP_EXIT_QUERY_PR_MANAGERS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_QUERY_PR_MANAGERS) || \
    false)

static inline void _nocheck__trace_qmp_exit_query_pr_managers(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_QUERY_PR_MANAGERS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "qapi/qapi-commands-block.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_query_pr_managers " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 113 "trace/trace-qapi_commands_block_trace_events.h"
        } else {
#line 4 "qapi/qapi-commands-block.trace-events"
            qemu_log("qmp_exit_query_pr_managers " "%s %d" "\n", result, succeeded);
#line 117 "trace/trace-qapi_commands_block_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_query_pr_managers(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_query_pr_managers(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_EJECT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_EJECT) || \
    false)

static inline void _nocheck__trace_qmp_enter_eject(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_EJECT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "qapi/qapi-commands-block.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_eject " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 144 "trace/trace-qapi_commands_block_trace_events.h"
        } else {
#line 5 "qapi/qapi-commands-block.trace-events"
            qemu_log("qmp_enter_eject " "%s" "\n", json);
#line 148 "trace/trace-qapi_commands_block_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_eject(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_eject(json);
    }
}

#define TRACE_QMP_EXIT_EJECT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_EJECT) || \
    false)

static inline void _nocheck__trace_qmp_exit_eject(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_EJECT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 6 "qapi/qapi-commands-block.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_eject " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 175 "trace/trace-qapi_commands_block_trace_events.h"
        } else {
#line 6 "qapi/qapi-commands-block.trace-events"
            qemu_log("qmp_exit_eject " "%s %d" "\n", result, succeeded);
#line 179 "trace/trace-qapi_commands_block_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_eject(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_eject(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_BLOCKDEV_OPEN_TRAY_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_BLOCKDEV_OPEN_TRAY) || \
    false)

static inline void _nocheck__trace_qmp_enter_blockdev_open_tray(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_BLOCKDEV_OPEN_TRAY) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 7 "qapi/qapi-commands-block.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_blockdev_open_tray " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 206 "trace/trace-qapi_commands_block_trace_events.h"
        } else {
#line 7 "qapi/qapi-commands-block.trace-events"
            qemu_log("qmp_enter_blockdev_open_tray " "%s" "\n", json);
#line 210 "trace/trace-qapi_commands_block_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_blockdev_open_tray(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_blockdev_open_tray(json);
    }
}

#define TRACE_QMP_EXIT_BLOCKDEV_OPEN_TRAY_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_BLOCKDEV_OPEN_TRAY) || \
    false)

static inline void _nocheck__trace_qmp_exit_blockdev_open_tray(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_BLOCKDEV_OPEN_TRAY) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 8 "qapi/qapi-commands-block.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_blockdev_open_tray " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 237 "trace/trace-qapi_commands_block_trace_events.h"
        } else {
#line 8 "qapi/qapi-commands-block.trace-events"
            qemu_log("qmp_exit_blockdev_open_tray " "%s %d" "\n", result, succeeded);
#line 241 "trace/trace-qapi_commands_block_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_blockdev_open_tray(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_blockdev_open_tray(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_BLOCKDEV_CLOSE_TRAY_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_BLOCKDEV_CLOSE_TRAY) || \
    false)

static inline void _nocheck__trace_qmp_enter_blockdev_close_tray(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_BLOCKDEV_CLOSE_TRAY) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 9 "qapi/qapi-commands-block.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_blockdev_close_tray " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 268 "trace/trace-qapi_commands_block_trace_events.h"
        } else {
#line 9 "qapi/qapi-commands-block.trace-events"
            qemu_log("qmp_enter_blockdev_close_tray " "%s" "\n", json);
#line 272 "trace/trace-qapi_commands_block_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_blockdev_close_tray(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_blockdev_close_tray(json);
    }
}

#define TRACE_QMP_EXIT_BLOCKDEV_CLOSE_TRAY_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_BLOCKDEV_CLOSE_TRAY) || \
    false)

static inline void _nocheck__trace_qmp_exit_blockdev_close_tray(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_BLOCKDEV_CLOSE_TRAY) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 10 "qapi/qapi-commands-block.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_blockdev_close_tray " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 299 "trace/trace-qapi_commands_block_trace_events.h"
        } else {
#line 10 "qapi/qapi-commands-block.trace-events"
            qemu_log("qmp_exit_blockdev_close_tray " "%s %d" "\n", result, succeeded);
#line 303 "trace/trace-qapi_commands_block_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_blockdev_close_tray(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_blockdev_close_tray(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_BLOCKDEV_REMOVE_MEDIUM_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_BLOCKDEV_REMOVE_MEDIUM) || \
    false)

static inline void _nocheck__trace_qmp_enter_blockdev_remove_medium(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_BLOCKDEV_REMOVE_MEDIUM) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 11 "qapi/qapi-commands-block.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_blockdev_remove_medium " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 330 "trace/trace-qapi_commands_block_trace_events.h"
        } else {
#line 11 "qapi/qapi-commands-block.trace-events"
            qemu_log("qmp_enter_blockdev_remove_medium " "%s" "\n", json);
#line 334 "trace/trace-qapi_commands_block_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_blockdev_remove_medium(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_blockdev_remove_medium(json);
    }
}

#define TRACE_QMP_EXIT_BLOCKDEV_REMOVE_MEDIUM_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_BLOCKDEV_REMOVE_MEDIUM) || \
    false)

static inline void _nocheck__trace_qmp_exit_blockdev_remove_medium(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_BLOCKDEV_REMOVE_MEDIUM) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 12 "qapi/qapi-commands-block.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_blockdev_remove_medium " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 361 "trace/trace-qapi_commands_block_trace_events.h"
        } else {
#line 12 "qapi/qapi-commands-block.trace-events"
            qemu_log("qmp_exit_blockdev_remove_medium " "%s %d" "\n", result, succeeded);
#line 365 "trace/trace-qapi_commands_block_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_blockdev_remove_medium(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_blockdev_remove_medium(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_BLOCKDEV_INSERT_MEDIUM_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_BLOCKDEV_INSERT_MEDIUM) || \
    false)

static inline void _nocheck__trace_qmp_enter_blockdev_insert_medium(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_BLOCKDEV_INSERT_MEDIUM) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 13 "qapi/qapi-commands-block.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_blockdev_insert_medium " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 392 "trace/trace-qapi_commands_block_trace_events.h"
        } else {
#line 13 "qapi/qapi-commands-block.trace-events"
            qemu_log("qmp_enter_blockdev_insert_medium " "%s" "\n", json);
#line 396 "trace/trace-qapi_commands_block_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_blockdev_insert_medium(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_blockdev_insert_medium(json);
    }
}

#define TRACE_QMP_EXIT_BLOCKDEV_INSERT_MEDIUM_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_BLOCKDEV_INSERT_MEDIUM) || \
    false)

static inline void _nocheck__trace_qmp_exit_blockdev_insert_medium(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_BLOCKDEV_INSERT_MEDIUM) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 14 "qapi/qapi-commands-block.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_blockdev_insert_medium " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 423 "trace/trace-qapi_commands_block_trace_events.h"
        } else {
#line 14 "qapi/qapi-commands-block.trace-events"
            qemu_log("qmp_exit_blockdev_insert_medium " "%s %d" "\n", result, succeeded);
#line 427 "trace/trace-qapi_commands_block_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_blockdev_insert_medium(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_blockdev_insert_medium(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_BLOCKDEV_CHANGE_MEDIUM_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_BLOCKDEV_CHANGE_MEDIUM) || \
    false)

static inline void _nocheck__trace_qmp_enter_blockdev_change_medium(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_BLOCKDEV_CHANGE_MEDIUM) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 15 "qapi/qapi-commands-block.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_blockdev_change_medium " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 454 "trace/trace-qapi_commands_block_trace_events.h"
        } else {
#line 15 "qapi/qapi-commands-block.trace-events"
            qemu_log("qmp_enter_blockdev_change_medium " "%s" "\n", json);
#line 458 "trace/trace-qapi_commands_block_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_blockdev_change_medium(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_blockdev_change_medium(json);
    }
}

#define TRACE_QMP_EXIT_BLOCKDEV_CHANGE_MEDIUM_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_BLOCKDEV_CHANGE_MEDIUM) || \
    false)

static inline void _nocheck__trace_qmp_exit_blockdev_change_medium(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_BLOCKDEV_CHANGE_MEDIUM) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 16 "qapi/qapi-commands-block.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_blockdev_change_medium " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 485 "trace/trace-qapi_commands_block_trace_events.h"
        } else {
#line 16 "qapi/qapi-commands-block.trace-events"
            qemu_log("qmp_exit_blockdev_change_medium " "%s %d" "\n", result, succeeded);
#line 489 "trace/trace-qapi_commands_block_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_blockdev_change_medium(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_blockdev_change_medium(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_BLOCK_SET_IO_THROTTLE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_BLOCK_SET_IO_THROTTLE) || \
    false)

static inline void _nocheck__trace_qmp_enter_block_set_io_throttle(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_BLOCK_SET_IO_THROTTLE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 17 "qapi/qapi-commands-block.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_block_set_io_throttle " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 516 "trace/trace-qapi_commands_block_trace_events.h"
        } else {
#line 17 "qapi/qapi-commands-block.trace-events"
            qemu_log("qmp_enter_block_set_io_throttle " "%s" "\n", json);
#line 520 "trace/trace-qapi_commands_block_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_block_set_io_throttle(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_block_set_io_throttle(json);
    }
}

#define TRACE_QMP_EXIT_BLOCK_SET_IO_THROTTLE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_BLOCK_SET_IO_THROTTLE) || \
    false)

static inline void _nocheck__trace_qmp_exit_block_set_io_throttle(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_BLOCK_SET_IO_THROTTLE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 18 "qapi/qapi-commands-block.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_block_set_io_throttle " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 547 "trace/trace-qapi_commands_block_trace_events.h"
        } else {
#line 18 "qapi/qapi-commands-block.trace-events"
            qemu_log("qmp_exit_block_set_io_throttle " "%s %d" "\n", result, succeeded);
#line 551 "trace/trace-qapi_commands_block_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_block_set_io_throttle(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_block_set_io_throttle(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_BLOCK_LATENCY_HISTOGRAM_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_BLOCK_LATENCY_HISTOGRAM_SET) || \
    false)

static inline void _nocheck__trace_qmp_enter_block_latency_histogram_set(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_BLOCK_LATENCY_HISTOGRAM_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 19 "qapi/qapi-commands-block.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_block_latency_histogram_set " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 578 "trace/trace-qapi_commands_block_trace_events.h"
        } else {
#line 19 "qapi/qapi-commands-block.trace-events"
            qemu_log("qmp_enter_block_latency_histogram_set " "%s" "\n", json);
#line 582 "trace/trace-qapi_commands_block_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_block_latency_histogram_set(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_block_latency_histogram_set(json);
    }
}

#define TRACE_QMP_EXIT_BLOCK_LATENCY_HISTOGRAM_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_BLOCK_LATENCY_HISTOGRAM_SET) || \
    false)

static inline void _nocheck__trace_qmp_exit_block_latency_histogram_set(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_BLOCK_LATENCY_HISTOGRAM_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 20 "qapi/qapi-commands-block.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_block_latency_histogram_set " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 609 "trace/trace-qapi_commands_block_trace_events.h"
        } else {
#line 20 "qapi/qapi-commands-block.trace-events"
            qemu_log("qmp_exit_block_latency_histogram_set " "%s %d" "\n", result, succeeded);
#line 613 "trace/trace-qapi_commands_block_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_block_latency_histogram_set(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_block_latency_histogram_set(result, succeeded);
    }
}
#endif /* TRACE_QAPI_COMMANDS_BLOCK_TRACE_EVENTS_GENERATED_TRACERS_H */
