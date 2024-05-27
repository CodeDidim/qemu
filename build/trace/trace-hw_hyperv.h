/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_HW_HYPERV_GENERATED_TRACERS_H
#define TRACE_HW_HYPERV_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_VMBUS_RECV_MESSAGE_EVENT;
extern TraceEvent _TRACE_VMBUS_SIGNAL_EVENT_EVENT;
extern TraceEvent _TRACE_VMBUS_CHANNEL_NOTIFY_GUEST_EVENT;
extern TraceEvent _TRACE_VMBUS_POST_MSG_EVENT;
extern TraceEvent _TRACE_VMBUS_MSG_CB_EVENT;
extern TraceEvent _TRACE_VMBUS_PROCESS_INCOMING_MESSAGE_EVENT;
extern TraceEvent _TRACE_VMBUS_INITIATE_CONTACT_EVENT;
extern TraceEvent _TRACE_VMBUS_SEND_OFFER_EVENT;
extern TraceEvent _TRACE_VMBUS_TERMINATE_OFFERS_EVENT;
extern TraceEvent _TRACE_VMBUS_GPADL_HEADER_EVENT;
extern TraceEvent _TRACE_VMBUS_GPADL_BODY_EVENT;
extern TraceEvent _TRACE_VMBUS_GPADL_CREATED_EVENT;
extern TraceEvent _TRACE_VMBUS_GPADL_TEARDOWN_EVENT;
extern TraceEvent _TRACE_VMBUS_GPADL_TORNDOWN_EVENT;
extern TraceEvent _TRACE_VMBUS_OPEN_CHANNEL_EVENT;
extern TraceEvent _TRACE_VMBUS_CHANNEL_OPEN_EVENT;
extern TraceEvent _TRACE_VMBUS_CLOSE_CHANNEL_EVENT;
extern uint16_t _TRACE_VMBUS_RECV_MESSAGE_DSTATE;
extern uint16_t _TRACE_VMBUS_SIGNAL_EVENT_DSTATE;
extern uint16_t _TRACE_VMBUS_CHANNEL_NOTIFY_GUEST_DSTATE;
extern uint16_t _TRACE_VMBUS_POST_MSG_DSTATE;
extern uint16_t _TRACE_VMBUS_MSG_CB_DSTATE;
extern uint16_t _TRACE_VMBUS_PROCESS_INCOMING_MESSAGE_DSTATE;
extern uint16_t _TRACE_VMBUS_INITIATE_CONTACT_DSTATE;
extern uint16_t _TRACE_VMBUS_SEND_OFFER_DSTATE;
extern uint16_t _TRACE_VMBUS_TERMINATE_OFFERS_DSTATE;
extern uint16_t _TRACE_VMBUS_GPADL_HEADER_DSTATE;
extern uint16_t _TRACE_VMBUS_GPADL_BODY_DSTATE;
extern uint16_t _TRACE_VMBUS_GPADL_CREATED_DSTATE;
extern uint16_t _TRACE_VMBUS_GPADL_TEARDOWN_DSTATE;
extern uint16_t _TRACE_VMBUS_GPADL_TORNDOWN_DSTATE;
extern uint16_t _TRACE_VMBUS_OPEN_CHANNEL_DSTATE;
extern uint16_t _TRACE_VMBUS_CHANNEL_OPEN_DSTATE;
extern uint16_t _TRACE_VMBUS_CLOSE_CHANNEL_DSTATE;
#define TRACE_VMBUS_RECV_MESSAGE_ENABLED 1
#define TRACE_VMBUS_SIGNAL_EVENT_ENABLED 1
#define TRACE_VMBUS_CHANNEL_NOTIFY_GUEST_ENABLED 1
#define TRACE_VMBUS_POST_MSG_ENABLED 1
#define TRACE_VMBUS_MSG_CB_ENABLED 1
#define TRACE_VMBUS_PROCESS_INCOMING_MESSAGE_ENABLED 1
#define TRACE_VMBUS_INITIATE_CONTACT_ENABLED 1
#define TRACE_VMBUS_SEND_OFFER_ENABLED 1
#define TRACE_VMBUS_TERMINATE_OFFERS_ENABLED 1
#define TRACE_VMBUS_GPADL_HEADER_ENABLED 1
#define TRACE_VMBUS_GPADL_BODY_ENABLED 1
#define TRACE_VMBUS_GPADL_CREATED_ENABLED 1
#define TRACE_VMBUS_GPADL_TEARDOWN_ENABLED 1
#define TRACE_VMBUS_GPADL_TORNDOWN_ENABLED 1
#define TRACE_VMBUS_OPEN_CHANNEL_ENABLED 1
#define TRACE_VMBUS_CHANNEL_OPEN_ENABLED 1
#define TRACE_VMBUS_CLOSE_CHANNEL_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_VMBUS_RECV_MESSAGE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VMBUS_RECV_MESSAGE) || \
    false)

