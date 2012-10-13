#include <stdio.h>
#include <unistd.h>
#include <limits.h>
int main(void) {
long r;
#ifdef _SC_ARG_MAX
r = sysconf(_SC_ARG_MAX);
printf("The value of _SC_ARG_MAX is %ld\n", r);
#else
printf("The _SC_ARG_MAX is undefined.\n");
#endif
#ifdef _SC_CHILD_MAX
r = sysconf(_SC_CHILD_MAX);
printf("The value of _SC_CHILD_MAX is %ld\n", r);
#else
printf("The _SC_CHILD_MAX is undefined.\n");
#endif
#ifdef _SC_CLK_TCK
r = sysconf(_SC_CLK_TCK);
printf("The value of _SC_CLK_TCK is %ld\n", r);
#else
printf("The _SC_CLK_TCK is undefined.\n");
#endif
#ifdef _SC_NGROUPS_MAX4
r = sysconf(_SC_NGROUPS_MAX4);
printf("The value of _SC_NGROUPS_MAX4 is %ld\n", r);
#else
printf("The _SC_NGROUPS_MAX4 is undefined.\n");
#endif
#ifdef _SC_OPEN_MAX
r = sysconf(_SC_OPEN_MAX);
printf("The value of _SC_OPEN_MAX is %ld\n", r);
#else
printf("The _SC_OPEN_MAX is undefined.\n");
#endif
#ifdef _SC_JOB_CONTROL6
r = sysconf(_SC_JOB_CONTROL6);
printf("The value of _SC_JOB_CONTROL6 is %ld\n", r);
#else
printf("The _SC_JOB_CONTROL6 is undefined.\n");
#endif
#ifdef _SC_SAVED_IDS
r = sysconf(_SC_SAVED_IDS);
printf("The value of _SC_SAVED_IDS is %ld\n", r);
#else
printf("The _SC_SAVED_IDS is undefined.\n");
#endif
#ifdef _SC_VERSION
r = sysconf(_SC_VERSION);
printf("The value of _SC_VERSION is %ld\n", r);
#else
printf("The _SC_VERSION is undefined.\n");
#endif
#ifdef _SC_PASS_MAX
r = sysconf(_SC_PASS_MAX);
printf("The value of _SC_PASS_MAX is %ld\n", r);
#else
printf("The _SC_PASS_MAX is undefined.\n");
#endif
#ifdef _SC_LOGNAME_MAX
r = sysconf(_SC_LOGNAME_MAX);
printf("The value of _SC_LOGNAME_MAX is %ld\n", r);
#else
printf("The _SC_LOGNAME_MAX is undefined.\n");
#endif
#ifdef _SC_PAGESIZE
r = sysconf(_SC_PAGESIZE);
printf("The value of _SC_PAGESIZE is %ld\n", r);
#else
printf("The _SC_PAGESIZE is undefined.\n");
#endif
#ifdef _SC_XOPEN_VERSION
r = sysconf(_SC_XOPEN_VERSION);
printf("The value of _SC_XOPEN_VERSION is %ld\n", r);
#else
printf("The _SC_XOPEN_VERSION is undefined.\n");
#endif
#ifdef _SC_NPROCESSORS_CONF
r = sysconf(_SC_NPROCESSORS_CONF);
printf("The value of _SC_NPROCESSORS_CONF is %ld\n", r);
#else
printf("The _SC_NPROCESSORS_CONF is undefined.\n");
#endif
#ifdef _SC_NPROCESSORS_ONLN
r = sysconf(_SC_NPROCESSORS_ONLN);
printf("The value of _SC_NPROCESSORS_ONLN is %ld\n", r);
#else
printf("The _SC_NPROCESSORS_ONLN is undefined.\n");
#endif
#ifdef _SC_STREAM_MAX
r = sysconf(_SC_STREAM_MAX);
printf("The value of _SC_STREAM_MAX is %ld\n", r);
#else
printf("The _SC_STREAM_MAX is undefined.\n");
#endif
#ifdef _SC_TZNAME_MAX
r = sysconf(_SC_TZNAME_MAX);
printf("The value of _SC_TZNAME_MAX is %ld\n", r);
#else
printf("The _SC_TZNAME_MAX is undefined.\n");
#endif
#ifdef _SC_AIO_LISTIO_MAX
r = sysconf(_SC_AIO_LISTIO_MAX);
printf("The value of _SC_AIO_LISTIO_MAX is %ld\n", r);
#else
printf("The _SC_AIO_LISTIO_MAX is undefined.\n");
#endif
#ifdef _SC_AIO_MAX
r = sysconf(_SC_AIO_MAX);
printf("The value of _SC_AIO_MAX is %ld\n", r);
#else
printf("The _SC_AIO_MAX is undefined.\n");
#endif
#ifdef _SC_AIO_PRIO_DELTA_MAX
r = sysconf(_SC_AIO_PRIO_DELTA_MAX);
printf("The value of _SC_AIO_PRIO_DELTA_MAX is %ld\n", r);
#else
printf("The _SC_AIO_PRIO_DELTA_MAX is undefined.\n");
#endif
#ifdef _SC_ASYNCHRONOUS_IO
r = sysconf(_SC_ASYNCHRONOUS_IO);
printf("The value of _SC_ASYNCHRONOUS_IO is %ld\n", r);
#else
printf("The _SC_ASYNCHRONOUS_IO is undefined.\n");
#endif
#ifdef _SC_DELAYTIMER_MAX
r = sysconf(_SC_DELAYTIMER_MAX);
printf("The value of _SC_DELAYTIMER_MAX is %ld\n", r);
#else
printf("The _SC_DELAYTIMER_MAX is undefined.\n");
#endif
#ifdef _SC_FSYNC
r = sysconf(_SC_FSYNC);
printf("The value of _SC_FSYNC is %ld\n", r);
#else
printf("The _SC_FSYNC is undefined.\n");
#endif
#ifdef _SC_MAPPED_FILES
r = sysconf(_SC_MAPPED_FILES);
printf("The value of _SC_MAPPED_FILES is %ld\n", r);
#else
printf("The _SC_MAPPED_FILES is undefined.\n");
#endif
#ifdef _SC_MEMLOCK
r = sysconf(_SC_MEMLOCK);
printf("The value of _SC_MEMLOCK is %ld\n", r);
#else
printf("The _SC_MEMLOCK is undefined.\n");
#endif
#ifdef _SC_MEMLOCK_RANGE
r = sysconf(_SC_MEMLOCK_RANGE);
printf("The value of _SC_MEMLOCK_RANGE is %ld\n", r);
#else
printf("The _SC_MEMLOCK_RANGE is undefined.\n");
#endif
#ifdef _SC_MEMORY_PROTECTION
r = sysconf(_SC_MEMORY_PROTECTION);
printf("The value of _SC_MEMORY_PROTECTION is %ld\n", r);
#else
printf("The _SC_MEMORY_PROTECTION is undefined.\n");
#endif
#ifdef _SC_MESSAGE_PASSING
r = sysconf(_SC_MESSAGE_PASSING);
printf("The value of _SC_MESSAGE_PASSING is %ld\n", r);
#else
printf("The _SC_MESSAGE_PASSING is undefined.\n");
#endif
#ifdef _SC_MQ_OPEN_MAX
r = sysconf(_SC_MQ_OPEN_MAX);
printf("The value of _SC_MQ_OPEN_MAX is %ld\n", r);
#else
printf("The _SC_MQ_OPEN_MAX is undefined.\n");
#endif
#ifdef _SC_MQ_PRIO_MAX
r = sysconf(_SC_MQ_PRIO_MAX);
printf("The value of _SC_MQ_PRIO_MAX is %ld\n", r);
#else
printf("The _SC_MQ_PRIO_MAX is undefined.\n");
#endif
#ifdef _SC_PRIORITIZED_IO
r = sysconf(_SC_PRIORITIZED_IO);
printf("The value of _SC_PRIORITIZED_IO is %ld\n", r);
#else
printf("The _SC_PRIORITIZED_IO is undefined.\n");
#endif
#ifdef _SC_PRIORITY_SCHEDULING
r = sysconf(_SC_PRIORITY_SCHEDULING);
printf("The value of _SC_PRIORITY_SCHEDULING is %ld\n", r);
#else
printf("The _SC_PRIORITY_SCHEDULING is undefined.\n");
#endif
#ifdef _SC_REALTIME_SIGNALS
r = sysconf(_SC_REALTIME_SIGNALS);
printf("The value of _SC_REALTIME_SIGNALS is %ld\n", r);
#else
printf("The _SC_REALTIME_SIGNALS is undefined.\n");
#endif
#ifdef _SC_RTSIG_MAX
r = sysconf(_SC_RTSIG_MAX);
printf("The value of _SC_RTSIG_MAX is %ld\n", r);
#else
printf("The _SC_RTSIG_MAX is undefined.\n");
#endif
#ifdef _SC_SEMAPHORES
r = sysconf(_SC_SEMAPHORES);
printf("The value of _SC_SEMAPHORES is %ld\n", r);
#else
printf("The _SC_SEMAPHORES is undefined.\n");
#endif
#ifdef _SC_SEM_NSEMS_MAX
r = sysconf(_SC_SEM_NSEMS_MAX);
printf("The value of _SC_SEM_NSEMS_MAX is %ld\n", r);
#else
printf("The _SC_SEM_NSEMS_MAX is undefined.\n");
#endif
#ifdef _SC_SEM_VALUE_MAX
r = sysconf(_SC_SEM_VALUE_MAX);
printf("The value of _SC_SEM_VALUE_MAX is %ld\n", r);
#else
printf("The _SC_SEM_VALUE_MAX is undefined.\n");
#endif
#ifdef _SC_SHARED_MEMORY_OBJECTS
r = sysconf(_SC_SHARED_MEMORY_OBJECTS);
printf("The value of _SC_SHARED_MEMORY_OBJECTS is %ld\n", r);
#else
printf("The _SC_SHARED_MEMORY_OBJECTS is undefined.\n");
#endif
#ifdef _SC_SIGQUEUE_MAX
r = sysconf(_SC_SIGQUEUE_MAX);
printf("The value of _SC_SIGQUEUE_MAX is %ld\n", r);
#else
printf("The _SC_SIGQUEUE_MAX is undefined.\n");
#endif
#ifdef _SC_SIGRT_MIN
r = sysconf(_SC_SIGRT_MIN);
printf("The value of _SC_SIGRT_MIN is %ld\n", r);
#else
printf("The _SC_SIGRT_MIN is undefined.\n");
#endif
#ifdef _SC_SIGRT_MAX
r = sysconf(_SC_SIGRT_MAX);
printf("The value of _SC_SIGRT_MAX is %ld\n", r);
#else
printf("The _SC_SIGRT_MAX is undefined.\n");
#endif
#ifdef _SC_SYNCHRONIZED_IO
r = sysconf(_SC_SYNCHRONIZED_IO);
printf("The value of _SC_SYNCHRONIZED_IO is %ld\n", r);
#else
printf("The _SC_SYNCHRONIZED_IO is undefined.\n");
#endif
#ifdef _SC_TIMERS
r = sysconf(_SC_TIMERS);
printf("The value of _SC_TIMERS is %ld\n", r);
#else
printf("The _SC_TIMERS is undefined.\n");
#endif
#ifdef _SC_TIMER_MAX
r = sysconf(_SC_TIMER_MAX);
printf("The value of _SC_TIMER_MAX is %ld\n", r);
#else
printf("The _SC_TIMER_MAX is undefined.\n");
#endif
#ifdef _SC_2_C_BIND
r = sysconf(_SC_2_C_BIND);
printf("The value of _SC_2_C_BIND is %ld\n", r);
#else
printf("The _SC_2_C_BIND is undefined.\n");
#endif
#ifdef _SC_2_C_DEV
r = sysconf(_SC_2_C_DEV);
printf("The value of _SC_2_C_DEV is %ld\n", r);
#else
printf("The _SC_2_C_DEV is undefined.\n");
#endif
#ifdef _SC_2_C_VERSION
r = sysconf(_SC_2_C_VERSION);
printf("The value of _SC_2_C_VERSION is %ld\n", r);
#else
printf("The _SC_2_C_VERSION is undefined.\n");
#endif
#ifdef _SC_2_FORT_DEV
r = sysconf(_SC_2_FORT_DEV);
printf("The value of _SC_2_FORT_DEV is %ld\n", r);
#else
printf("The _SC_2_FORT_DEV is undefined.\n");
#endif
#ifdef _SC_2_FORT_RUN
r = sysconf(_SC_2_FORT_RUN);
printf("The value of _SC_2_FORT_RUN is %ld\n", r);
#else
printf("The _SC_2_FORT_RUN is undefined.\n");
#endif
#ifdef _SC_2_LOCALEDEF
r = sysconf(_SC_2_LOCALEDEF);
printf("The value of _SC_2_LOCALEDEF is %ld\n", r);
#else
printf("The _SC_2_LOCALEDEF is undefined.\n");
#endif
#ifdef _SC_2_SW_DEV
r = sysconf(_SC_2_SW_DEV);
printf("The value of _SC_2_SW_DEV is %ld\n", r);
#else
printf("The _SC_2_SW_DEV is undefined.\n");
#endif
#ifdef _SC_2_UPE
r = sysconf(_SC_2_UPE);
printf("The value of _SC_2_UPE is %ld\n", r);
#else
printf("The _SC_2_UPE is undefined.\n");
#endif
#ifdef _SC_2_VERSION
r = sysconf(_SC_2_VERSION);
printf("The value of _SC_2_VERSION is %ld\n", r);
#else
printf("The _SC_2_VERSION is undefined.\n");
#endif
#ifdef _SC_BC_BASE_MAX
r = sysconf(_SC_BC_BASE_MAX);
printf("The value of _SC_BC_BASE_MAX is %ld\n", r);
#else
printf("The _SC_BC_BASE_MAX is undefined.\n");
#endif
#ifdef _SC_BC_DIM_MAX
r = sysconf(_SC_BC_DIM_MAX);
printf("The value of _SC_BC_DIM_MAX is %ld\n", r);
#else
printf("The _SC_BC_DIM_MAX is undefined.\n");
#endif
#ifdef _SC_BC_SCALE_MAX
r = sysconf(_SC_BC_SCALE_MAX);
printf("The value of _SC_BC_SCALE_MAX is %ld\n", r);
#else
printf("The _SC_BC_SCALE_MAX is undefined.\n");
#endif
#ifdef _SC_BC_STRING_MAX
r = sysconf(_SC_BC_STRING_MAX);
printf("The value of _SC_BC_STRING_MAX is %ld\n", r);
#else
printf("The _SC_BC_STRING_MAX is undefined.\n");
#endif
#ifdef _SC_COLL_WEIGHTS_MAX
r = sysconf(_SC_COLL_WEIGHTS_MAX);
printf("The value of _SC_COLL_WEIGHTS_MAX is %ld\n", r);
#else
printf("The _SC_COLL_WEIGHTS_MAX is undefined.\n");
#endif
#ifdef _SC_EXPR_NEST_MAX
r = sysconf(_SC_EXPR_NEST_MAX);
printf("The value of _SC_EXPR_NEST_MAX is %ld\n", r);
#else
printf("The _SC_EXPR_NEST_MAX is undefined.\n");
#endif
#ifdef _SC_LINE_MAX
r = sysconf(_SC_LINE_MAX);
printf("The value of _SC_LINE_MAX is %ld\n", r);
#else
printf("The _SC_LINE_MAX is undefined.\n");
#endif
#ifdef _SC_RE_DUP_MAX
r = sysconf(_SC_RE_DUP_MAX);
printf("The value of _SC_RE_DUP_MAX is %ld\n", r);
#else
printf("The _SC_RE_DUP_MAX is undefined.\n");
#endif
#ifdef _SC_XOPEN_CRYPT
r = sysconf(_SC_XOPEN_CRYPT);
printf("The value of _SC_XOPEN_CRYPT is %ld\n", r);
#else
printf("The _SC_XOPEN_CRYPT is undefined.\n");
#endif
#ifdef _SC_XOPEN_ENH_I18N
r = sysconf(_SC_XOPEN_ENH_I18N);
printf("The value of _SC_XOPEN_ENH_I18N is %ld\n", r);
#else
printf("The _SC_XOPEN_ENH_I18N is undefined.\n");
#endif
#ifdef _SC_XOPEN_SHM
r = sysconf(_SC_XOPEN_SHM);
printf("The value of _SC_XOPEN_SHM is %ld\n", r);
#else
printf("The _SC_XOPEN_SHM is undefined.\n");
#endif
#ifdef _SC_2_CHAR_TERM
r = sysconf(_SC_2_CHAR_TERM);
printf("The value of _SC_2_CHAR_TERM is %ld\n", r);
#else
printf("The _SC_2_CHAR_TERM is undefined.\n");
#endif
#ifdef _SC_XOPEN_XCU_VERSION
r = sysconf(_SC_XOPEN_XCU_VERSION);
printf("The value of _SC_XOPEN_XCU_VERSION is %ld\n", r);
#else
printf("The _SC_XOPEN_XCU_VERSION is undefined.\n");
#endif
#ifdef _SC_ATEXIT_MAX
r = sysconf(_SC_ATEXIT_MAX);
printf("The value of _SC_ATEXIT_MAX is %ld\n", r);
#else
printf("The _SC_ATEXIT_MAX is undefined.\n");
#endif
#ifdef _SC_IOV_MAX
r = sysconf(_SC_IOV_MAX);
printf("The value of _SC_IOV_MAX is %ld\n", r);
#else
printf("The _SC_IOV_MAX is undefined.\n");
#endif
#ifdef _SC_XOPEN_UNIX
r = sysconf(_SC_XOPEN_UNIX);
printf("The value of _SC_XOPEN_UNIX is %ld\n", r);
#else
printf("The _SC_XOPEN_UNIX is undefined.\n");
#endif
#ifdef _SC_PAGE_SIZE
r = sysconf(_SC_PAGE_SIZE);
printf("The value of _SC_PAGE_SIZE is %ld\n", r);
#else
printf("The _SC_PAGE_SIZE is undefined.\n");
#endif
#ifdef _SC_PHYS_PAGES
r = sysconf(_SC_PHYS_PAGES);
printf("The value of _SC_PHYS_PAGES is %ld\n", r);
#else
printf("The _SC_PHYS_PAGES is undefined.\n");
#endif
#ifdef _SC_AVPHYS_PAGES
r = sysconf(_SC_AVPHYS_PAGES);
printf("The value of _SC_AVPHYS_PAGES is %ld\n", r);
#else
printf("The _SC_AVPHYS_PAGES is undefined.\n");
#endif
#ifdef _SC_COHER_BLKSZ
r = sysconf(_SC_COHER_BLKSZ);
printf("The value of _SC_COHER_BLKSZ is %ld\n", r);
#else
printf("The _SC_COHER_BLKSZ is undefined.\n");
#endif
#ifdef _SC_SPLIT_CACHE
r = sysconf(_SC_SPLIT_CACHE);
printf("The value of _SC_SPLIT_CACHE is %ld\n", r);
#else
printf("The _SC_SPLIT_CACHE is undefined.\n");
#endif
#ifdef _SC_ICACHE_SZ
r = sysconf(_SC_ICACHE_SZ);
printf("The value of _SC_ICACHE_SZ is %ld\n", r);
#else
printf("The _SC_ICACHE_SZ is undefined.\n");
#endif
#ifdef _SC_DCACHE_SZ
r = sysconf(_SC_DCACHE_SZ);
printf("The value of _SC_DCACHE_SZ is %ld\n", r);
#else
printf("The _SC_DCACHE_SZ is undefined.\n");
#endif
#ifdef _SC_ICACHE_LINESZ
r = sysconf(_SC_ICACHE_LINESZ);
printf("The value of _SC_ICACHE_LINESZ is %ld\n", r);
#else
printf("The _SC_ICACHE_LINESZ is undefined.\n");
#endif
#ifdef _SC_DCACHE_LINESZ
r = sysconf(_SC_DCACHE_LINESZ);
printf("The value of _SC_DCACHE_LINESZ is %ld\n", r);
#else
printf("The _SC_DCACHE_LINESZ is undefined.\n");
#endif
#ifdef _SC_ICACHE_BLKSZ
r = sysconf(_SC_ICACHE_BLKSZ);
printf("The value of _SC_ICACHE_BLKSZ is %ld\n", r);
#else
printf("The _SC_ICACHE_BLKSZ is undefined.\n");
#endif
#ifdef _SC_DCACHE_BLKSZ
r = sysconf(_SC_DCACHE_BLKSZ);
printf("The value of _SC_DCACHE_BLKSZ is %ld\n", r);
#else
printf("The _SC_DCACHE_BLKSZ is undefined.\n");
#endif
#ifdef _SC_DCACHE_TBLKSZ
r = sysconf(_SC_DCACHE_TBLKSZ);
printf("The value of _SC_DCACHE_TBLKSZ is %ld\n", r);
#else
printf("The _SC_DCACHE_TBLKSZ is undefined.\n");
#endif
#ifdef _SC_ICACHE_ASSOC
r = sysconf(_SC_ICACHE_ASSOC);
printf("The value of _SC_ICACHE_ASSOC is %ld\n", r);
#else
printf("The _SC_ICACHE_ASSOC is undefined.\n");
#endif
#ifdef _SC_DCACHE_ASSOC
r = sysconf(_SC_DCACHE_ASSOC);
printf("The value of _SC_DCACHE_ASSOC is %ld\n", r);
#else
printf("The _SC_DCACHE_ASSOC is undefined.\n");
#endif
#ifdef _SC_THREAD_DESTRUCTOR_ITERATIONS
r = sysconf(_SC_THREAD_DESTRUCTOR_ITERATIONS);
printf("The value of _SC_THREAD_DESTRUCTOR_ITERATIONS is %ld\n", r);
#else
printf("The _SC_THREAD_DESTRUCTOR_ITERATIONS is undefined.\n");
#endif
#ifdef _SC_GETGR_R_SIZE_MAX
r = sysconf(_SC_GETGR_R_SIZE_MAX);
printf("The value of _SC_GETGR_R_SIZE_MAX is %ld\n", r);
#else
printf("The _SC_GETGR_R_SIZE_MAX is undefined.\n");
#endif
#ifdef _SC_GETPW_R_SIZE_MAX
r = sysconf(_SC_GETPW_R_SIZE_MAX);
printf("The value of _SC_GETPW_R_SIZE_MAX is %ld\n", r);
#else
printf("The _SC_GETPW_R_SIZE_MAX is undefined.\n");
#endif
#ifdef _SC_LOGIN_NAME_MAX
r = sysconf(_SC_LOGIN_NAME_MAX);
printf("The value of _SC_LOGIN_NAME_MAX is %ld\n", r);
#else
printf("The _SC_LOGIN_NAME_MAX is undefined.\n");
#endif
#ifdef _SC_THREAD_KEYS_MAX
r = sysconf(_SC_THREAD_KEYS_MAX);
printf("The value of _SC_THREAD_KEYS_MAX is %ld\n", r);
#else
printf("The _SC_THREAD_KEYS_MAX is undefined.\n");
#endif
#ifdef _SC_THREAD_STACK_MIN
r = sysconf(_SC_THREAD_STACK_MIN);
printf("The value of _SC_THREAD_STACK_MIN is %ld\n", r);
#else
printf("The _SC_THREAD_STACK_MIN is undefined.\n");
#endif
#ifdef _SC_THREAD_THREADS_MAX
r = sysconf(_SC_THREAD_THREADS_MAX);
printf("The value of _SC_THREAD_THREADS_MAX is %ld\n", r);
#else
printf("The _SC_THREAD_THREADS_MAX is undefined.\n");
#endif
#ifdef _SC_TTY_NAME_MAX
r = sysconf(_SC_TTY_NAME_MAX);
printf("The value of _SC_TTY_NAME_MAX is %ld\n", r);
#else
printf("The _SC_TTY_NAME_MAX is undefined.\n");
#endif
#ifdef _SC_THREADS
r = sysconf(_SC_THREADS);
printf("The value of _SC_THREADS is %ld\n", r);
#else
printf("The _SC_THREADS is undefined.\n");
#endif
#ifdef _SC_THREAD_ATTR_STACKADDR
r = sysconf(_SC_THREAD_ATTR_STACKADDR);
printf("The value of _SC_THREAD_ATTR_STACKADDR is %ld\n", r);
#else
printf("The _SC_THREAD_ATTR_STACKADDR is undefined.\n");
#endif
#ifdef _SC_THREAD_ATTR_STACKSIZE
r = sysconf(_SC_THREAD_ATTR_STACKSIZE);
printf("The value of _SC_THREAD_ATTR_STACKSIZE is %ld\n", r);
#else
printf("The _SC_THREAD_ATTR_STACKSIZE is undefined.\n");
#endif
#ifdef _SC_THREAD_PRIORITY_SCHEDULING
r = sysconf(_SC_THREAD_PRIORITY_SCHEDULING);
printf("The value of _SC_THREAD_PRIORITY_SCHEDULING is %ld\n", r);
#else
printf("The _SC_THREAD_PRIORITY_SCHEDULING is undefined.\n");
#endif
#ifdef _SC_THREAD_PRIO_INHERIT
r = sysconf(_SC_THREAD_PRIO_INHERIT);
printf("The value of _SC_THREAD_PRIO_INHERIT is %ld\n", r);
#else
printf("The _SC_THREAD_PRIO_INHERIT is undefined.\n");
#endif
#ifdef _SC_THREAD_PRIO_PROTECT
r = sysconf(_SC_THREAD_PRIO_PROTECT);
printf("The value of _SC_THREAD_PRIO_PROTECT is %ld\n", r);
#else
printf("The _SC_THREAD_PRIO_PROTECT is undefined.\n");
#endif
#ifdef _SC_THREAD_PROCESS_SHARED
r = sysconf(_SC_THREAD_PROCESS_SHARED);
printf("The value of _SC_THREAD_PROCESS_SHARED is %ld\n", r);
#else
printf("The _SC_THREAD_PROCESS_SHARED is undefined.\n");
#endif
#ifdef _SC_THREAD_SAFE_FUNCTIONS
r = sysconf(_SC_THREAD_SAFE_FUNCTIONS);
printf("The value of _SC_THREAD_SAFE_FUNCTIONS is %ld\n", r);
#else
printf("The _SC_THREAD_SAFE_FUNCTIONS is undefined.\n");
#endif
#ifdef _SC_PPC_GRANULE_SZ
r = sysconf(_SC_PPC_GRANULE_SZ);
printf("The value of _SC_PPC_GRANULE_SZ is %ld\n", r);
#else
printf("The _SC_PPC_GRANULE_SZ is undefined.\n");
#endif
#ifdef _SC_PPC_TB_TICKSPSECH
r = sysconf(_SC_PPC_TB_TICKSPSECH);
printf("The value of _SC_PPC_TB_TICKSPSECH is %ld\n", r);
#else
printf("The _SC_PPC_TB_TICKSPSECH is undefined.\n");
#endif
#ifdef _SC_PPC_TB_TICKSPSECL
r = sysconf(_SC_PPC_TB_TICKSPSECL);
printf("The value of _SC_PPC_TB_TICKSPSECL is %ld\n", r);
#else
printf("The _SC_PPC_TB_TICKSPSECL is undefined.\n");
#endif
#ifdef _SC_ARG_MAX
r = sysconf(_SC_ARG_MAX);
printf("The value of _SC_ARG_MAX is %ld\n", r);
#else
printf("The _SC_ARG_MAX is undefined.\n");
#endif
#ifdef _SC_CHILD_MAX
r = sysconf(_SC_CHILD_MAX);
printf("The value of _SC_CHILD_MAX is %ld\n", r);
#else
printf("The _SC_CHILD_MAX is undefined.\n");
#endif
#ifdef _SC_CLK_TCK
r = sysconf(_SC_CLK_TCK);
printf("The value of _SC_CLK_TCK is %ld\n", r);
#else
printf("The _SC_CLK_TCK is undefined.\n");
#endif
#ifdef _SC_NGROUPS_MAX
r = sysconf(_SC_NGROUPS_MAX);
printf("The value of _SC_NGROUPS_MAX is %ld\n", r);
#else
printf("The _SC_NGROUPS_MAX is undefined.\n");
#endif
#ifdef _SC_OPEN_MAX
r = sysconf(_SC_OPEN_MAX);
printf("The value of _SC_OPEN_MAX is %ld\n", r);
#else
printf("The _SC_OPEN_MAX is undefined.\n");
#endif
#ifdef _SC_STREAM_MAX
r = sysconf(_SC_STREAM_MAX);
printf("The value of _SC_STREAM_MAX is %ld\n", r);
#else
printf("The _SC_STREAM_MAX is undefined.\n");
#endif
#ifdef _SC_TZNAME_MAX
r = sysconf(_SC_TZNAME_MAX);
printf("The value of _SC_TZNAME_MAX is %ld\n", r);
#else
printf("The _SC_TZNAME_MAX is undefined.\n");
#endif
#ifdef _SC_JOB_CONTROL
r = sysconf(_SC_JOB_CONTROL);
printf("The value of _SC_JOB_CONTROL is %ld\n", r);
#else
printf("The _SC_JOB_CONTROL is undefined.\n");
#endif
#ifdef _SC_SAVED_IDS
r = sysconf(_SC_SAVED_IDS);
printf("The value of _SC_SAVED_IDS is %ld\n", r);
#else
printf("The _SC_SAVED_IDS is undefined.\n");
#endif
#ifdef _SC_VERSION
r = sysconf(_SC_VERSION);
printf("The value of _SC_VERSION is %ld\n", r);
#else
printf("The _SC_VERSION is undefined.\n");
#endif
#ifdef _SC_PASS_MAX
r = sysconf(_SC_PASS_MAX);
printf("The value of _SC_PASS_MAX is %ld\n", r);
#else
printf("The _SC_PASS_MAX is undefined.\n");
#endif
#ifdef _SC_LOGNAME_MAX
r = sysconf(_SC_LOGNAME_MAX);
printf("The value of _SC_LOGNAME_MAX is %ld\n", r);
#else
printf("The _SC_LOGNAME_MAX is undefined.\n");
#endif
#ifdef _SC_PAGESIZE
r = sysconf(_SC_PAGESIZE);
printf("The value of _SC_PAGESIZE is %ld\n", r);
#else
printf("The _SC_PAGESIZE is undefined.\n");
#endif
#ifdef _SC_XOPEN_VERSION
r = sysconf(_SC_XOPEN_VERSION);
printf("The value of _SC_XOPEN_VERSION is %ld\n", r);
#else
printf("The _SC_XOPEN_VERSION is undefined.\n");
#endif
#ifdef _SC_STREAM_MAX
r = sysconf(_SC_STREAM_MAX);
printf("The value of _SC_STREAM_MAX is %ld\n", r);
#else
printf("The _SC_STREAM_MAX is undefined.\n");
#endif
#ifdef _SC_TZNAME_MAX
r = sysconf(_SC_TZNAME_MAX);
printf("The value of _SC_TZNAME_MAX is %ld\n", r);
#else
printf("The _SC_TZNAME_MAX is undefined.\n");
#endif
#ifdef _SC_BC_BASE_MAX
r = sysconf(_SC_BC_BASE_MAX);
printf("The value of _SC_BC_BASE_MAX is %ld\n", r);
#else
printf("The _SC_BC_BASE_MAX is undefined.\n");
#endif
#ifdef _SC_BC_DIM_MAX
r = sysconf(_SC_BC_DIM_MAX);
printf("The value of _SC_BC_DIM_MAX is %ld\n", r);
#else
printf("The _SC_BC_DIM_MAX is undefined.\n");
#endif
#ifdef _SC_BC_SCALE_MAX
r = sysconf(_SC_BC_SCALE_MAX);
printf("The value of _SC_BC_SCALE_MAX is %ld\n", r);
#else
printf("The _SC_BC_SCALE_MAX is undefined.\n");
#endif
#ifdef _SC_BC_STRING_MAX
r = sysconf(_SC_BC_STRING_MAX);
printf("The value of _SC_BC_STRING_MAX is %ld\n", r);
#else
printf("The _SC_BC_STRING_MAX is undefined.\n");
#endif
#ifdef _SC_COLL_WEIGHTS_MAX
r = sysconf(_SC_COLL_WEIGHTS_MAX);
printf("The value of _SC_COLL_WEIGHTS_MAX is %ld\n", r);
#else
printf("The _SC_COLL_WEIGHTS_MAX is undefined.\n");
#endif
#ifdef _SC_EQUIV_CLASS_MAX
r = sysconf(_SC_EQUIV_CLASS_MAX);
printf("The value of _SC_EQUIV_CLASS_MAX is %ld\n", r);
#else
printf("The _SC_EQUIV_CLASS_MAX is undefined.\n");
#endif
#ifdef _SC_EXPR_NEST_MAX
r = sysconf(_SC_EXPR_NEST_MAX);
printf("The value of _SC_EXPR_NEST_MAX is %ld\n", r);
#else
printf("The _SC_EXPR_NEST_MAX is undefined.\n");
#endif
#ifdef _SC_LINE_MAX
r = sysconf(_SC_LINE_MAX);
printf("The value of _SC_LINE_MAX is %ld\n", r);
#else
printf("The _SC_LINE_MAX is undefined.\n");
#endif
#ifdef _SC_RE_DUP_MAX
r = sysconf(_SC_RE_DUP_MAX);
printf("The value of _SC_RE_DUP_MAX is %ld\n", r);
#else
printf("The _SC_RE_DUP_MAX is undefined.\n");
#endif
#ifdef _SC_2_VERSION
r = sysconf(_SC_2_VERSION);
printf("The value of _SC_2_VERSION is %ld\n", r);
#else
printf("The _SC_2_VERSION is undefined.\n");
#endif
#ifdef _SC_2_C_BIND
r = sysconf(_SC_2_C_BIND);
printf("The value of _SC_2_C_BIND is %ld\n", r);
#else
printf("The _SC_2_C_BIND is undefined.\n");
#endif
#ifdef _SC_2_C_DEV
r = sysconf(_SC_2_C_DEV);
printf("The value of _SC_2_C_DEV is %ld\n", r);
#else
printf("The _SC_2_C_DEV is undefined.\n");
#endif
#ifdef _SC_2_FORT_DEV
r = sysconf(_SC_2_FORT_DEV);
printf("The value of _SC_2_FORT_DEV is %ld\n", r);
#else
printf("The _SC_2_FORT_DEV is undefined.\n");
#endif
#ifdef _SC_2_FORT_RUN
r = sysconf(_SC_2_FORT_RUN);
printf("The value of _SC_2_FORT_RUN is %ld\n", r);
#else
printf("The _SC_2_FORT_RUN is undefined.\n");
#endif
#ifdef _SC_2_SW_DEV
r = sysconf(_SC_2_SW_DEV);
printf("The value of _SC_2_SW_DEV is %ld\n", r);
#else
printf("The _SC_2_SW_DEV is undefined.\n");
#endif
#ifdef _SC_2_LOCALEDEF
r = sysconf(_SC_2_LOCALEDEF);
printf("The value of _SC_2_LOCALEDEF is %ld\n", r);
#else
printf("The _SC_2_LOCALEDEF is undefined.\n");
#endif
#ifdef _SC_AIO_LISTIO_MAX
r = sysconf(_SC_AIO_LISTIO_MAX);
printf("The value of _SC_AIO_LISTIO_MAX is %ld\n", r);
#else
printf("The _SC_AIO_LISTIO_MAX is undefined.\n");
#endif
#ifdef _SC_AIO_MAX
r = sysconf(_SC_AIO_MAX);
printf("The value of _SC_AIO_MAX is %ld\n", r);
#else
printf("The _SC_AIO_MAX is undefined.\n");
#endif
#ifdef _SC_AIO_PRIO_DELTA_MAX
r = sysconf(_SC_AIO_PRIO_DELTA_MAX);
printf("The value of _SC_AIO_PRIO_DELTA_MAX is %ld\n", r);
#else
printf("The _SC_AIO_PRIO_DELTA_MAX is undefined.\n");
#endif
#ifdef _SC_DELAYTIMER_MAX
r = sysconf(_SC_DELAYTIMER_MAX);
printf("The value of _SC_DELAYTIMER_MAX is %ld\n", r);
#else
printf("The _SC_DELAYTIMER_MAX is undefined.\n");
#endif
#ifdef _SC_MQ_OPEN_MAX
r = sysconf(_SC_MQ_OPEN_MAX);
printf("The value of _SC_MQ_OPEN_MAX is %ld\n", r);
#else
printf("The _SC_MQ_OPEN_MAX is undefined.\n");
#endif
#ifdef _SC_MQ_PRIO_MAX
r = sysconf(_SC_MQ_PRIO_MAX);
printf("The value of _SC_MQ_PRIO_MAX is %ld\n", r);
#else
printf("The _SC_MQ_PRIO_MAX is undefined.\n");
#endif
#ifdef _SC_RTSIG_MAX
r = sysconf(_SC_RTSIG_MAX);
printf("The value of _SC_RTSIG_MAX is %ld\n", r);
#else
printf("The _SC_RTSIG_MAX is undefined.\n");
#endif
#ifdef _SC_SEM_NSEMS_MAX
r = sysconf(_SC_SEM_NSEMS_MAX);
printf("The value of _SC_SEM_NSEMS_MAX is %ld\n", r);
#else
printf("The _SC_SEM_NSEMS_MAX is undefined.\n");
#endif
#ifdef _SC_SEM_VALUE_MAX
r = sysconf(_SC_SEM_VALUE_MAX);
printf("The value of _SC_SEM_VALUE_MAX is %ld\n", r);
#else
printf("The _SC_SEM_VALUE_MAX is undefined.\n");
#endif
#ifdef _SC_SIGQUEUE_MAX
r = sysconf(_SC_SIGQUEUE_MAX);
printf("The value of _SC_SIGQUEUE_MAX is %ld\n", r);
#else
printf("The _SC_SIGQUEUE_MAX is undefined.\n");
#endif
#ifdef _SC_TIMER_MAX
r = sysconf(_SC_TIMER_MAX);
printf("The value of _SC_TIMER_MAX is %ld\n", r);
#else
printf("The _SC_TIMER_MAX is undefined.\n");
#endif
#ifdef _SC_ASYNCHRONOUS_IO
r = sysconf(_SC_ASYNCHRONOUS_IO);
printf("The value of _SC_ASYNCHRONOUS_IO is %ld\n", r);
#else
printf("The _SC_ASYNCHRONOUS_IO is undefined.\n");
#endif
#ifdef _SC_FSYNC
r = sysconf(_SC_FSYNC);
printf("The value of _SC_FSYNC is %ld\n", r);
#else
printf("The _SC_FSYNC is undefined.\n");
#endif
#ifdef _SC_MAPPED_FILES
r = sysconf(_SC_MAPPED_FILES);
printf("The value of _SC_MAPPED_FILES is %ld\n", r);
#else
printf("The _SC_MAPPED_FILES is undefined.\n");
#endif
#ifdef _SC_MEMLOCK
r = sysconf(_SC_MEMLOCK);
printf("The value of _SC_MEMLOCK is %ld\n", r);
#else
printf("The _SC_MEMLOCK is undefined.\n");
#endif
#ifdef _SC_MEMLOCK_RANGE
r = sysconf(_SC_MEMLOCK_RANGE);
printf("The value of _SC_MEMLOCK_RANGE is %ld\n", r);
#else
printf("The _SC_MEMLOCK_RANGE is undefined.\n");
#endif
#ifdef _SC_MEMORY_PROTECTION
r = sysconf(_SC_MEMORY_PROTECTION);
printf("The value of _SC_MEMORY_PROTECTION is %ld\n", r);
#else
printf("The _SC_MEMORY_PROTECTION is undefined.\n");
#endif
#ifdef _SC_MESSAGE_PASSING
r = sysconf(_SC_MESSAGE_PASSING);
printf("The value of _SC_MESSAGE_PASSING is %ld\n", r);
#else
printf("The _SC_MESSAGE_PASSING is undefined.\n");
#endif
#ifdef _SC_PRIORITIZED_IO
r = sysconf(_SC_PRIORITIZED_IO);
printf("The value of _SC_PRIORITIZED_IO is %ld\n", r);
#else
printf("The _SC_PRIORITIZED_IO is undefined.\n");
#endif
#ifdef _SC_PRIORITY_SCHEDULING
r = sysconf(_SC_PRIORITY_SCHEDULING);
printf("The value of _SC_PRIORITY_SCHEDULING is %ld\n", r);
#else
printf("The _SC_PRIORITY_SCHEDULING is undefined.\n");
#endif
#ifdef _SC_REALTIME_SIGNALS
r = sysconf(_SC_REALTIME_SIGNALS);
printf("The value of _SC_REALTIME_SIGNALS is %ld\n", r);
#else
printf("The _SC_REALTIME_SIGNALS is undefined.\n");
#endif
#ifdef _SC_SEMAPHORES
r = sysconf(_SC_SEMAPHORES);
printf("The value of _SC_SEMAPHORES is %ld\n", r);
#else
printf("The _SC_SEMAPHORES is undefined.\n");
#endif
#ifdef _SC_SHARED_MEMORY_OBJECTS
r = sysconf(_SC_SHARED_MEMORY_OBJECTS);
printf("The value of _SC_SHARED_MEMORY_OBJECTS is %ld\n", r);
#else
printf("The _SC_SHARED_MEMORY_OBJECTS is undefined.\n");
#endif
#ifdef _SC_SYNCHRONIZED_IO
r = sysconf(_SC_SYNCHRONIZED_IO);
printf("The value of _SC_SYNCHRONIZED_IO is %ld\n", r);
#else
printf("The _SC_SYNCHRONIZED_IO is undefined.\n");
#endif
#ifdef _SC_TIMERS
r = sysconf(_SC_TIMERS);
printf("The value of _SC_TIMERS is %ld\n", r);
#else
printf("The _SC_TIMERS is undefined.\n");
#endif
return 0;
}
