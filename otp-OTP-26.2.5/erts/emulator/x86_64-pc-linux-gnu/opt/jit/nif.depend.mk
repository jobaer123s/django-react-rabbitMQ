$(OBJDIR)/erl_tracer_nif.o: nifs/common/erl_tracer_nif.c beam/erl_nif.h \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_nif_api_funcs.h beam/sys.h sys/unix/erl_unix_sys.h \
 ../include/internal/erl_errno.h ../include/internal/erl_misc_utils.h \
 ../include/internal/erl_errno.h beam/erl_lock_check.h beam/sys.h \
 beam/erl_threads.h beam/erl_lock_flags.h beam/erl_term.h \
 sys/common/erl_mmap.h ../include/internal/erl_printf.h \
 ../include/internal/ethread.h ../include/internal/ethread_inline.h \
 ../include/internal/x86_64/ethread.h \
 ../include/internal/x86_64/../i386/ethread.h \
 ../include/internal/x86_64/../i386/ethr_membar.h \
 ../include/internal/x86_64/../i386/atomic.h \
 ../include/internal/x86_64/../i386/ethr_dw_atomic.h \
 ../include/internal/x86_64/../i386/spinlock.h \
 ../include/internal/x86_64/../i386/rwlock.h \
 ../include/internal/gcc/ethread.h \
 ../include/internal/libatomic_ops/ethread.h \
 ../include/internal/ethr_atomics.h \
 ../include/internal/ethr_optimized_fallbacks.h \
 ../include/internal/pthread/ethr_event.h \
 ../include/internal/ethr_mutex.h beam/erl_lock_count.h \
 beam/erl_dyn_lock_check.h beam/erl_msacc.h
$(OBJDIR)/prim_buffer_nif.o: nifs/common/prim_buffer_nif.c beam/erl_nif.h \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_nif_api_funcs.h beam/sys.h sys/unix/erl_unix_sys.h \
 ../include/internal/erl_errno.h ../include/internal/erl_misc_utils.h \
 ../include/internal/erl_errno.h beam/erl_lock_check.h beam/sys.h \
 beam/erl_threads.h beam/erl_lock_flags.h beam/erl_term.h \
 sys/common/erl_mmap.h ../include/internal/erl_printf.h \
 ../include/internal/ethread.h ../include/internal/ethread_inline.h \
 ../include/internal/x86_64/ethread.h \
 ../include/internal/x86_64/../i386/ethread.h \
 ../include/internal/x86_64/../i386/ethr_membar.h \
 ../include/internal/x86_64/../i386/atomic.h \
 ../include/internal/x86_64/../i386/ethr_dw_atomic.h \
 ../include/internal/x86_64/../i386/spinlock.h \
 ../include/internal/x86_64/../i386/rwlock.h \
 ../include/internal/gcc/ethread.h \
 ../include/internal/libatomic_ops/ethread.h \
 ../include/internal/ethr_atomics.h \
 ../include/internal/ethr_optimized_fallbacks.h \
 ../include/internal/pthread/ethr_event.h \
 ../include/internal/ethr_mutex.h beam/erl_lock_count.h \
 beam/erl_dyn_lock_check.h beam/erl_msacc.h
$(OBJDIR)/prim_file_nif.o: nifs/common/prim_file_nif.c beam/erl_nif.h \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_nif_api_funcs.h beam/sys.h sys/unix/erl_unix_sys.h \
 ../include/internal/erl_errno.h ../include/internal/erl_misc_utils.h \
 ../include/internal/erl_errno.h beam/erl_lock_check.h beam/sys.h \
 beam/erl_threads.h beam/erl_lock_flags.h beam/erl_term.h \
 sys/common/erl_mmap.h ../include/internal/erl_printf.h \
 ../include/internal/ethread.h ../include/internal/ethread_inline.h \
 ../include/internal/x86_64/ethread.h \
 ../include/internal/x86_64/../i386/ethread.h \
 ../include/internal/x86_64/../i386/ethr_membar.h \
 ../include/internal/x86_64/../i386/atomic.h \
 ../include/internal/x86_64/../i386/ethr_dw_atomic.h \
 ../include/internal/x86_64/../i386/spinlock.h \
 ../include/internal/x86_64/../i386/rwlock.h \
 ../include/internal/gcc/ethread.h \
 ../include/internal/libatomic_ops/ethread.h \
 ../include/internal/ethr_atomics.h \
 ../include/internal/ethr_optimized_fallbacks.h \
 ../include/internal/pthread/ethr_event.h \
 ../include/internal/ethr_mutex.h beam/erl_lock_count.h \
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/erl_driver.h \
 nifs/common/prim_file_nif.h nifs/common/prim_file_nif_dyncall.h