static inline void _nocheck__trace_vmbus_recv_message(uint32_t type, uint32_t size)
{
    if (trace_event_get_state(TRACE_VMBUS_RECV_MESSAGE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 2 "../hw/hyperv/trace-events"
            qemu_log("%d@%zu.%06zu:vmbus_recv_message " "type %d size %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , type, size);
#line 79 "trace/trace-hw_hyperv.h"
        } else {
#line 2 "../hw/hyperv/trace-events"
            qemu_log("vmbus_recv_message " "type %d size %d" "\n", type, size);
#line 83 "trace/trace-hw_hyperv.h"
        }
    }
}

static inline void trace_vmbus_recv_message(uint32_t type, uint32_t size)
{
    if (true) {
        _nocheck__trace_vmbus_recv_message(type, size);
    }
}

#define TRACE_VMBUS_SIGNAL_EVENT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VMBUS_SIGNAL_EVENT) || \
    false)

static inline void _nocheck__trace_vmbus_signal_event(void)
{
    if (trace_event_get_state(TRACE_VMBUS_SIGNAL_EVENT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 3 "../hw/hyperv/trace-events"
            qemu_log("%d@%zu.%06zu:vmbus_signal_event " "" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     );
#line 110 "trace/trace-hw_hyperv.h"
        } else {
#line 3 "../hw/hyperv/trace-events"
            qemu_log("vmbus_signal_event " "" "\n");
#line 114 "trace/trace-hw_hyperv.h"
        }
    }
}

static inline void trace_vmbus_signal_event(void)
{
    if (true) {
        _nocheck__trace_vmbus_signal_event();
    }
}

#define TRACE_VMBUS_CHANNEL_NOTIFY_GUEST_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VMBUS_CHANNEL_NOTIFY_GUEST) || \
    false)

static inline void _nocheck__trace_vmbus_channel_notify_guest(uint32_t chan_id)
{
    if (trace_event_get_state(TRACE_VMBUS_CHANNEL_NOTIFY_GUEST) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "../hw/hyperv/trace-events"
            qemu_log("%d@%zu.%06zu:vmbus_channel_notify_guest " "channel #%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , chan_id);
#line 141 "trace/trace-hw_hyperv.h"
        } else {
#line 4 "../hw/hyperv/trace-events"
            qemu_log("vmbus_channel_notify_guest " "channel #%d" "\n", chan_id);
#line 145 "trace/trace-hw_hyperv.h"
        }
    }
}

static inline void trace_vmbus_channel_notify_guest(uint32_t chan_id)
{
    if (true) {
        _nocheck__trace_vmbus_channel_notify_guest(chan_id);
    }
}

#define TRACE_VMBUS_POST_MSG_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VMBUS_POST_MSG) || \
    false)

static inline void _nocheck__trace_vmbus_post_msg(uint32_t type, uint32_t size)
{
    if (trace_event_get_state(TRACE_VMBUS_POST_MSG) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "../hw/hyperv/trace-events"
            qemu_log("%d@%zu.%06zu:vmbus_post_msg " "type %d size %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , type, size);
#line 172 "trace/trace-hw_hyperv.h"
        } else {
#line 5 "../hw/hyperv/trace-events"
            qemu_log("vmbus_post_msg " "type %d size %d" "\n", type, size);
#line 176 "trace/trace-hw_hyperv.h"
        }
    }
}

static inline void trace_vmbus_post_msg(uint32_t type, uint32_t size)
{
    if (true) {
        _nocheck__trace_vmbus_post_msg(type, size);
    }
}

#define TRACE_VMBUS_MSG_CB_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VMBUS_MSG_CB) || \
    false)

