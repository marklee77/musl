#include <stdarg.h>
#include <string.h>

#include "syscall.h"
#include "libc.h"

typedef long syscall_arg_t;

/* FIXME: included from asm/syscalls.h but current header
   is not appropriately exported so.. */
/* #include <asm/syscalls.h> */
long lkl_syscall(long no, long *params);

//int rumpns_printk(const char *fmt, ...);

#define __SYSCALL_LL_E(x) (x)
#define __SYSCALL_LL_O(x) (x)

static __inline long __syscall0(long n)
{
	long params[6];

    //rumpns_printk("musl __syscall0 %d\n", n);
	return lkl_syscall(n, params);
}

static __inline long __syscall1(long n, long a1)
{
	long params[6];

	params[0] = a1;
    //rumpns_printk("musl _syscall1: %d\n", n);
	return lkl_syscall(n, params);
}

static __inline long __syscall2(long n, long a1, long a2)
{
	long params[6];

	params[0] = a1;
	params[1] = a2;
    //rumpns_printk("musl _syscall2: %d\n", n);
	return lkl_syscall(n, params);
}

static __inline long __syscall3(long n, long a1, long a2, long a3)
{
	long params[6];

	params[0] = a1;
	params[1] = a2;
	params[2] = a3;
    //rumpns_printk("musl _syscall3: %d\n", n);
	return lkl_syscall(n, params);
}

static __inline long __syscall4(long n, long a1, long a2, long a3, long a4)
{
	long params[6];

	params[0] = a1;
	params[1] = a2;
	params[2] = a3;
	params[3] = a4;
    //rumpns_printk("musl _syscall4: %d\n", n);
	return lkl_syscall(n, params);
}

static __inline long __syscall5(long n, long a1, long a2, long a3, long a4,
				long a5)
{
	long params[6];

	params[0] = a1;
	params[1] = a2;
	params[2] = a3;
	params[3] = a4;
	params[4] = a5;
    //rumpns_printk("musl _syscall5: %d\n", n);
	return lkl_syscall(n, params);
}

static __inline long __syscall6(long n, long a1, long a2, long a3, long a4,
				long a5, long a6)
{
	long params[6];

	params[0] = a1;
	params[1] = a2;
	params[2] = a3;
	params[3] = a4;
	params[4] = a5;
	params[5] = a6;
    //rumpns_printk("musl _syscall6: %d\n", n);
	return lkl_syscall(n, params);
}
