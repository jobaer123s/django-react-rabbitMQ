$(OBJDIR)/preload.o: x86_64-pc-linux-gnu/preload.c
$(OBJDIR)/erl_guard_bifs.o: $(TTF_DIR)/erl_guard_bifs.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/export.h beam/sys.h sys/unix/erl_unix_sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/index.h beam/hash.h \
 beam/erl_alloc.h $(TTF_DIR)/erl_alloc_types.h \
 beam/erl_thr_progress.h beam/erl_alloc_util.h sys/common/erl_mseg.h \
 sys/common/erl_mmap.h beam/lttng-wrapper.h \
 beam/erl_sched_spec_pre_alloc.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/erl_vm.h beam/global.h \
 beam/erl_vm.h beam/erl_node_container_utils.h beam/erl_ptab.h \
 beam/erl_time.h beam/erl_monitor_link.h beam/erl_proc_sig_queue.h \
 beam/erl_utils.h beam/atom.h \
 $(TTF_DIR)/erl_atom_table.h beam/erl_term_hashing.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/export.h beam/module.h beam/beam_code.h beam/erl_process.h \
 beam/erl_process_lock.h beam/erl_port.h beam/erl_message.h \
 beam/external.h beam/erl_node_tables.h beam/erl_process_dict.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/erl_process.h \
 beam/bif.h $(TTF_DIR)/erl_bif_table.h \
 $(TTF_DIR)/erl_bif_table.h
$(OBJDIR)/beam_transform.o: $(TTF_DIR)/beam_transform.c \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/erl_vm.h beam/export.h \
 beam/index.h beam/hash.h beam/erl_alloc.h \
 $(TTF_DIR)/erl_alloc_types.h beam/erl_thr_progress.h \
 beam/erl_alloc_util.h sys/common/erl_mseg.h sys/common/erl_mmap.h \
 beam/lttng-wrapper.h beam/erl_sched_spec_pre_alloc.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/erl_process.h \
 beam/erl_process_lock.h beam/erl_port.h beam/erl_vm.h beam/erl_message.h \
 beam/erl_proc_sig_queue.h beam/external.h beam/erl_node_tables.h \
 beam/erl_process.h beam/erl_process_dict.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_utils.h beam/atom.h \
 $(TTF_DIR)/erl_atom_table.h beam/erl_term_hashing.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/export.h beam/erl_bits.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h \
 $(TTF_DIR)/erl_atom_table.h beam/beam_load.h \
 beam/beam_file.h beam/beam_types.h beam/erl_fun.h beam/bif.h \
 beam/beam_code.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/jit/load.h beam/erl_term.h \
 beam/erl_map.h beam/big.h beam/global.h beam/module.h beam/register.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/erl_bits.h \
 beam/erl_binary.h beam/erl_bif_unique.h beam/big.h \
 beam/beam_transform_helpers.h beam/erl_global_literals.h
$(OBJDIR)/erl_dirty_bif_wrap.o: $(TTF_DIR)/erl_dirty_bif_wrap.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/erl_process.h beam/sys.h sys/unix/erl_unix_sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_vm.h beam/erl_message.h \
 beam/erl_proc_sig_queue.h beam/external.h beam/erl_node_tables.h \
 beam/erl_alloc.h $(TTF_DIR)/erl_alloc_types.h \
 beam/erl_thr_progress.h beam/erl_alloc_util.h sys/common/erl_mseg.h \
 sys/common/erl_mmap.h beam/lttng-wrapper.h \
 beam/erl_sched_spec_pre_alloc.h beam/erl_process.h \
 beam/erl_process_dict.h beam/erl_node_container_utils.h beam/erl_ptab.h \
 beam/erl_time.h beam/erl_monitor_link.h beam/erl_utils.h beam/atom.h \
 beam/index.h beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/export.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/erl_bits.h \
 beam/erl_nfunc_sched.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/error.h \
 beam/jit/beam_asm.h beam/bif.h beam/erl_fun.h beam/beam_code.h \
 openssl/include/erl_md5.h openssl/include/openssl_local/md5.h \
 beam/beam_file.h beam/beam_types.h beam/beam_common.h \
 $(TTF_DIR)/erl_bif_table.h \
 $(TTF_DIR)/erl_atom_table.h
$(OBJDIR)/erl_bif_table.o: $(TTF_DIR)/erl_bif_table.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/export.h beam/sys.h sys/unix/erl_unix_sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/index.h beam/hash.h \
 beam/erl_alloc.h $(TTF_DIR)/erl_alloc_types.h \
 beam/erl_thr_progress.h beam/erl_alloc_util.h sys/common/erl_mseg.h \
 sys/common/erl_mmap.h beam/lttng-wrapper.h \
 beam/erl_sched_spec_pre_alloc.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/erl_vm.h \
 beam/erl_process.h beam/erl_process_lock.h beam/erl_port.h beam/erl_vm.h \
 beam/erl_message.h beam/erl_proc_sig_queue.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process.h beam/erl_process_dict.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_utils.h beam/atom.h \
 $(TTF_DIR)/erl_atom_table.h beam/erl_term_hashing.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/export.h beam/erl_bits.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h \
 $(TTF_DIR)/erl_bif_table.h \
 $(TTF_DIR)/erl_atom_table.h
$(OBJDIR)/erl_atom_table.o: $(TTF_DIR)/erl_atom_table.c
$(OBJDIR)/driver_tab.o: $(TTF_DIR)/driver_tab.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/global.h beam/sys.h sys/unix/erl_unix_sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/erl_alloc.h \
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
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h
$(OBJDIR)/erl_poll.flbk.o: $(TTF_DIR)/erl_poll.flbk.c \
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
$(OBJDIR)/beam_opcodes.o: $(TTF_DIR)/beam_opcodes.c \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/erl_vm.h beam/export.h \
 beam/index.h beam/hash.h beam/erl_alloc.h \
 $(TTF_DIR)/erl_alloc_types.h beam/erl_thr_progress.h \
 beam/erl_alloc_util.h sys/common/erl_mseg.h sys/common/erl_mmap.h \
 beam/lttng-wrapper.h beam/erl_sched_spec_pre_alloc.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/erl_process.h \
 beam/erl_process_lock.h beam/erl_port.h beam/erl_vm.h beam/erl_message.h \
 beam/erl_proc_sig_queue.h beam/external.h beam/erl_node_tables.h \
 beam/erl_process.h beam/erl_process_dict.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_utils.h beam/atom.h \
 $(TTF_DIR)/erl_atom_table.h beam/erl_term_hashing.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/export.h beam/erl_bits.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h \
 $(TTF_DIR)/erl_atom_table.h beam/beam_load.h \
 beam/beam_file.h beam/beam_types.h beam/erl_fun.h beam/bif.h \
 beam/beam_code.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/jit/load.h