static inline void _nocheck__trace_vmbus_msg_cb(int status)
{
    if (trace_event_get_state(TRACE_VMBUS_MSG_CB) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 6 "../hw/hyperv/trace-events"
            qemu_log("%d@%zu.%06zu:vmbus_msg_cb " "message status %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , status);
#line 203 "trace/trace-hw_hyperv.h"
        } else {
#line 6 "../hw/hyperv/trace-events"
            qemu_log("vmbus_msg_cb " "message status %d" "\n", status);
#line 207 "trace/trace-hw_hyperv.h"
        }
    }
}

static inline void trace_vmbus_msg_cb(int status)
{
    if (true) {
        _nocheck__trace_vmbus_msg_cb(status);
    }
}

#define TRACE_VMBUS_PROCESS_INCOMING_MESSAGE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VMBUS_PROCESS_INCOMING_MESSAGE) || \
    false)

static inline void _nocheck__trace_vmbus_process_incoming_message(uint32_t message_type)
{
    if (trace_event_get_state(TRACE_VMBUS_PROCESS_INCOMING_MESSAGE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 7 "../hw/hyperv/trace-events"
            qemu_log("%d@%zu.%06zu:vmbus_process_incoming_message " "type %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , message_type);
#line 234 "trace/trace-hw_hyperv.h"
        } else {
#line 7 "../hw/hyperv/trace-events"
            qemu_log("vmbus_process_incoming_message " "type %d" "\n", message_type);
#line 238 "trace/trace-hw_hyperv.h"
        }
    }
}

static inline void trace_vmbus_process_incoming_message(uint32_t message_type)
{
    if (true) {
        _nocheck__trace_vmbus_process_incoming_message(message_type);
    }
}

#define TRACE_VMBUS_INITIATE_CONTACT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VMBUS_INITIATE_CONTACT) || \
    false)

static inline void _nocheck__trace_vmbus_initiate_contact(uint16_t major, uint16_t minor, uint32_t vcpu, uint64_t monitor_page1, uint64_t monitor_page2, uint64_t interrupt_page)
{
    if (trace_event_get_state(TRACE_VMBUS_INITIATE_CONTACT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 8 "../hw/hyperv/trace-events"
            qemu_log("%d@%zu.%06zu:vmbus_initiate_contact " "version %d.%d target vp %d mon pages 0x%"PRIx64",0x%"PRIx64" int page 0x%"PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , major, minor, vcpu, monitor_page1, monitor_page2, interrupt_page);
#line 265 "trace/trace-hw_hyperv.h"
        } else {
#line 8 "../hw/hyperv/trace-events"
            qemu_log("vmbus_initiate_contact " "version %d.%d target vp %d mon pages 0x%"PRIx64",0x%"PRIx64" int page 0x%"PRIx64 "\n", major, minor, vcpu, monitor_page1, monitor_page2, interrupt_page);
#line 269 "trace/trace-hw_hyperv.h"
        }
    }
}

static inline void trace_vmbus_initiate_contact(uint16_t major, uint16_t minor, uint32_t vcpu, uint64_t monitor_page1, uint64_t monitor_page2, uint64_t interrupt_page)
{
    if (true) {
        _nocheck__trace_vmbus_initiate_contact(major, minor, vcpu, monitor_page1, monitor_page2, interrupt_page);
    }
}

#define TRACE_VMBUS_SEND_OFFER_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VMBUS_SEND_OFFER) || \
    false)

static inline void _nocheck__trace_vmbus_send_offer(uint32_t chan_id, void * dev)
{
    if (trace_event_get_state(TRACE_VMBUS_SEND_OFFER) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 9 "../hw/hyperv/trace-events"
            qemu_log("%d@%zu.%06zu:vmbus_send_offer " "channel #%d dev %p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , chan_id, dev);
#line 296 "trace/trace-hw_hyperv.h"
        } else {
#line 9 "../hw/hyperv/trace-events"
            qemu_log("vmbus_send_offer " "channel #%d dev %p" "\n", chan_id, dev);
#line 300 "trace/trace-hw_hyperv.h"
        }
    }
}

static inline void trace_vmbus_send_offer(uint32_t chan_id, void * dev)
{
    if (true) {
        _nocheck__trace_vmbus_send_offer(chan_id, dev);
    }
}

#define TRACE_VMBUS_TERMINATE_OFFERS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VMBUS_TERMINATE_OFFERS) || \
    false)