$(OBJDIR)/prim_net_nif.o: nifs/common/prim_net_nif.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/sys.h beam/erl_threads.h \
 beam/erl_lock_flags.h beam/erl_term.h sys/common/erl_mmap.h \
 ../include/internal/erl_printf.h ../include/internal/ethread.h \
 ../include/internal/ethread_inline.h \
 ../include/internal/x86_64/ethread.h \
 ../include/internal/x86_64/../i386/ethread.h \
 ../include/internal/x86_64/../i386/ethr_membar.h \
 ../include/internal/x86_64/../i386/atomic.h \
 ../include/internal/x86_64/../i386/ethr_dw_atomic.h \
 ../include/internal/x86_64/../i386/spinlock.h \
 ../include/internal/x86_64/../i386/rwlock.h \
 ../include/internal/gcc/ethread.h \
 ../include/internal/libatomic_ops/ethread.h \
 ../include/internal/ethr_atomics.h \
 ../include/internal/ethr_optimized_fallbacks.h \
 ../include/internal/pthread/ethr_event.h \
 ../include/internal/ethr_mutex.h beam/erl_lock_count.h \
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/erl_nif.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_nif_api_funcs.h nifs/common/socket_dbg.h \
 nifs/common/socket_int.h nifs/common/socket_tarray.h \
 nifs/common/socket_util.h
$(OBJDIR)/prim_socket_nif.o: nifs/common/prim_socket_nif.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/sys.h beam/erl_threads.h \
 beam/erl_lock_flags.h beam/erl_term.h sys/common/erl_mmap.h \
 ../include/internal/erl_printf.h ../include/internal/ethread.h \
 ../include/internal/ethread_inline.h \
 ../include/internal/x86_64/ethread.h \
 ../include/internal/x86_64/../i386/ethread.h \
 ../include/internal/x86_64/../i386/ethr_membar.h \
 ../include/internal/x86_64/../i386/atomic.h \
 ../include/internal/x86_64/../i386/ethr_dw_atomic.h \
 ../include/internal/x86_64/../i386/spinlock.h \
 ../include/internal/x86_64/../i386/rwlock.h \
 ../include/internal/gcc/ethread.h \
 ../include/internal/libatomic_ops/ethread.h \
 ../include/internal/ethr_atomics.h \
 ../include/internal/ethr_optimized_fallbacks.h \
 ../include/internal/pthread/ethr_event.h \
 ../include/internal/ethr_mutex.h beam/erl_lock_count.h \
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/erl_nif.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_nif_api_funcs.h nifs/common/socket_dbg.h \
 nifs/common/socket_int.h nifs/common/socket_tarray.h \
 nifs/common/socket_util.h nifs/common/prim_socket_int.h \
 nifs/common/socket_io.h nifs/common/socket_asyncio.h \
 nifs/common/socket_syncio.h nifs/common/prim_file_nif_dyncall.h
$(OBJDIR)/prim_tty_nif.o: nifs/common/prim_tty_nif.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/sys.h beam/erl_threads.h \
 beam/erl_lock_flags.h beam/erl_term.h sys/common/erl_mmap.h \
 ../include/internal/erl_printf.h ../include/internal/ethread.h \
 ../include/internal/ethread_inline.h \
 ../include/internal/x86_64/ethread.h \
 ../include/internal/x86_64/../i386/ethread.h \
 ../include/internal/x86_64/../i386/ethr_membar.h \
 ../include/internal/x86_64/../i386/atomic.h \
 ../include/internal/x86_64/../i386/ethr_dw_atomic.h \
 ../include/internal/x86_64/../i386/spinlock.h \
 ../include/internal/x86_64/../i386/rwlock.h \
 ../include/internal/gcc/ethread.h \
 ../include/internal/libatomic_ops/ethread.h \
 ../include/internal/ethr_atomics.h \
 ../include/internal/ethr_optimized_fallbacks.h \
 ../include/internal/pthread/ethr_event.h \
 ../include/internal/ethr_mutex.h beam/erl_lock_count.h \
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/erl_nif.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_nif_api_funcs.h beam/erl_driver.h \
 $(ERL_TOP)/../ncurses-6.5/build/include/ncursesw/termcap.h \
 $(ERL_TOP)/../ncurses-6.5/build/include/ncursesw/ncurses_dll.h
