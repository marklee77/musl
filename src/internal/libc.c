#include "libc.h"

struct __libc __libc;

size_t __hwcap;
size_t __sysinfo;
#ifndef CONFIG_LKL
char *__progname=0;
weak_alias(__progname, program_invocation_short_name);
#endif /* CONFIG_LKL */

char *__progname_full=0;
weak_alias(__progname_full, program_invocation_name);
