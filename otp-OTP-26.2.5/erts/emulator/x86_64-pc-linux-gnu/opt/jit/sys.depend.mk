$(OBJDIR)/erl_child_setup.o: sys/unix/erl_child_setup.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/erl_driver.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h sys/unix/sys_uds.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h sys/unix/erl_unix_sys.h \
 ../include/internal/erl_errno.h ../include/internal/erl_misc_utils.h \
 ../include/internal/erl_errno.h beam/erl_lock_check.h beam/sys.h \
 beam/erl_threads.h beam/erl_lock_flags.h beam/erl_term.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h \
 ../include/internal/erl_printf.h sys/unix/erl_child_setup.h beam/hash.h
$(OBJDIR)/erl_main.o: sys/unix/erl_main.c \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/erl_vm.h beam/global.h \
 beam/erl_alloc.h $(TTF_DIR)/erl_alloc_types.h \
 beam/erl_thr_progress.h beam/erl_alloc_util.h sys/common/erl_mseg.h \
 sys/common/erl_mmap.h beam/lttng-wrapper.h \
 beam/erl_sched_spec_pre_alloc.h beam/erl_vm.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_proc_sig_queue.h beam/erl_utils.h \
 beam/atom.h beam/index.h beam/hash.h \
 $(TTF_DIR)/erl_atom_table.h beam/erl_term_hashing.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/code_ix.h $(TTF_DIR)/beam_opcodes.h beam/export.h \
 beam/module.h beam/beam_code.h beam/erl_process.h \
 beam/erl_process_lock.h beam/erl_port.h beam/erl_message.h \
 beam/external.h beam/erl_node_tables.h beam/erl_process_dict.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h
$(OBJDIR)/erl_unix_sys_ddll.o: sys/unix/erl_unix_sys_ddll.c \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/erl_vm.h beam/global.h \
 beam/erl_alloc.h $(TTF_DIR)/erl_alloc_types.h \
 beam/erl_thr_progress.h beam/erl_alloc_util.h sys/common/erl_mseg.h \
 sys/common/erl_mmap.h beam/lttng-wrapper.h \
 beam/erl_sched_spec_pre_alloc.h beam/erl_vm.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_proc_sig_queue.h beam/erl_utils.h \
 beam/atom.h beam/index.h beam/hash.h \
 $(TTF_DIR)/erl_atom_table.h beam/erl_term_hashing.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/code_ix.h $(TTF_DIR)/beam_opcodes.h beam/export.h \
 beam/module.h beam/beam_code.h beam/erl_process.h \
 beam/erl_process_lock.h beam/erl_port.h beam/erl_message.h \
 beam/external.h beam/erl_node_tables.h beam/erl_process_dict.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h
$(OBJDIR)/sys.o: sys/unix/sys.c \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/erl_thr_progress.h \
 beam/erl_process.h beam/erl_process_lock.h beam/erl_port.h beam/erl_vm.h \
 beam/erl_message.h beam/erl_proc_sig_queue.h beam/external.h \
 beam/erl_node_tables.h beam/erl_alloc.h \
 $(TTF_DIR)/erl_alloc_types.h beam/erl_thr_progress.h \
 beam/erl_alloc_util.h sys/common/erl_mseg.h sys/common/erl_mmap.h \
 beam/lttng-wrapper.h beam/erl_sched_spec_pre_alloc.h \
 beam/erl_process_dict.h beam/erl_node_container_utils.h beam/erl_ptab.h \
 beam/erl_time.h beam/erl_monitor_link.h beam/erl_utils.h beam/atom.h \
 beam/index.h beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/export.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/erl_bits.h \
 beam/erl_threads.h beam/global.h beam/module.h beam/beam_code.h \
 openssl/include/erl_md5.h openssl/include/openssl_local/md5.h \
 beam/register.h beam/erl_fun.h beam/erl_debug.h beam/error.h \
 sys/common/erl_poll.h sys/common/erl_poll_api.h beam/erl_io_queue.h \
 beam/erl_nif.h beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h sys/common/erl_check_io.h \
 beam/erl_sys_driver.h beam/erl_cpu_topology.h sys/common/erl_osenv.h \
 beam/erl_dyn_lock_check.h
