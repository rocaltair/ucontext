#define CO_ARCH_X86 1
#define CO_ARCH_AMD64 2
#define CO_ARCH_ARM 3
#define CO_ARCH_ARM64 4
#define CO_ARCH_POWER 5
#define CO_ARCH_MIPS 6

#if defined(__APPLE__)
# if defined(__i386__)
#  define CO_ARCH_TYPE CO_ARCH_X86
# elif defined(__x86_64__)
#  define CO_ARCH_TYPE CO_ARCH_AMD64
# elif defined(__arm__)
#  define CO_ARCH_TYPE CO_ARCH_ARM
# elif defined(__arm64__)
#  define CO_ARCH_TYPE CO_ARCH_ARM64
# else
#  define CO_ARCH_TYPE CO_ARCH_POWER
# endif
#endif

#if defined(__FreeBSD__) && defined(__i386__) && __FreeBSD__ < 5
# define CO_ARCH_TYPE CO_ARCH_X86
#endif

#if defined(__OpenBSD__) && defined(__i386__)
# define CO_ARCH_TYPE CO_ARCH_X86
#endif

#if defined(__linux__)
# if defined(__arm__)
#  define CO_ARCH_TYPE CO_ARCH_ARM
# endif
#endif

#if defined(__linux__) && defined(__mips__)
# define CO_ARCH_TYPE CO_ARCH_MIPS
#endif

#if !defined(CO_ARCH_TYPE)
# define CO_ARCH_TYPE 0
#endif