static inline void _nocheck__trace_vmbus_terminate_offers(void)
{
    if (trace_event_get_state(TRACE_VMBUS_TERMINATE_OFFERS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 10 "../hw/hyperv/trace-events"
            qemu_log("%d@%zu.%06zu:vmbus_terminate_offers " "" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     );
#line 327 "trace/trace-hw_hyperv.h"
        } else {
#line 10 "../hw/hyperv/trace-events"
            qemu_log("vmbus_terminate_offers " "" "\n");
#line 331 "trace/trace-hw_hyperv.h"
        }
    }
}

static inline void trace_vmbus_terminate_offers(void)
{
    if (true) {
        _nocheck__trace_vmbus_terminate_offers();
    }
}

#define TRACE_VMBUS_GPADL_HEADER_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VMBUS_GPADL_HEADER) || \
    false)

static inline void _nocheck__trace_vmbus_gpadl_header(uint32_t gpadl_id, uint16_t num_gfns)
{
    if (trace_event_get_state(TRACE_VMBUS_GPADL_HEADER) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 11 "../hw/hyperv/trace-events"
            qemu_log("%d@%zu.%06zu:vmbus_gpadl_header " "gpadl #%d gfns %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , gpadl_id, num_gfns);
#line 358 "trace/trace-hw_hyperv.h"
        } else {
#line 11 "../hw/hyperv/trace-events"
            qemu_log("vmbus_gpadl_header " "gpadl #%d gfns %d" "\n", gpadl_id, num_gfns);
#line 362 "trace/trace-hw_hyperv.h"
        }
    }
}

static inline void trace_vmbus_gpadl_header(uint32_t gpadl_id, uint16_t num_gfns)
{
    if (true) {
        _nocheck__trace_vmbus_gpadl_header(gpadl_id, num_gfns);
    }
}

#define TRACE_VMBUS_GPADL_BODY_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VMBUS_GPADL_BODY) || \
    false)

static inline void _nocheck__trace_vmbus_gpadl_body(uint32_t gpadl_id)
{
    if (trace_event_get_state(TRACE_VMBUS_GPADL_BODY) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 12 "../hw/hyperv/trace-events"
            qemu_log("%d@%zu.%06zu:vmbus_gpadl_body " "gpadl #%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , gpadl_id);
#line 389 "trace/trace-hw_hyperv.h"
        } else {
#line 12 "../hw/hyperv/trace-events"
            qemu_log("vmbus_gpadl_body " "gpadl #%d" "\n", gpadl_id);
#line 393 "trace/trace-hw_hyperv.h"
        }
    }
}

static inline void trace_vmbus_gpadl_body(uint32_t gpadl_id)
{
    if (true) {
        _nocheck__trace_vmbus_gpadl_body(gpadl_id);
    }
}

#define TRACE_VMBUS_GPADL_CREATED_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VMBUS_GPADL_CREATED) || \
    false)

static inline void _nocheck__trace_vmbus_gpadl_created(uint32_t gpadl_id)
{
    if (trace_event_get_state(TRACE_VMBUS_GPADL_CREATED) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 13 "../hw/hyperv/trace-events"
            qemu_log("%d@%zu.%06zu:vmbus_gpadl_created " "gpadl #%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , gpadl_id);
#line 420 "trace/trace-hw_hyperv.h"
        } else {
#line 13 "../hw/hyperv/trace-events"
            qemu_log("vmbus_gpadl_created " "gpadl #%d" "\n", gpadl_id);
#line 424 "trace/trace-hw_hyperv.h"
        }
    }
}

static inline void trace_vmbus_gpadl_created(uint32_t gpadl_id)
{
    if (true) {
        _nocheck__trace_vmbus_gpadl_created(gpadl_id);
    }
}

#define TRACE_VMBUS_GPADL_TEARDOWN_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VMBUS_GPADL_TEARDOWN) || \
    false)

static inline void _nocheck__trace_vmbus_gpadl_teardown(uint32_t gpadl_id)
{
    if (trace_event_get_state(TRACE_VMBUS_GPADL_TEARDOWN) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 14 "../hw/hyperv/trace-events"
            qemu_log("%d@%zu.%06zu:vmbus_gpadl_teardown " "gpadl #%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , gpadl_id);
#line 451 "trace/trace-hw_hyperv.h"
        } else {
#line 14 "../hw/hyperv/trace-events"
            qemu_log("vmbus_gpadl_teardown " "gpadl #%d" "\n", gpadl_id);
#line 455 "trace/trace-hw_hyperv.h"
        }
    }
}