$(OBJDIR)/sys_drivers.o: sys/unix/sys_drivers.c \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h sys/common/erl_osenv.h \
 beam/erl_threads.h beam/global.h beam/erl_alloc.h \
 $(TTF_DIR)/erl_alloc_types.h beam/erl_thr_progress.h \
 beam/erl_alloc_util.h sys/common/erl_mseg.h sys/common/erl_mmap.h \
 beam/lttng-wrapper.h beam/erl_sched_spec_pre_alloc.h beam/erl_vm.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_proc_sig_queue.h beam/erl_utils.h \
 beam/atom.h beam/index.h beam/hash.h \
 $(TTF_DIR)/erl_atom_table.h beam/erl_term_hashing.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/code_ix.h $(TTF_DIR)/beam_opcodes.h beam/export.h \
 beam/module.h beam/beam_code.h beam/erl_process.h \
 beam/erl_process_lock.h beam/erl_port.h beam/erl_message.h \
 beam/external.h beam/erl_node_tables.h beam/erl_process_dict.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/erl_cpu_topology.h \
 beam/erl_sys_driver.h sys/unix/sys_uds.h sys/unix/erl_child_setup.h
$(OBJDIR)/sys_env.o: sys/unix/sys_env.c \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h sys/common/erl_osenv.h \
 beam/erl_alloc.h $(TTF_DIR)/erl_alloc_types.h \
 beam/erl_thr_progress.h beam/erl_alloc_util.h beam/erl_alloc.h \
 sys/common/erl_mseg.h sys/common/erl_mmap.h beam/lttng-wrapper.h \
 beam/erl_sched_spec_pre_alloc.h beam/erl_thr_progress.h \
 beam/erl_process.h beam/erl_process_lock.h beam/erl_port.h beam/erl_vm.h \
 beam/erl_message.h beam/erl_proc_sig_queue.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/export.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/erl_bits.h
$(OBJDIR)/sys_float.o: sys/unix/sys_float.c \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/global.h \
 beam/erl_alloc.h $(TTF_DIR)/erl_alloc_types.h \
 beam/erl_thr_progress.h beam/erl_alloc_util.h sys/common/erl_mseg.h \
 sys/common/erl_mmap.h beam/lttng-wrapper.h \
 beam/erl_sched_spec_pre_alloc.h beam/erl_vm.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_proc_sig_queue.h beam/erl_utils.h \
 beam/atom.h beam/index.h beam/hash.h \
 $(TTF_DIR)/erl_atom_table.h beam/erl_term_hashing.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/code_ix.h $(TTF_DIR)/beam_opcodes.h beam/export.h \
 beam/module.h beam/beam_code.h beam/erl_process.h \
 beam/erl_process_lock.h beam/erl_port.h beam/erl_message.h \
 beam/external.h beam/erl_node_tables.h beam/erl_process_dict.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/erl_process.h
$(OBJDIR)/sys_signal_stack.o: sys/unix/sys_signal_stack.c \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/erl_alloc.h \
 $(TTF_DIR)/erl_alloc_types.h beam/erl_thr_progress.h \
 beam/erl_alloc_util.h beam/erl_alloc.h sys/common/erl_mseg.h \
 sys/common/erl_mmap.h beam/lttng-wrapper.h \
 beam/erl_sched_spec_pre_alloc.h beam/erl_vm.h
