/* Generated by ./xlat/gen.sh from ./xlat/ioprio_class.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat ioprio_class in mpers mode

#else

static
const struct xlat ioprio_class[] = {
 XLAT(IOPRIO_CLASS_NONE),
 XLAT(IOPRIO_CLASS_RT),
 XLAT(IOPRIO_CLASS_BE),
 XLAT(IOPRIO_CLASS_IDLE),
 XLAT_END
};

#endif /* !IN_MPERS */
