/* Generated by ./xlat/gen.sh from ./xlat/ptrace_events.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat ptrace_events in mpers mode

#else

static
const struct xlat ptrace_events[] = {
#if defined(PTRACE_EVENT_FORK) || (defined(HAVE_DECL_PTRACE_EVENT_FORK) && HAVE_DECL_PTRACE_EVENT_FORK)
  XLAT(PTRACE_EVENT_FORK),
#endif
#if defined(PTRACE_EVENT_VFORK) || (defined(HAVE_DECL_PTRACE_EVENT_VFORK) && HAVE_DECL_PTRACE_EVENT_VFORK)
  XLAT(PTRACE_EVENT_VFORK),
#endif
#if defined(PTRACE_EVENT_CLONE) || (defined(HAVE_DECL_PTRACE_EVENT_CLONE) && HAVE_DECL_PTRACE_EVENT_CLONE)
  XLAT(PTRACE_EVENT_CLONE),
#endif
#if defined(PTRACE_EVENT_EXEC) || (defined(HAVE_DECL_PTRACE_EVENT_EXEC) && HAVE_DECL_PTRACE_EVENT_EXEC)
  XLAT(PTRACE_EVENT_EXEC),
#endif
#if defined(PTRACE_EVENT_VFORK_DONE) || (defined(HAVE_DECL_PTRACE_EVENT_VFORK_DONE) && HAVE_DECL_PTRACE_EVENT_VFORK_DONE)
  XLAT(PTRACE_EVENT_VFORK_DONE),
#endif
#if defined(PTRACE_EVENT_EXIT) || (defined(HAVE_DECL_PTRACE_EVENT_EXIT) && HAVE_DECL_PTRACE_EVENT_EXIT)
  XLAT(PTRACE_EVENT_EXIT),
#endif
#if defined(PTRACE_EVENT_SECCOMP) || (defined(HAVE_DECL_PTRACE_EVENT_SECCOMP) && HAVE_DECL_PTRACE_EVENT_SECCOMP)
  XLAT(PTRACE_EVENT_SECCOMP),
#endif
#if defined(PTRACE_EVENT_STOP) || (defined(HAVE_DECL_PTRACE_EVENT_STOP) && HAVE_DECL_PTRACE_EVENT_STOP)
  XLAT(PTRACE_EVENT_STOP),
#endif
/* tile */
#if defined(PTRACE_EVENT_MIGRATE) || (defined(HAVE_DECL_PTRACE_EVENT_MIGRATE) && HAVE_DECL_PTRACE_EVENT_MIGRATE)
  XLAT(PTRACE_EVENT_MIGRATE),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