static inline void trace_vmbus_gpadl_teardown(uint32_t gpadl_id)
{
    if (true) {
        _nocheck__trace_vmbus_gpadl_teardown(gpadl_id);
    }
}

#define TRACE_VMBUS_GPADL_TORNDOWN_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VMBUS_GPADL_TORNDOWN) || \
    false)

static inline void _nocheck__trace_vmbus_gpadl_torndown(uint32_t gpadl_id)
{
    if (trace_event_get_state(TRACE_VMBUS_GPADL_TORNDOWN) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 15 "../hw/hyperv/trace-events"
            qemu_log("%d@%zu.%06zu:vmbus_gpadl_torndown " "gpadl #%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , gpadl_id);
#line 482 "trace/trace-hw_hyperv.h"
        } else {
#line 15 "../hw/hyperv/trace-events"
            qemu_log("vmbus_gpadl_torndown " "gpadl #%d" "\n", gpadl_id);
#line 486 "trace/trace-hw_hyperv.h"
        }
    }
}

static inline void trace_vmbus_gpadl_torndown(uint32_t gpadl_id)
{
    if (true) {
        _nocheck__trace_vmbus_gpadl_torndown(gpadl_id);
    }
}

#define TRACE_VMBUS_OPEN_CHANNEL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VMBUS_OPEN_CHANNEL) || \
    false)

static inline void _nocheck__trace_vmbus_open_channel(uint32_t chan_id, uint32_t gpadl_id, uint32_t target_vp)
{
    if (trace_event_get_state(TRACE_VMBUS_OPEN_CHANNEL) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 16 "../hw/hyperv/trace-events"
            qemu_log("%d@%zu.%06zu:vmbus_open_channel " "channel #%d gpadl #%d target vp %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , chan_id, gpadl_id, target_vp);
#line 513 "trace/trace-hw_hyperv.h"
        } else {
#line 16 "../hw/hyperv/trace-events"
            qemu_log("vmbus_open_channel " "channel #%d gpadl #%d target vp %d" "\n", chan_id, gpadl_id, target_vp);
#line 517 "trace/trace-hw_hyperv.h"
        }
    }
}

static inline void trace_vmbus_open_channel(uint32_t chan_id, uint32_t gpadl_id, uint32_t target_vp)
{
    if (true) {
        _nocheck__trace_vmbus_open_channel(chan_id, gpadl_id, target_vp);
    }
}

#define TRACE_VMBUS_CHANNEL_OPEN_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VMBUS_CHANNEL_OPEN) || \
    false)

static inline void _nocheck__trace_vmbus_channel_open(uint32_t chan_id, uint32_t status)
{
    if (trace_event_get_state(TRACE_VMBUS_CHANNEL_OPEN) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 17 "../hw/hyperv/trace-events"
            qemu_log("%d@%zu.%06zu:vmbus_channel_open " "channel #%d status %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , chan_id, status);
#line 544 "trace/trace-hw_hyperv.h"
        } else {
#line 17 "../hw/hyperv/trace-events"
            qemu_log("vmbus_channel_open " "channel #%d status %d" "\n", chan_id, status);
#line 548 "trace/trace-hw_hyperv.h"
        }
    }
}

static inline void trace_vmbus_channel_open(uint32_t chan_id, uint32_t status)
{
    if (true) {
        _nocheck__trace_vmbus_channel_open(chan_id, status);
    }
}

#define TRACE_VMBUS_CLOSE_CHANNEL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VMBUS_CLOSE_CHANNEL) || \
    false)

static inline void _nocheck__trace_vmbus_close_channel(uint32_t chan_id)
{
    if (trace_event_get_state(TRACE_VMBUS_CLOSE_CHANNEL) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 18 "../hw/hyperv/trace-events"
            qemu_log("%d@%zu.%06zu:vmbus_close_channel " "channel #%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , chan_id);
#line 575 "trace/trace-hw_hyperv.h"
        } else {
#line 18 "../hw/hyperv/trace-events"
            qemu_log("vmbus_close_channel " "channel #%d" "\n", chan_id);
#line 579 "trace/trace-hw_hyperv.h"
        }
    }
}

static inline void trace_vmbus_close_channel(uint32_t chan_id)
{
    if (true) {
        _nocheck__trace_vmbus_close_channel(chan_id);
    }
}
#endif /* TRACE_HW_HYPERV_GENERATED_TRACERS_H */