$(OBJDIR)/socket_dbg.o: nifs/common/socket_dbg.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/erl_nif.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_nif_api_funcs.h nifs/common/socket_util.h \
 nifs/common/socket_int.h nifs/common/socket_dbg.h
$(OBJDIR)/socket_tarray.o: nifs/common/socket_tarray.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/erl_nif.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_nif_api_funcs.h nifs/common/socket_int.h beam/sys.h \
 sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/sys.h beam/erl_threads.h \
 beam/erl_lock_flags.h beam/erl_term.h sys/common/erl_mmap.h \
 ../include/internal/erl_printf.h ../include/internal/ethread.h \
 ../include/internal/ethread_inline.h \
 ../include/internal/x86_64/ethread.h \
 ../include/internal/x86_64/../i386/ethread.h \
 ../include/internal/x86_64/../i386/ethr_membar.h \
 ../include/internal/x86_64/../i386/atomic.h \
 ../include/internal/x86_64/../i386/ethr_dw_atomic.h \
 ../include/internal/x86_64/../i386/spinlock.h \
 ../include/internal/x86_64/../i386/rwlock.h \
 ../include/internal/gcc/ethread.h \
 ../include/internal/libatomic_ops/ethread.h \
 ../include/internal/ethr_atomics.h \
 ../include/internal/ethr_optimized_fallbacks.h \
 ../include/internal/pthread/ethr_event.h \
 ../include/internal/ethr_mutex.h beam/erl_lock_count.h \
 beam/erl_dyn_lock_check.h beam/erl_msacc.h nifs/common/socket_util.h \
 nifs/common/socket_tarray.h
$(OBJDIR)/socket_util.o: nifs/common/socket_util.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 nifs/common/socket_int.h beam/erl_nif.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_nif_api_funcs.h beam/sys.h sys/unix/erl_unix_sys.h \
 ../include/internal/erl_errno.h ../include/internal/erl_misc_utils.h \
 ../include/internal/erl_errno.h beam/erl_lock_check.h beam/sys.h \
 beam/erl_threads.h beam/erl_lock_flags.h beam/erl_term.h \
 sys/common/erl_mmap.h ../include/internal/erl_printf.h \
 ../include/internal/ethread.h ../include/internal/ethread_inline.h \
 ../include/internal/x86_64/ethread.h \
 ../include/internal/x86_64/../i386/ethread.h \
 ../include/internal/x86_64/../i386/ethr_membar.h \
 ../include/internal/x86_64/../i386/atomic.h \
 ../include/internal/x86_64/../i386/ethr_dw_atomic.h \
 ../include/internal/x86_64/../i386/spinlock.h \
 ../include/internal/x86_64/../i386/rwlock.h \
 ../include/internal/gcc/ethread.h \
 ../include/internal/libatomic_ops/ethread.h \
 ../include/internal/ethr_atomics.h \
 ../include/internal/ethr_optimized_fallbacks.h \
 ../include/internal/pthread/ethr_event.h \
 ../include/internal/ethr_mutex.h beam/erl_lock_count.h \
 beam/erl_dyn_lock_check.h beam/erl_msacc.h nifs/common/socket_util.h \
 nifs/common/socket_dbg.h
