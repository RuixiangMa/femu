/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_HW_SPARC_GENERATED_TRACERS_H
#define TRACE_HW_SPARC_GENERATED_TRACERS_H

#include "qemu-common.h"
#include "trace/control.h"

extern TraceEvent _TRACE_SUN4M_CPU_INTERRUPT_EVENT;
extern TraceEvent _TRACE_SUN4M_CPU_RESET_INTERRUPT_EVENT;
extern TraceEvent _TRACE_SUN4M_CPU_SET_IRQ_RAISE_EVENT;
extern TraceEvent _TRACE_SUN4M_CPU_SET_IRQ_LOWER_EVENT;
extern TraceEvent _TRACE_LEON3_SET_IRQ_EVENT;
extern TraceEvent _TRACE_LEON3_RESET_IRQ_EVENT;
extern uint16_t _TRACE_SUN4M_CPU_INTERRUPT_DSTATE;
extern uint16_t _TRACE_SUN4M_CPU_RESET_INTERRUPT_DSTATE;
extern uint16_t _TRACE_SUN4M_CPU_SET_IRQ_RAISE_DSTATE;
extern uint16_t _TRACE_SUN4M_CPU_SET_IRQ_LOWER_DSTATE;
extern uint16_t _TRACE_LEON3_SET_IRQ_DSTATE;
extern uint16_t _TRACE_LEON3_RESET_IRQ_DSTATE;
#define TRACE_SUN4M_CPU_INTERRUPT_ENABLED 1
#define TRACE_SUN4M_CPU_RESET_INTERRUPT_ENABLED 1
#define TRACE_SUN4M_CPU_SET_IRQ_RAISE_ENABLED 1
#define TRACE_SUN4M_CPU_SET_IRQ_LOWER_ENABLED 1
#define TRACE_LEON3_SET_IRQ_ENABLED 1
#define TRACE_LEON3_RESET_IRQ_ENABLED 1
#include "qemu/log.h"


static inline void trace_sun4m_cpu_interrupt(unsigned int level)
{
    if (true) {
        if (trace_event_get_state(TRACE_SUN4M_CPU_INTERRUPT)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:sun4m_cpu_interrupt " "Set CPU IRQ %d" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , level);
        }
    }
}

static inline void trace_sun4m_cpu_reset_interrupt(unsigned int level)
{
    if (true) {
        if (trace_event_get_state(TRACE_SUN4M_CPU_RESET_INTERRUPT)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:sun4m_cpu_reset_interrupt " "Reset CPU IRQ %d" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , level);
        }
    }
}

static inline void trace_sun4m_cpu_set_irq_raise(int level)
{
    if (true) {
        if (trace_event_get_state(TRACE_SUN4M_CPU_SET_IRQ_RAISE)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:sun4m_cpu_set_irq_raise " "Raise CPU IRQ %d" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , level);
        }
    }
}

static inline void trace_sun4m_cpu_set_irq_lower(int level)
{
    if (true) {
        if (trace_event_get_state(TRACE_SUN4M_CPU_SET_IRQ_LOWER)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:sun4m_cpu_set_irq_lower " "Lower CPU IRQ %d" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , level);
        }
    }
}

static inline void trace_leon3_set_irq(int intno)
{
    if (true) {
        if (trace_event_get_state(TRACE_LEON3_SET_IRQ)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:leon3_set_irq " "Set CPU IRQ %d" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , intno);
        }
    }
}

static inline void trace_leon3_reset_irq(int intno)
{
    if (true) {
        if (trace_event_get_state(TRACE_LEON3_RESET_IRQ)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:leon3_reset_irq " "Reset CPU IRQ %d" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , intno);
        }
    }
}
#endif /* TRACE_HW_SPARC_GENERATED_TRACERS_H */