$(OBJDIR)/sys_time.o: sys/unix/sys_time.c \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/global.h \
 beam/erl_alloc.h $(TTF_DIR)/erl_alloc_types.h \
 beam/erl_thr_progress.h beam/erl_alloc_util.h sys/common/erl_mseg.h \
 sys/common/erl_mmap.h beam/lttng-wrapper.h \
 beam/erl_sched_spec_pre_alloc.h beam/erl_vm.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_proc_sig_queue.h beam/erl_utils.h \
 beam/atom.h beam/index.h beam/hash.h \
 $(TTF_DIR)/erl_atom_table.h beam/erl_term_hashing.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/code_ix.h $(TTF_DIR)/beam_opcodes.h beam/export.h \
 beam/module.h beam/beam_code.h beam/erl_process.h \
 beam/erl_process_lock.h beam/erl_port.h beam/erl_message.h \
 beam/external.h beam/erl_node_tables.h beam/erl_process_dict.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h \
 sys/common/erl_os_monotonic_time_extender.h beam/erl_threads.h
$(OBJDIR)/sys_uds.o: sys/unix/sys_uds.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 sys/unix/sys_uds.h
$(OBJDIR)/erl_check_io.o: sys/common/erl_check_io.c \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/global.h \
 beam/erl_alloc.h $(TTF_DIR)/erl_alloc_types.h \
 beam/erl_thr_progress.h beam/erl_alloc_util.h sys/common/erl_mseg.h \
 sys/common/erl_mmap.h beam/lttng-wrapper.h \
 beam/erl_sched_spec_pre_alloc.h beam/erl_vm.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_proc_sig_queue.h beam/erl_utils.h \
 beam/atom.h beam/index.h beam/hash.h \
 $(TTF_DIR)/erl_atom_table.h beam/erl_term_hashing.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/code_ix.h $(TTF_DIR)/beam_opcodes.h beam/export.h \
 beam/module.h beam/beam_code.h beam/erl_process.h \
 beam/erl_process_lock.h beam/erl_port.h beam/erl_message.h \
 beam/external.h beam/erl_node_tables.h beam/erl_process_dict.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/erl_port.h \
 sys/common/erl_check_io.h beam/erl_sys_driver.h sys/common/erl_poll.h \
 beam/erl_port_task.h beam/erl_thr_progress.h beam/erl_bif_unique.h \
 beam/big.h beam/global.h beam/dtrace-wrapper.h beam/lttng-wrapper.h \
 beam/erl_time.h
$(OBJDIR)/erl_mmap.o: sys/common/erl_mmap.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/sys.h beam/erl_threads.h \
 beam/erl_lock_flags.h beam/erl_term.h sys/common/erl_mmap.h \
 ../include/internal/erl_printf.h \
 $(TTF_DIR)/erl_alloc_types.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/erl_process.h \
 beam/erl_process_lock.h beam/erl_port.h beam/erl_vm.h beam/erl_message.h \
 beam/erl_proc_sig_queue.h beam/external.h beam/erl_node_tables.h \
 beam/erl_alloc.h beam/erl_thr_progress.h beam/erl_alloc_util.h \
 sys/common/erl_mseg.h sys/common/erl_mmap.h beam/lttng-wrapper.h \
 beam/erl_sched_spec_pre_alloc.h beam/erl_process.h \
 beam/erl_process_dict.h beam/erl_node_container_utils.h beam/erl_ptab.h \
 beam/erl_time.h beam/erl_monitor_link.h beam/erl_utils.h beam/atom.h \
 beam/index.h beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/export.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/erl_bits.h beam/atom.h
$(OBJDIR)/erl_mseg.o: sys/common/erl_mseg.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/sys.h beam/erl_threads.h \
 beam/erl_lock_flags.h beam/erl_term.h sys/common/erl_mmap.h \
 ../include/internal/erl_printf.h \
 $(TTF_DIR)/erl_alloc_types.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h sys/common/erl_mseg.h \
 sys/common/erl_mmap.h beam/global.h beam/erl_alloc.h \
 beam/erl_thr_progress.h beam/erl_alloc_util.h sys/common/erl_mseg.h \
 beam/lttng-wrapper.h beam/erl_sched_spec_pre_alloc.h beam/erl_vm.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_proc_sig_queue.h beam/erl_utils.h \
 beam/atom.h beam/index.h beam/hash.h \
 $(TTF_DIR)/erl_atom_table.h beam/erl_term_hashing.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/code_ix.h $(TTF_DIR)/beam_opcodes.h beam/export.h \
 beam/module.h beam/beam_code.h beam/erl_process.h \
 beam/erl_process_lock.h beam/erl_port.h beam/erl_message.h \
 beam/external.h beam/erl_node_tables.h beam/erl_process_dict.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/erl_threads.h \
 beam/erl_time.h beam/erl_alloc.h beam/big.h beam/global.h \
 beam/erl_thr_progress.h sys/common/erl_util_queue.h