$(OBJDIR)/zlib_nif.o: nifs/common/zlib_nif.c beam/erl_nif.h \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_nif_api_funcs.h beam/sys.h sys/unix/erl_unix_sys.h \
 ../include/internal/erl_errno.h ../include/internal/erl_misc_utils.h \
 ../include/internal/erl_errno.h beam/erl_lock_check.h beam/sys.h \
 beam/erl_threads.h beam/erl_lock_flags.h beam/erl_term.h \
 sys/common/erl_mmap.h ../include/internal/erl_printf.h \
 ../include/internal/ethread.h ../include/internal/ethread_inline.h \
 ../include/internal/x86_64/ethread.h \
 ../include/internal/x86_64/../i386/ethread.h \
 ../include/internal/x86_64/../i386/ethr_membar.h \
 ../include/internal/x86_64/../i386/atomic.h \
 ../include/internal/x86_64/../i386/ethr_dw_atomic.h \
 ../include/internal/x86_64/../i386/spinlock.h \
 ../include/internal/x86_64/../i386/rwlock.h \
 ../include/internal/gcc/ethread.h \
 ../include/internal/libatomic_ops/ethread.h \
 ../include/internal/ethr_atomics.h \
 ../include/internal/ethr_optimized_fallbacks.h \
 ../include/internal/pthread/ethr_event.h \
 ../include/internal/ethr_mutex.h beam/erl_lock_count.h \
 beam/erl_dyn_lock_check.h beam/erl_msacc.h
$(OBJDIR)/unix_prim_file.o: nifs/unix/unix_prim_file.c beam/erl_nif.h \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_nif_api_funcs.h beam/sys.h sys/unix/erl_unix_sys.h \
 ../include/internal/erl_errno.h ../include/internal/erl_misc_utils.h \
 ../include/internal/erl_errno.h beam/erl_lock_check.h beam/sys.h \
 beam/erl_threads.h beam/erl_lock_flags.h beam/erl_term.h \
 sys/common/erl_mmap.h ../include/internal/erl_printf.h \
 ../include/internal/ethread.h ../include/internal/ethread_inline.h \
 ../include/internal/x86_64/ethread.h \
 ../include/internal/x86_64/../i386/ethread.h \
 ../include/internal/x86_64/../i386/ethr_membar.h \
 ../include/internal/x86_64/../i386/atomic.h \
 ../include/internal/x86_64/../i386/ethr_dw_atomic.h \
 ../include/internal/x86_64/../i386/spinlock.h \
 ../include/internal/x86_64/../i386/rwlock.h \
 ../include/internal/gcc/ethread.h \
 ../include/internal/libatomic_ops/ethread.h \
 ../include/internal/ethr_atomics.h \
 ../include/internal/ethr_optimized_fallbacks.h \
 ../include/internal/pthread/ethr_event.h \
 ../include/internal/ethr_mutex.h beam/erl_lock_count.h \
 beam/erl_dyn_lock_check.h beam/erl_msacc.h nifs/common/prim_file_nif.h
$(OBJDIR)/unix_socket_syncio.o: nifs/unix/unix_socket_syncio.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/sys.h beam/erl_threads.h \
 beam/erl_lock_flags.h beam/erl_term.h sys/common/erl_mmap.h \
 ../include/internal/erl_printf.h ../include/internal/ethread.h \
 ../include/internal/ethread_inline.h \
 ../include/internal/x86_64/ethread.h \
 ../include/internal/x86_64/../i386/ethread.h \
 ../include/internal/x86_64/../i386/ethr_membar.h \
 ../include/internal/x86_64/../i386/atomic.h \
 ../include/internal/x86_64/../i386/ethr_dw_atomic.h \
 ../include/internal/x86_64/../i386/spinlock.h \
 ../include/internal/x86_64/../i386/rwlock.h \
 ../include/internal/gcc/ethread.h \
 ../include/internal/libatomic_ops/ethread.h \
 ../include/internal/ethr_atomics.h \
 ../include/internal/ethr_optimized_fallbacks.h \
 ../include/internal/pthread/ethr_event.h \
 ../include/internal/ethr_mutex.h beam/erl_lock_count.h \
 beam/erl_dyn_lock_check.h beam/erl_msacc.h nifs/common/prim_socket_int.h \
 beam/erl_nif.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_nif_api_funcs.h nifs/common/socket_int.h \
 nifs/common/socket_dbg.h nifs/common/socket_util.h \
 nifs/common/socket_io.h nifs/common/prim_socket_int.h \
 nifs/common/socket_syncio.h nifs/common/socket_io.h \
 nifs/common/socket_tarray.h nifs/common/prim_file_nif_dyncall.h
