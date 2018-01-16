#include "arch-type.h"

#if defined(__APPLE__)
# if defined(__i386__)
# elif defined(__x86_64__)
#  include <sys/_types.h>
#  include <sys/_types/_sigset_t.h>
#  include <sys/_types/_sigaltstack.h>
# elif defined(__arm__)
# else
# endif
#endif

#if defined(__FreeBSD__) && defined(__i386__) && __FreeBSD__ < 5
#endif

#if defined(__OpenBSD__) && defined(__i386__)
#endif

#if defined(__linux__) && defined(__arm__)
#endif

#if defined(__linux__) && defined(__mips__)
#endif

#if (CO_ARCH_TYPE == CO_ARCH_POWER)
# include "power-ucontext.h"
#endif

#if (CO_ARCH_TYPE == CO_ARCH_X86)
# include "386-ucontext.h"
#endif

#if (CO_ARCH_TYPE == CO_ARCH_AMD64)
# include "amd64-ucontext.h"
#endif

#if (CO_ARCH_TYPE == CO_ARCH_ARM)
# include "arm-ucontext.h"
#endif

#if (CO_ARCH_TYPE == CO_ARCH_MIPS)
# include "mips-ucontext.h"
#endif
