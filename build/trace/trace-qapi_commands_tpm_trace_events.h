/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_QAPI_COMMANDS_TPM_TRACE_EVENTS_GENERATED_TRACERS_H
#define TRACE_QAPI_COMMANDS_TPM_TRACE_EVENTS_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_QMP_ENTER_QUERY_TPM_MODELS_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_QUERY_TPM_MODELS_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_QUERY_TPM_TYPES_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_QUERY_TPM_TYPES_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_QUERY_TPM_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_QUERY_TPM_EVENT;
extern uint16_t _TRACE_QMP_ENTER_QUERY_TPM_MODELS_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_QUERY_TPM_MODELS_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_QUERY_TPM_TYPES_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_QUERY_TPM_TYPES_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_QUERY_TPM_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_QUERY_TPM_DSTATE;
#define TRACE_QMP_ENTER_QUERY_TPM_MODELS_ENABLED 1
#define TRACE_QMP_EXIT_QUERY_TPM_MODELS_ENABLED 1
#define TRACE_QMP_ENTER_QUERY_TPM_TYPES_ENABLED 1
#define TRACE_QMP_EXIT_QUERY_TPM_TYPES_ENABLED 1
#define TRACE_QMP_ENTER_QUERY_TPM_ENABLED 1
#define TRACE_QMP_EXIT_QUERY_TPM_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_QMP_ENTER_QUERY_TPM_MODELS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_QUERY_TPM_MODELS) || \
    false)

static inline void _nocheck__trace_qmp_enter_query_tpm_models(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_QUERY_TPM_MODELS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 3 "qapi/qapi-commands-tpm.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_query_tpm_models " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 46 "trace/trace-qapi_commands_tpm_trace_events.h"
        } else {
#line 3 "qapi/qapi-commands-tpm.trace-events"
            qemu_log("qmp_enter_query_tpm_models " "%s" "\n", json);
#line 50 "trace/trace-qapi_commands_tpm_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_query_tpm_models(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_query_tpm_models(json);
    }
}

#define TRACE_QMP_EXIT_QUERY_TPM_MODELS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_QUERY_TPM_MODELS) || \
    false)

static inline void _nocheck__trace_qmp_exit_query_tpm_models(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_QUERY_TPM_MODELS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "qapi/qapi-commands-tpm.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_query_tpm_models " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 77 "trace/trace-qapi_commands_tpm_trace_events.h"
        } else {
#line 4 "qapi/qapi-commands-tpm.trace-events"
            qemu_log("qmp_exit_query_tpm_models " "%s %d" "\n", result, succeeded);
#line 81 "trace/trace-qapi_commands_tpm_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_query_tpm_models(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_query_tpm_models(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_QUERY_TPM_TYPES_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_QUERY_TPM_TYPES) || \
    false)

static inline void _nocheck__trace_qmp_enter_query_tpm_types(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_QUERY_TPM_TYPES) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "qapi/qapi-commands-tpm.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_query_tpm_types " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 108 "trace/trace-qapi_commands_tpm_trace_events.h"
        } else {
#line 5 "qapi/qapi-commands-tpm.trace-events"
            qemu_log("qmp_enter_query_tpm_types " "%s" "\n", json);
#line 112 "trace/trace-qapi_commands_tpm_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_query_tpm_types(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_query_tpm_types(json);
    }
}

#define TRACE_QMP_EXIT_QUERY_TPM_TYPES_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_QUERY_TPM_TYPES) || \
    false)

static inline void _nocheck__trace_qmp_exit_query_tpm_types(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_QUERY_TPM_TYPES) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 6 "qapi/qapi-commands-tpm.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_query_tpm_types " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 139 "trace/trace-qapi_commands_tpm_trace_events.h"
        } else {
#line 6 "qapi/qapi-commands-tpm.trace-events"
            qemu_log("qmp_exit_query_tpm_types " "%s %d" "\n", result, succeeded);
#line 143 "trace/trace-qapi_commands_tpm_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_query_tpm_types(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_query_tpm_types(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_QUERY_TPM_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_QUERY_TPM) || \
    false)

static inline void _nocheck__trace_qmp_enter_query_tpm(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_QUERY_TPM) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 7 "qapi/qapi-commands-tpm.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_query_tpm " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 170 "trace/trace-qapi_commands_tpm_trace_events.h"
        } else {
#line 7 "qapi/qapi-commands-tpm.trace-events"
            qemu_log("qmp_enter_query_tpm " "%s" "\n", json);
#line 174 "trace/trace-qapi_commands_tpm_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_query_tpm(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_query_tpm(json);
    }
}

#define TRACE_QMP_EXIT_QUERY_TPM_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_QUERY_TPM) || \
    false)

static inline void _nocheck__trace_qmp_exit_query_tpm(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_QUERY_TPM) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 8 "qapi/qapi-commands-tpm.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_query_tpm " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 201 "trace/trace-qapi_commands_tpm_trace_events.h"
        } else {
#line 8 "qapi/qapi-commands-tpm.trace-events"
            qemu_log("qmp_exit_query_tpm " "%s %d" "\n", result, succeeded);
#line 205 "trace/trace-qapi_commands_tpm_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_query_tpm(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_query_tpm(result, succeeded);
    }
}
#endif /* TRACE_QAPI_COMMANDS_TPM_TRACE_EVENTS_GENERATED_TRACERS_H */