$(OBJDIR)/erl_osenv.o: sys/common/erl_osenv.c sys/common/erl_osenv.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/global.h \
 beam/erl_alloc.h $(TTF_DIR)/erl_alloc_types.h \
 beam/erl_thr_progress.h beam/erl_alloc_util.h sys/common/erl_mseg.h \
 sys/common/erl_mmap.h beam/lttng-wrapper.h \
 beam/erl_sched_spec_pre_alloc.h beam/erl_vm.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_proc_sig_queue.h beam/erl_utils.h \
 beam/atom.h beam/index.h beam/hash.h \
 $(TTF_DIR)/erl_atom_table.h beam/erl_term_hashing.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/code_ix.h $(TTF_DIR)/beam_opcodes.h beam/export.h \
 beam/module.h beam/beam_code.h beam/erl_process.h \
 beam/erl_process_lock.h beam/erl_port.h beam/erl_message.h \
 beam/external.h beam/erl_node_tables.h beam/erl_process_dict.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/erl_alloc.h \
 beam/erl_process.h beam/erl_rbtree.h
$(OBJDIR)/erl_os_monotonic_time_extender.o: \
 sys/common/erl_os_monotonic_time_extender.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 sys/common/erl_os_monotonic_time_extender.h beam/sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/erl_threads.h
$(OBJDIR)/erl_poll.o $(OBJDIR)/erl_poll.flbk.o: sys/common/erl_poll.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/erl_thr_progress.h beam/sys.h sys/unix/erl_unix_sys.h \
 ../include/internal/erl_errno.h ../include/internal/erl_misc_utils.h \
 ../include/internal/erl_errno.h beam/erl_lock_check.h beam/erl_threads.h \
 beam/erl_lock_flags.h beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/erl_process.h \
 beam/erl_process_lock.h beam/erl_port.h beam/erl_vm.h beam/erl_message.h \
 beam/erl_proc_sig_queue.h beam/external.h beam/erl_node_tables.h \
 beam/erl_alloc.h $(TTF_DIR)/erl_alloc_types.h \
 beam/erl_thr_progress.h beam/erl_alloc_util.h sys/common/erl_mseg.h \
 sys/common/erl_mmap.h beam/lttng-wrapper.h \
 beam/erl_sched_spec_pre_alloc.h beam/erl_process_dict.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/export.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/erl_bits.h \
 sys/common/erl_poll.h sys/common/erl_poll_api.h beam/erl_driver.h \
 beam/erl_alloc.h beam/erl_msacc.h
$(OBJDIR)/erl_sys_common_misc.o: sys/common/erl_sys_common_misc.c \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/global.h \
 beam/erl_alloc.h $(TTF_DIR)/erl_alloc_types.h \
 beam/erl_thr_progress.h beam/erl_alloc_util.h sys/common/erl_mseg.h \
 sys/common/erl_mmap.h beam/lttng-wrapper.h \
 beam/erl_sched_spec_pre_alloc.h beam/erl_vm.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_proc_sig_queue.h beam/erl_utils.h \
 beam/atom.h beam/index.h beam/hash.h \
 $(TTF_DIR)/erl_atom_table.h beam/erl_term_hashing.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/code_ix.h $(TTF_DIR)/beam_opcodes.h beam/export.h \
 beam/module.h beam/beam_code.h beam/erl_process.h \
 beam/erl_process_lock.h beam/erl_port.h beam/erl_message.h \
 beam/external.h beam/erl_node_tables.h beam/erl_process_dict.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h
