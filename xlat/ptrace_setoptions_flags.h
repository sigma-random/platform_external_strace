/* Generated by ./xlat/gen.sh from ./xlat/ptrace_setoptions_flags.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat ptrace_setoptions_flags in mpers mode

#else

static
const struct xlat ptrace_setoptions_flags[] = {
#if defined(PTRACE_O_TRACESYSGOOD) || (defined(HAVE_DECL_PTRACE_O_TRACESYSGOOD) && HAVE_DECL_PTRACE_O_TRACESYSGOOD)
  XLAT(PTRACE_O_TRACESYSGOOD),
#endif
#if defined(PTRACE_O_TRACEFORK) || (defined(HAVE_DECL_PTRACE_O_TRACEFORK) && HAVE_DECL_PTRACE_O_TRACEFORK)
  XLAT(PTRACE_O_TRACEFORK),
#endif
#if defined(PTRACE_O_TRACEVFORK) || (defined(HAVE_DECL_PTRACE_O_TRACEVFORK) && HAVE_DECL_PTRACE_O_TRACEVFORK)
  XLAT(PTRACE_O_TRACEVFORK),
#endif
#if defined(PTRACE_O_TRACECLONE) || (defined(HAVE_DECL_PTRACE_O_TRACECLONE) && HAVE_DECL_PTRACE_O_TRACECLONE)
  XLAT(PTRACE_O_TRACECLONE),
#endif
#if defined(PTRACE_O_TRACEEXEC) || (defined(HAVE_DECL_PTRACE_O_TRACEEXEC) && HAVE_DECL_PTRACE_O_TRACEEXEC)
  XLAT(PTRACE_O_TRACEEXEC),
#endif
#if defined(PTRACE_O_TRACEVFORKDONE) || (defined(HAVE_DECL_PTRACE_O_TRACEVFORKDONE) && HAVE_DECL_PTRACE_O_TRACEVFORKDONE)
  XLAT(PTRACE_O_TRACEVFORKDONE),
#endif
#if defined(PTRACE_O_TRACEEXIT) || (defined(HAVE_DECL_PTRACE_O_TRACEEXIT) && HAVE_DECL_PTRACE_O_TRACEEXIT)
  XLAT(PTRACE_O_TRACEEXIT),
#endif
#if defined(PTRACE_O_TRACESECCOMP) || (defined(HAVE_DECL_PTRACE_O_TRACESECCOMP) && HAVE_DECL_PTRACE_O_TRACESECCOMP)
  XLAT(PTRACE_O_TRACESECCOMP),
#endif
#if defined(PTRACE_O_EXITKILL) || (defined(HAVE_DECL_PTRACE_O_EXITKILL) && HAVE_DECL_PTRACE_O_EXITKILL)
  XLAT(PTRACE_O_EXITKILL),
#endif
#if defined(PTRACE_O_SUSPEND_SECCOMP) || (defined(HAVE_DECL_PTRACE_O_SUSPEND_SECCOMP) && HAVE_DECL_PTRACE_O_SUSPEND_SECCOMP)
  XLAT(PTRACE_O_SUSPEND_SECCOMP),
#endif
/* tile */
#if defined(PTRACE_O_TRACEMIGRATE) || (defined(HAVE_DECL_PTRACE_O_TRACEMIGRATE) && HAVE_DECL_PTRACE_O_TRACEMIGRATE)
  XLAT(PTRACE_O_TRACEMIGRATE),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
