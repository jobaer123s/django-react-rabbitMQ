$(OBJDIR)/atom.o: beam/atom.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/erl_sys_driver.h \
 beam/erl_driver.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/erl_vm.h \
 beam/global.h beam/erl_alloc.h \
 $(TTF_DIR)/erl_alloc_types.h beam/erl_thr_progress.h \
 beam/erl_alloc_util.h sys/common/erl_mseg.h sys/common/erl_mmap.h \
 beam/lttng-wrapper.h beam/erl_sched_spec_pre_alloc.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_proc_sig_queue.h beam/erl_utils.h \
 beam/atom.h beam/index.h beam/hash.h \
 $(TTF_DIR)/erl_atom_table.h beam/erl_term_hashing.h \
 beam/code_ix.h $(TTF_DIR)/beam_opcodes.h beam/export.h \
 beam/module.h beam/beam_code.h beam/erl_process.h \
 beam/erl_process_lock.h beam/erl_port.h beam/erl_message.h \
 beam/external.h beam/erl_node_tables.h beam/erl_process_dict.h \
 beam/erl_port_task.h beam/erl_binary.h beam/erl_hl_timer.h \
 beam/erl_async.h beam/erl_gc.h beam/erl_trace.h beam/erl_db.h \
 beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h
$(OBJDIR)/beam_bif_load.o: beam/beam_bif_load.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/beam_load.h \
 beam/beam_file.h beam/beam_types.h beam/jit/load.h beam/big.h \
 beam/beam_bp.h beam/beam_catches.h beam/erl_bif_unique.h \
 beam/erl_nfunc_sched.h beam/jit/beam_asm.h beam/bif.h beam/erl_fun.h \
 beam/erl_process.h beam/beam_code.h beam/beam_file.h beam/beam_common.h
$(OBJDIR)/beam_bp.o: beam/beam_bp.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_bif_unique.h \
 beam/big.h beam/beam_bp.h beam/erl_nfunc_sched.h beam/jit/beam_asm.h \
 beam/bif.h beam/erl_fun.h beam/erl_process.h beam/beam_code.h \
 beam/beam_file.h beam/beam_types.h beam/beam_common.h beam/beam_common.h
$(OBJDIR)/beam_catches.o: beam/beam_catches.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/beam_catches.h \
 beam/code_ix.h $(TTF_DIR)/beam_opcodes.h \
 beam/erl_thr_progress.h beam/beam_code.h beam/erl_process.h \
 beam/erl_process_lock.h beam/erl_port.h beam/erl_vm.h beam/erl_message.h \
 beam/erl_proc_sig_queue.h beam/external.h beam/erl_node_tables.h \
 beam/erl_alloc.h $(TTF_DIR)/erl_alloc_types.h \
 beam/erl_alloc_util.h sys/common/erl_mseg.h sys/common/erl_mmap.h \
 beam/lttng-wrapper.h beam/erl_sched_spec_pre_alloc.h \
 beam/erl_process_dict.h beam/erl_node_container_utils.h beam/erl_ptab.h \
 beam/erl_time.h beam/erl_monitor_link.h beam/erl_utils.h beam/atom.h \
 beam/index.h beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/export.h beam/erl_bits.h \
 openssl/include/erl_md5.h openssl/include/openssl_local/md5.h \
 beam/global.h beam/module.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h
$(OBJDIR)/beam_common.o: beam/beam_common.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/erl_map.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_bif_unique.h \
 beam/big.h beam/erl_nfunc_sched.h beam/jit/beam_asm.h beam/bif.h \
 beam/erl_fun.h beam/erl_process.h beam/beam_code.h beam/beam_file.h \
 beam/beam_types.h beam/beam_common.h beam/dist.h beam/beam_catches.h \
 beam/beam_common.h beam/erl_global_literals.h
$(OBJDIR)/beam_debug.o: beam/beam_debug.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/big.h beam/beam_bp.h \
 beam/erl_bif_unique.h beam/erl_nfunc_sched.h beam/jit/beam_asm.h \
 beam/bif.h beam/erl_fun.h beam/erl_process.h beam/beam_code.h \
 beam/beam_file.h beam/beam_types.h beam/beam_common.h \
 beam/beam_catches.h
$(OBJDIR)/beam_file.o: beam/beam_file.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/beam_file.h beam/sys.h sys/unix/erl_unix_sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/atom.h beam/index.h \
 beam/hash.h beam/erl_alloc.h \
 $(TTF_DIR)/erl_alloc_types.h beam/erl_thr_progress.h \
 beam/erl_alloc_util.h sys/common/erl_mseg.h sys/common/erl_mmap.h \
 beam/lttng-wrapper.h beam/erl_sched_spec_pre_alloc.h \
 $(TTF_DIR)/erl_atom_table.h beam/beam_types.h \
 beam/erl_process.h beam/erl_process_lock.h beam/erl_port.h beam/erl_vm.h \
 beam/erl_message.h beam/erl_proc_sig_queue.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_utils.h beam/erl_term_hashing.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/export.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/erl_bits.h \
 beam/beam_load.h beam/erl_fun.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/beam_code.h \
 openssl/include/erl_md5.h openssl/include/openssl_local/md5.h \
 beam/jit/load.h beam/erl_zlib.h beam/big.h beam/global.h beam/module.h \
 beam/register.h beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/erl_unicode.h \
 beam/erl_bif_unique.h beam/erl_global_literals.h
$(OBJDIR)/beam_load.o: beam/beam_load.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h \
 x86_64-pc-linux-gnu/erl_version.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/beam_load.h \
 beam/beam_file.h beam/beam_types.h beam/jit/load.h beam/beam_bp.h \
 beam/big.h beam/beam_catches.h beam/erl_bif_unique.h beam/erl_zlib.h \
 beam/erl_map.h beam/erl_unicode.h
$(OBJDIR)/beam_ranges.o: beam/beam_ranges.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/erl_unicode.h
$(OBJDIR)/beam_transform_engine.o: beam/beam_transform_engine.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 $(TTF_DIR)/beam_opcodes.h beam/bif.h beam/erl_process.h \
 beam/erl_process_lock.h beam/erl_port.h beam/erl_message.h \
 beam/erl_proc_sig_queue.h beam/external.h beam/erl_node_tables.h \
 beam/erl_process_dict.h beam/erl_node_container_utils.h beam/erl_ptab.h \
 beam/erl_time.h beam/erl_monitor_link.h beam/erl_utils.h beam/atom.h \
 $(TTF_DIR)/erl_atom_table.h beam/erl_term_hashing.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/erl_bits.h \
 $(TTF_DIR)/erl_bif_table.h beam/beam_load.h \
 beam/beam_file.h beam/beam_types.h beam/erl_fun.h beam/beam_code.h \
 openssl/include/erl_md5.h openssl/include/openssl_local/md5.h \
 beam/jit/load.h
$(OBJDIR)/beam_transform_helpers.o: beam/beam_transform_helpers.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/beam_load.h \
 $(TTF_DIR)/beam_opcodes.h beam/beam_file.h beam/atom.h \
 beam/index.h beam/hash.h beam/erl_alloc.h \
 $(TTF_DIR)/erl_alloc_types.h beam/erl_thr_progress.h \
 beam/erl_alloc_util.h sys/common/erl_mseg.h sys/common/erl_mmap.h \
 beam/lttng-wrapper.h beam/erl_sched_spec_pre_alloc.h \
 $(TTF_DIR)/erl_atom_table.h beam/beam_types.h \
 beam/erl_process.h beam/erl_process_lock.h beam/erl_port.h beam/erl_vm.h \
 beam/erl_message.h beam/erl_proc_sig_queue.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_utils.h beam/erl_term_hashing.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/export.h beam/code_ix.h \
 beam/erl_bits.h beam/erl_fun.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/beam_code.h \
 openssl/include/erl_md5.h openssl/include/openssl_local/md5.h \
 beam/jit/load.h beam/erl_map.h beam/beam_transform_helpers.h
$(OBJDIR)/beam_types.o: beam/beam_types.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/beam_types.h beam/sys.h sys/unix/erl_unix_sys.h \
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
$(OBJDIR)/bif.o: beam/bif.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/erl_vm.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/global.h \
 beam/erl_alloc.h $(TTF_DIR)/erl_alloc_types.h \
 beam/erl_thr_progress.h beam/erl_alloc_util.h sys/common/erl_mseg.h \
 sys/common/erl_mmap.h beam/lttng-wrapper.h \
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/big.h beam/dist.h \
 x86_64-pc-linux-gnu/erl_version.h beam/erl_bif_unique.h beam/beam_bp.h \
 beam/erl_db_util.h beam/erl_flxctr.h beam/erl_map.h ryu/ryu.h \
 beam/jit/beam_asm.h beam/bif.h beam/erl_fun.h beam/erl_process.h \
 beam/beam_code.h beam/beam_file.h beam/beam_types.h beam/beam_common.h \
 beam/erl_global_literals.h beam/beam_load.h beam/beam_file.h \
 beam/jit/load.h beam/erl_nfunc_sched.h
$(OBJDIR)/big.o: beam/big.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/big.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_bif_unique.h
$(OBJDIR)/binary.o: beam/binary.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/big.h \
 beam/erl_bif_unique.h
$(OBJDIR)/break.o: beam/break.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/version.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_db_util.h \
 beam/erl_flxctr.h beam/big.h beam/erl_bif_unique.h beam/erl_db_hash.h \
 beam/erl_db_tree.h beam/erl_db_catree.h \
 x86_64-pc-linux-gnu/erl_version.h beam/dist.h
$(OBJDIR)/code_ix.o: beam/code_ix.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/code_ix.h beam/sys.h sys/unix/erl_unix_sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h \
 $(TTF_DIR)/beam_opcodes.h beam/erl_thr_progress.h \
 beam/global.h beam/erl_alloc.h \
 $(TTF_DIR)/erl_alloc_types.h beam/erl_alloc_util.h \
 sys/common/erl_mseg.h sys/common/erl_mmap.h beam/lttng-wrapper.h \
 beam/erl_sched_spec_pre_alloc.h beam/erl_vm.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_proc_sig_queue.h beam/erl_utils.h \
 beam/atom.h beam/index.h beam/hash.h \
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
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/beam_catches.h
$(OBJDIR)/copy.o: beam/copy.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_map.h \
 beam/erl_fun.h beam/erl_bits.h beam/erl_trace.h beam/erl_db.h \
 openssl/include/erl_md5.h openssl/include/openssl_local/md5.h \
 beam/register.h beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/big.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_bif_unique.h \
 beam/erl_global_literals.h
$(OBJDIR)/dist.o: beam/dist.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/dist.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_bif_unique.h \
 beam/big.h beam/erl_global_literals.h beam/erl_map.h beam/erl_rbtree.h
$(OBJDIR)/erl_afit_alloc.o: beam/erl_afit_alloc.c \
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
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/erl_afit_alloc.h
$(OBJDIR)/erl_alloc.o: beam/erl_alloc.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/global.h \
 beam/erl_alloc.h beam/erl_thr_progress.h beam/erl_alloc_util.h \
 sys/common/erl_mseg.h sys/common/erl_mmap.h beam/lttng-wrapper.h \
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
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_db_util.h \
 beam/erl_flxctr.h beam/big.h beam/erl_bif_unique.h beam/erl_db_hash.h \
 beam/erl_db_tree.h beam/erl_db_catree.h beam/erl_cpu_topology.h \
 beam/erl_thr_queue.h beam/erl_nfunc_sched.h beam/jit/beam_asm.h \
 beam/bif.h beam/erl_fun.h beam/erl_process.h beam/beam_code.h \
 beam/beam_file.h beam/beam_types.h beam/beam_common.h \
 sys/common/erl_check_io.h beam/erl_sys_driver.h sys/common/erl_poll.h \
 beam/erl_port_task.h beam/erl_goodfit_alloc.h beam/erl_bestfit_alloc.h \
 beam/erl_afit_alloc.h beam/erl_ao_firstfit_alloc.h
$(OBJDIR)/erl_alloc_util.o: beam/erl_alloc_util.c \
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
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/big.h \
 beam/erl_bif_unique.h beam/erl_global_literals.h beam/erl_rbtree.h
$(OBJDIR)/erlang_lttng.o: beam/erlang_lttng.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h
$(OBJDIR)/erl_ao_firstfit_alloc.o: beam/erl_ao_firstfit_alloc.c \
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
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h \
 beam/erl_ao_firstfit_alloc.h
$(OBJDIR)/erl_arith.o: beam/erl_arith.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/big.h
$(OBJDIR)/erl_async.o: beam/erl_async.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/erl_sys_driver.h \
 beam/erl_driver.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/global.h \
 beam/erl_alloc.h $(TTF_DIR)/erl_alloc_types.h \
 beam/erl_thr_progress.h beam/erl_alloc_util.h sys/common/erl_mseg.h \
 sys/common/erl_mmap.h beam/lttng-wrapper.h \
 beam/erl_sched_spec_pre_alloc.h beam/erl_vm.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_proc_sig_queue.h beam/erl_utils.h \
 beam/atom.h beam/index.h beam/hash.h \
 $(TTF_DIR)/erl_atom_table.h beam/erl_term_hashing.h \
 beam/code_ix.h $(TTF_DIR)/beam_opcodes.h beam/export.h \
 beam/module.h beam/beam_code.h beam/erl_process.h \
 beam/erl_process_lock.h beam/erl_port.h beam/erl_message.h \
 beam/external.h beam/erl_node_tables.h beam/erl_process_dict.h \
 beam/erl_port_task.h beam/erl_binary.h beam/erl_hl_timer.h \
 beam/erl_async.h beam/erl_gc.h beam/erl_trace.h beam/erl_db.h \
 beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/erl_thr_queue.h
$(OBJDIR)/erl_bestfit_alloc.o: beam/erl_bestfit_alloc.c \
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
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/erl_bestfit_alloc.h
$(OBJDIR)/erl_bif_atomics.o: beam/erl_bif_atomics.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/export.h beam/index.h \
 beam/hash.h beam/erl_alloc.h \
 $(TTF_DIR)/erl_alloc_types.h beam/erl_thr_progress.h \
 beam/erl_alloc_util.h sys/common/erl_mseg.h sys/common/erl_mmap.h \
 beam/lttng-wrapper.h beam/erl_sched_spec_pre_alloc.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/bif.h beam/erl_process.h \
 beam/erl_process_lock.h beam/erl_port.h beam/erl_vm.h beam/erl_message.h \
 beam/erl_proc_sig_queue.h beam/external.h beam/erl_node_tables.h \
 beam/erl_process_dict.h beam/erl_node_container_utils.h beam/erl_ptab.h \
 beam/erl_time.h beam/erl_monitor_link.h beam/erl_utils.h beam/atom.h \
 $(TTF_DIR)/erl_atom_table.h beam/erl_term_hashing.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/erl_bits.h \
 $(TTF_DIR)/erl_bif_table.h beam/big.h beam/global.h \
 beam/module.h beam/beam_code.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/erl_bif_unique.h \
 beam/erl_map.h
$(OBJDIR)/erl_bif_binary.o: beam/erl_bif_binary.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/big.h \
 beam/erl_bif_unique.h
$(OBJDIR)/erl_bif_chksum.o: beam/erl_bif_chksum.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_bif_unique.h \
 beam/big.h
$(OBJDIR)/erl_bif_counters.o: beam/erl_bif_counters.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/export.h beam/index.h \
 beam/hash.h beam/erl_alloc.h \
 $(TTF_DIR)/erl_alloc_types.h beam/erl_thr_progress.h \
 beam/erl_alloc_util.h sys/common/erl_mseg.h sys/common/erl_mmap.h \
 beam/lttng-wrapper.h beam/erl_sched_spec_pre_alloc.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/bif.h beam/erl_process.h \
 beam/erl_process_lock.h beam/erl_port.h beam/erl_vm.h beam/erl_message.h \
 beam/erl_proc_sig_queue.h beam/external.h beam/erl_node_tables.h \
 beam/erl_process_dict.h beam/erl_node_container_utils.h beam/erl_ptab.h \
 beam/erl_time.h beam/erl_monitor_link.h beam/erl_utils.h beam/atom.h \
 $(TTF_DIR)/erl_atom_table.h beam/erl_term_hashing.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/erl_bits.h \
 $(TTF_DIR)/erl_bif_table.h beam/big.h beam/global.h \
 beam/module.h beam/beam_code.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/erl_bif_unique.h \
 beam/erl_map.h
$(OBJDIR)/erl_bif_ddll.o: beam/erl_bif_ddll.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/big.h beam/dist.h \
 x86_64-pc-linux-gnu/erl_version.h beam/erl_bif_unique.h
$(OBJDIR)/erl_bif_guard.o: beam/erl_bif_guard.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/big.h \
 beam/erl_bif_unique.h beam/erl_map.h
$(OBJDIR)/erl_bif_info.o: beam/erl_bif_info.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/erl_vm.h beam/global.h \
 beam/erl_alloc.h beam/erl_thr_progress.h beam/erl_alloc_util.h \
 sys/common/erl_mseg.h sys/common/erl_mmap.h beam/lttng-wrapper.h \
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/big.h \
 x86_64-pc-linux-gnu/erl_version.h \
 $(TTF_DIR)/erl_compile_flags.h beam/erl_db_util.h \
 beam/erl_flxctr.h beam/erl_bif_unique.h beam/erl_db_hash.h \
 beam/erl_db_tree.h beam/erl_db_catree.h beam/dist.h \
 beam/erl_cpu_topology.h beam/erl_map.h sys/common/erl_check_io.h \
 beam/erl_sys_driver.h beam/erl_global_literals.h beam/beam_load.h \
 beam/beam_file.h beam/beam_types.h beam/jit/load.h
$(OBJDIR)/erl_bif_lists.o: beam/erl_bif_lists.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_bif_unique.h \
 beam/big.h beam/erl_rbtree.h
$(OBJDIR)/erl_bif_op.o: beam/erl_bif_op.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/big.h beam/dist.h \
 x86_64-pc-linux-gnu/erl_version.h beam/erl_bif_unique.h beam/erl_map.h
$(OBJDIR)/erl_bif_os.o: beam/erl_bif_os.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/big.h beam/dist.h \
 x86_64-pc-linux-gnu/erl_version.h sys/common/erl_osenv.h
$(OBJDIR)/erl_bif_persistent.o: beam/erl_bif_persistent.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_map.h \
 beam/erl_bif_unique.h beam/big.h
$(OBJDIR)/erl_bif_port.o: beam/erl_bif_port.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/erl_vm.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/global.h \
 beam/erl_alloc.h $(TTF_DIR)/erl_alloc_types.h \
 beam/erl_thr_progress.h beam/erl_alloc_util.h sys/common/erl_mseg.h \
 sys/common/erl_mmap.h beam/lttng-wrapper.h \
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/big.h beam/dist.h \
 x86_64-pc-linux-gnu/erl_version.h beam/erl_bif_unique.h \
 beam/erl_db_util.h beam/erl_flxctr.h beam/packet_parser.h \
 beam/erl_driver.h sys/common/erl_osenv.h
$(OBJDIR)/erl_bif_re.o: beam/erl_bif_re.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_bif_unique.h \
 beam/big.h pcre/pcre.h
$(OBJDIR)/erl_bif_trace.o: beam/erl_bif_trace.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/big.h beam/dist.h \
 x86_64-pc-linux-gnu/erl_version.h beam/beam_bp.h beam/erl_bif_unique.h
$(OBJDIR)/erl_bif_unique.o: beam/erl_bif_unique.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/erl_vm.h \
 beam/erl_alloc.h $(TTF_DIR)/erl_alloc_types.h \
 beam/erl_thr_progress.h beam/erl_alloc_util.h sys/common/erl_mseg.h \
 sys/common/erl_mmap.h beam/lttng-wrapper.h \
 beam/erl_sched_spec_pre_alloc.h beam/export.h beam/index.h beam/hash.h \
 beam/code_ix.h $(TTF_DIR)/beam_opcodes.h beam/bif.h \
 beam/erl_process.h beam/erl_process_lock.h beam/erl_port.h \
 beam/erl_message.h beam/erl_proc_sig_queue.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_utils.h beam/atom.h \
 $(TTF_DIR)/erl_atom_table.h beam/erl_term_hashing.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/erl_bits.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_bif_unique.h \
 beam/big.h beam/global.h beam/module.h beam/beam_code.h \
 openssl/include/erl_md5.h openssl/include/openssl_local/md5.h \
 beam/register.h beam/erl_fun.h beam/erl_debug.h beam/error.h \
 sys/common/erl_poll.h sys/common/erl_poll_api.h beam/erl_io_queue.h \
 beam/erl_nif.h beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h
$(OBJDIR)/erl_bits.o: beam/erl_bits.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/big.h \
 beam/erl_bif_unique.h
$(OBJDIR)/erl_cpu_topology.o: beam/erl_cpu_topology.c \
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
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_cpu_topology.h \
 beam/erl_flxctr.h beam/big.h beam/erl_bif_unique.h \
 beam/erl_global_literals.h
$(OBJDIR)/erl_db.o: beam/erl_db.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_db_util.h \
 beam/erl_flxctr.h beam/big.h beam/erl_bif_unique.h beam/erl_db_hash.h \
 beam/erl_db_tree.h beam/erl_db_catree.h beam/erl_rbtree.h \
 x86_64-pc-linux-gnu/erl_db_insert_list.ycf.h
$(OBJDIR)/erl_db_catree.o: beam/erl_db_catree.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_db_util.h \
 beam/erl_flxctr.h beam/big.h beam/erl_bif_unique.h beam/erl_db_hash.h \
 beam/erl_db_tree.h beam/erl_db_catree.h beam/erl_db_tree_util.h \
 beam/erl_global_literals.h
$(OBJDIR)/erl_db_hash.o: beam/erl_db_hash.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_db_util.h \
 beam/erl_flxctr.h beam/big.h beam/erl_bif_unique.h beam/erl_db_hash.h \
 beam/erl_db_tree.h beam/erl_db_catree.h
$(OBJDIR)/erl_db_tree.o: beam/erl_db_tree.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_db_util.h \
 beam/erl_flxctr.h beam/big.h beam/erl_bif_unique.h beam/erl_db_hash.h \
 beam/erl_db_tree.h beam/erl_db_catree.h beam/erl_db_tree_util.h
$(OBJDIR)/erl_db_util.o: beam/erl_db_util.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_db_util.h \
 beam/erl_flxctr.h beam/big.h beam/erl_bif_unique.h beam/erl_db_hash.h \
 beam/erl_db_tree.h beam/erl_db_catree.h beam/erl_map.h \
 beam/erl_global_literals.h
$(OBJDIR)/erl_debug.o: beam/erl_debug.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/big.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/beam_catches.h \
 beam/erl_map.h
$(OBJDIR)/erl_drv_thread.o: beam/erl_drv_thread.c \
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
$(OBJDIR)/erl_dyn_lock_check.o: beam/erl_dyn_lock_check.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/erl_dyn_lock_check.h
$(OBJDIR)/erl_flxctr.o: beam/erl_flxctr.c beam/erl_flxctr.h \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/big.h \
 beam/erl_bif_unique.h
$(OBJDIR)/erl_fun.o: beam/erl_fun.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/beam_common.h
$(OBJDIR)/erl_gc.o: beam/erl_gc.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_map.h \
 beam/erl_fun.h beam/erl_bits.h beam/erl_trace.h beam/erl_db.h \
 openssl/include/erl_md5.h openssl/include/openssl_local/md5.h \
 beam/register.h beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_db_util.h \
 beam/erl_flxctr.h beam/big.h beam/erl_bif_unique.h beam/erl_db_hash.h \
 beam/erl_db_tree.h beam/erl_db_catree.h beam/beam_catches.h beam/dist.h \
 beam/erl_nfunc_sched.h beam/jit/beam_asm.h beam/bif.h beam/erl_fun.h \
 beam/erl_process.h beam/beam_code.h beam/beam_file.h beam/beam_types.h \
 beam/beam_common.h beam/beam_common.h beam/beam_bp.h
$(OBJDIR)/erl_global_literals.o: beam/erl_global_literals.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_global_literals.h
$(OBJDIR)/erl_goodfit_alloc.o: beam/erl_goodfit_alloc.c \
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
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/erl_goodfit_alloc.h
$(OBJDIR)/erl_hl_timer.o: beam/erl_hl_timer.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_bif_unique.h \
 beam/big.h beam/erl_rbtree.h
$(OBJDIR)/erl_init.o: beam/erl_init.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h \
 x86_64-pc-linux-gnu/erl_version.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_db_util.h \
 beam/erl_flxctr.h beam/big.h beam/erl_bif_unique.h beam/erl_db_hash.h \
 beam/erl_db_tree.h beam/erl_db_catree.h beam/beam_bp.h beam/dist.h \
 beam/erl_printf_term.h ../include/internal/erl_printf_format.h \
 ../include/internal/erl_printf.h beam/packet_parser.h beam/erl_driver.h \
 beam/erl_cpu_topology.h beam/erl_thr_queue.h sys/common/erl_check_io.h \
 beam/erl_sys_driver.h sys/common/erl_osenv.h beam/beam_load.h \
 beam/beam_file.h beam/beam_types.h beam/jit/load.h \
 beam/erl_global_literals.h beam/jit/beam_asm.h beam/bif.h beam/erl_fun.h \
 beam/erl_process.h beam/beam_code.h beam/beam_file.h beam/beam_common.h
$(OBJDIR)/erl_io_queue.o: beam/erl_io_queue.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_bif_unique.h \
 beam/big.h
$(OBJDIR)/erl_lock_check.o: beam/erl_lock_check.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h
$(OBJDIR)/erl_lock_count.o: beam/erl_lock_count.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h
$(OBJDIR)/erl_lock_flags.o: beam/erl_lock_flags.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/erl_lock_flags.h
$(OBJDIR)/erl_map.o: beam/erl_map.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_bif_unique.h \
 beam/big.h beam/erl_global_literals.h beam/erl_map.h \
 x86_64-pc-linux-gnu/erl_map.ycf.h
$(OBJDIR)/erl_math.o: beam/erl_math.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/big.h
$(OBJDIR)/erl_message.o: beam/erl_message.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_bif_unique.h \
 beam/big.h beam/beam_bp.h
$(OBJDIR)/erl_monitor_link.o: beam/erl_monitor_link.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/erl_bif_unique.h \
 beam/big.h beam/erl_rbtree.h
$(OBJDIR)/erl_msacc.o: beam/erl_msacc.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/erl_bif_unique.h \
 beam/big.h beam/erl_map.h $(TTF_DIR)/erl_bif_table.h
$(OBJDIR)/erl_nfunc_sched.o: beam/erl_nfunc_sched.c \
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
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_nfunc_sched.h \
 beam/jit/beam_asm.h beam/bif.h beam/erl_fun.h beam/erl_process.h \
 beam/beam_code.h beam/beam_file.h beam/beam_types.h beam/beam_common.h
$(OBJDIR)/erl_nif.o: beam/erl_nif.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/erl_nif.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_nif_api_funcs.h beam/sys.h sys/unix/erl_unix_sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/global.h \
 beam/erl_alloc.h $(TTF_DIR)/erl_alloc_types.h \
 beam/erl_thr_progress.h beam/erl_alloc_util.h sys/common/erl_mseg.h \
 sys/common/erl_mmap.h beam/lttng-wrapper.h \
 beam/erl_sched_spec_pre_alloc.h beam/erl_vm.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_proc_sig_queue.h beam/erl_utils.h \
 beam/atom.h beam/index.h beam/hash.h \
 $(TTF_DIR)/erl_atom_table.h beam/erl_term_hashing.h \
 beam/code_ix.h $(TTF_DIR)/beam_opcodes.h beam/export.h \
 beam/module.h beam/beam_code.h beam/erl_process.h \
 beam/erl_process_lock.h beam/erl_port.h beam/erl_message.h \
 beam/external.h beam/erl_node_tables.h beam/erl_process_dict.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/dtrace-wrapper.h \
 beam/bif.h $(TTF_DIR)/erl_bif_table.h \
 beam/erl_bif_unique.h beam/big.h beam/erl_map.h beam/beam_bp.h \
 beam/beam_common.h beam/erl_nfunc_sched.h beam/jit/beam_asm.h beam/bif.h \
 beam/erl_fun.h beam/erl_process.h beam/beam_code.h beam/beam_file.h \
 beam/beam_types.h beam/beam_common.h beam/erl_global_literals.h
$(OBJDIR)/erl_node_tables.o: beam/erl_node_tables.c \
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
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/dist.h beam/big.h \
 beam/bif.h $(TTF_DIR)/erl_bif_table.h \
 beam/erl_bif_unique.h beam/erl_db_util.h beam/erl_flxctr.h \
 beam/erl_db_hash.h beam/erl_db_tree.h beam/erl_db_catree.h
$(OBJDIR)/erl_port_task.o: beam/erl_port_task.c \
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
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/dist.h \
 sys/common/erl_check_io.h beam/erl_sys_driver.h
$(OBJDIR)/erl_posix_str.o: beam/erl_posix_str.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 ../include/internal/erl_errno.h beam/sys.h sys/unix/erl_unix_sys.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/erl_driver.h \
 beam/erl_drv_nif.h ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h
$(OBJDIR)/erl_printf_term.o: beam/erl_printf_term.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/erl_printf_term.h ../include/internal/erl_printf_format.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 ../include/internal/erl_printf.h beam/sys.h sys/unix/erl_unix_sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/big.h beam/global.h \
 beam/erl_alloc.h $(TTF_DIR)/erl_alloc_types.h \
 beam/erl_thr_progress.h beam/erl_alloc_util.h sys/common/erl_mseg.h \
 sys/common/erl_mmap.h beam/lttng-wrapper.h \
 beam/erl_sched_spec_pre_alloc.h beam/erl_vm.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_proc_sig_queue.h beam/erl_utils.h \
 beam/atom.h beam/index.h beam/hash.h \
 $(TTF_DIR)/erl_atom_table.h beam/erl_term_hashing.h \
 beam/erl_drv_nif.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/erl_map.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_bif_unique.h
$(OBJDIR)/erl_process.o: beam/erl_process.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_db_util.h \
 beam/erl_flxctr.h beam/big.h beam/erl_bif_unique.h beam/erl_db_hash.h \
 beam/erl_db_tree.h beam/erl_db_catree.h beam/dist.h beam/beam_catches.h \
 beam/beam_bp.h beam/erl_cpu_topology.h beam/erl_thr_queue.h \
 beam/erl_nfunc_sched.h beam/jit/beam_asm.h beam/bif.h beam/erl_fun.h \
 beam/erl_process.h beam/beam_code.h beam/beam_file.h beam/beam_types.h \
 beam/beam_common.h sys/common/erl_check_io.h beam/erl_sys_driver.h \
 beam/beam_common.h
$(OBJDIR)/erl_process_dict.o: beam/erl_process_dict.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/big.h beam/dist.h \
 x86_64-pc-linux-gnu/erl_version.h
$(OBJDIR)/erl_process_dump.o: beam/erl_process_dump.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_db_util.h \
 beam/erl_flxctr.h beam/big.h beam/erl_bif_unique.h beam/erl_db_hash.h \
 beam/erl_db_tree.h beam/erl_db_catree.h beam/dist.h beam/beam_catches.h \
 beam/erl_map.h beam/beam_common.h beam/erl_global_literals.h
$(OBJDIR)/erl_process_lock.o: beam/erl_process_lock.c \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_process_dict.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/export.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/erl_bits.h
$(OBJDIR)/erl_proc_sig_queue.o: beam/erl_proc_sig_queue.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/dist.h \
 beam/beam_bp.h beam/bif.h $(TTF_DIR)/erl_bif_table.h \
 beam/erl_bif_unique.h beam/big.h
$(OBJDIR)/erl_ptab.o: beam/erl_ptab.c \
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
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_bif_unique.h \
 beam/big.h
$(OBJDIR)/erl_sched_spec_pre_alloc.o: beam/erl_sched_spec_pre_alloc.c \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_process_dict.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/export.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/erl_bits.h
$(OBJDIR)/erl_term.o: beam/erl_term.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/erl_map.h
$(OBJDIR)/erl_term_hashing.o: beam/erl_term_hashing.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/big.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_map.h \
 beam/erl_bif_unique.h
$(OBJDIR)/erl_thr_progress.o: beam/erl_thr_progress.c \
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
 $(TTF_DIR)/beam_opcodes.h beam/erl_bits.h beam/global.h \
 beam/module.h beam/beam_code.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h
$(OBJDIR)/erl_thr_queue.o: beam/erl_thr_queue.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/erl_thr_queue.h beam/sys.h sys/unix/erl_unix_sys.h \
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
 beam/lttng-wrapper.h beam/erl_sched_spec_pre_alloc.h beam/erl_process.h \
 beam/erl_process_lock.h beam/erl_port.h beam/erl_vm.h beam/erl_message.h \
 beam/erl_proc_sig_queue.h beam/external.h beam/erl_node_tables.h \
 beam/erl_process_dict.h beam/erl_node_container_utils.h beam/erl_ptab.h \
 beam/erl_time.h beam/erl_monitor_link.h beam/erl_utils.h beam/atom.h \
 beam/index.h beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h \
 beam/erl_port_task.h beam/erl_sys_driver.h beam/erl_driver.h \
 beam/erl_binary.h beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h \
 beam/erl_trace.h beam/erl_db.h beam/export.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/erl_bits.h
$(OBJDIR)/erl_time_sup.o: beam/erl_time_sup.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/erl_bif_unique.h \
 beam/big.h beam/bif.h $(TTF_DIR)/erl_bif_table.h
$(OBJDIR)/erl_trace.o: beam/erl_trace.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/big.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/dist.h beam/beam_bp.h \
 beam/erl_bif_unique.h beam/erl_map.h beam/erl_global_literals.h
$(OBJDIR)/erl_unicode.o: beam/erl_unicode.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_bif_unique.h \
 beam/big.h beam/erl_unicode.h beam/erl_unicode_normalize.h
$(OBJDIR)/erl_zlib.o: beam/erl_zlib.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/erl_zlib.h beam/sys.h sys/unix/erl_unix_sys.h \
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
 beam/lttng-wrapper.h beam/erl_sched_spec_pre_alloc.h
$(OBJDIR)/export.o: beam/export.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/jit/beam_asm.h \
 beam/bif.h $(TTF_DIR)/erl_bif_table.h beam/erl_fun.h \
 beam/erl_process.h beam/beam_code.h beam/beam_file.h beam/beam_types.h \
 beam/beam_common.h
$(OBJDIR)/external.o: beam/external.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/big.h beam/dist.h \
 beam/erl_bif_unique.h beam/erl_zlib.h beam/erl_map.h \
 beam/erl_global_literals.h
$(OBJDIR)/hash.o: beam/hash.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/hash.h
$(OBJDIR)/index.o: beam/index.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h
$(OBJDIR)/io.o: beam/io.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h beam/erl_sys_driver.h \
 beam/erl_driver.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/erl_vm.h beam/global.h beam/erl_alloc.h \
 $(TTF_DIR)/erl_alloc_types.h beam/erl_thr_progress.h \
 beam/erl_alloc_util.h sys/common/erl_mseg.h sys/common/erl_mmap.h \
 beam/lttng-wrapper.h beam/erl_sched_spec_pre_alloc.h \
 beam/erl_node_container_utils.h beam/erl_ptab.h beam/erl_time.h \
 beam/erl_monitor_link.h beam/erl_proc_sig_queue.h beam/erl_utils.h \
 beam/atom.h beam/index.h beam/hash.h \
 $(TTF_DIR)/erl_atom_table.h beam/erl_term_hashing.h \
 beam/code_ix.h $(TTF_DIR)/beam_opcodes.h beam/export.h \
 beam/module.h beam/beam_code.h beam/erl_process.h \
 beam/erl_process_lock.h beam/erl_port.h beam/erl_message.h \
 beam/external.h beam/erl_node_tables.h beam/erl_process_dict.h \
 beam/erl_port_task.h beam/erl_binary.h beam/erl_hl_timer.h \
 beam/erl_async.h beam/erl_gc.h beam/erl_trace.h beam/erl_db.h \
 beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/dtrace-wrapper.h \
 beam/dist.h beam/big.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_bif_unique.h \
 x86_64-pc-linux-gnu/erl_version.h beam/erl_map.h \
 beam/erl_global_literals.h
$(OBJDIR)/module.o: beam/module.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/beam_catches.h \
 beam/jit/beam_asm.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_fun.h \
 beam/erl_process.h beam/beam_code.h beam/beam_file.h beam/beam_types.h \
 beam/beam_common.h
$(OBJDIR)/packet_parser.o: beam/packet_parser.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/packet_parser.h beam/erl_driver.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/sys.h \
 sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_dyn_lock_check.h beam/erl_msacc.h
$(OBJDIR)/register.o: beam/register.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h
$(OBJDIR)/safe_hash.o: beam/safe_hash.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/safe_hash.h beam/sys.h sys/unix/erl_unix_sys.h \
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
 beam/lttng-wrapper.h beam/erl_sched_spec_pre_alloc.h
$(OBJDIR)/time.o: beam/time.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_trace.h \
 beam/erl_db.h beam/erl_bits.h openssl/include/erl_md5.h \
 openssl/include/openssl_local/md5.h beam/register.h beam/erl_fun.h \
 beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h
$(OBJDIR)/utils.o: beam/utils.c \
 $(ERL_TOP)/erts/x86_64-pc-linux-gnu/config.h \
 beam/sys.h sys/unix/erl_unix_sys.h ../include/internal/erl_errno.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h \
 beam/erl_lock_check.h beam/erl_threads.h beam/erl_lock_flags.h \
 beam/erl_term.h sys/common/erl_mmap.h beam/sys.h \
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
 beam/erl_sched_spec_pre_alloc.h beam/erl_node_container_utils.h \
 beam/erl_ptab.h beam/erl_time.h beam/erl_monitor_link.h \
 beam/erl_proc_sig_queue.h beam/erl_utils.h beam/atom.h beam/index.h \
 beam/hash.h $(TTF_DIR)/erl_atom_table.h \
 beam/erl_term_hashing.h beam/erl_drv_nif.h \
 ../include/x86_64-pc-linux-gnu/erl_int_sizes_config.h beam/code_ix.h \
 $(TTF_DIR)/beam_opcodes.h beam/export.h beam/module.h \
 beam/beam_code.h beam/erl_process.h beam/erl_process_lock.h \
 beam/erl_port.h beam/erl_message.h beam/external.h \
 beam/erl_node_tables.h beam/erl_process_dict.h beam/erl_port_task.h \
 beam/erl_sys_driver.h beam/erl_driver.h beam/erl_binary.h \
 beam/erl_hl_timer.h beam/erl_async.h beam/erl_gc.h beam/erl_map.h \
 beam/erl_fun.h beam/erl_bits.h beam/erl_trace.h beam/erl_db.h \
 openssl/include/erl_md5.h openssl/include/openssl_local/md5.h \
 beam/register.h beam/erl_debug.h beam/error.h sys/common/erl_poll.h \
 sys/common/erl_poll_api.h beam/erl_io_queue.h beam/erl_nif.h \
 beam/erl_nif_api_funcs.h beam/dtrace-wrapper.h beam/beam_file.h \
 beam/beam_types.h beam/big.h beam/bif.h \
 $(TTF_DIR)/erl_bif_table.h beam/erl_bif_unique.h \
 beam/packet_parser.h beam/erl_driver.h beam/erl_db_util.h \
 beam/erl_flxctr.h beam/erl_db_hash.h beam/erl_db_tree.h \
 beam/erl_db_catree.h beam/dist.h beam/erl_thr_queue.h beam/beam_bp.h \
 sys/common/erl_check_io.h beam/erl_sys_driver.h beam/erl_nfunc_sched.h \
 beam/jit/beam_asm.h beam/bif.h beam/erl_fun.h beam/erl_process.h \
 beam/beam_code.h beam/beam_file.h beam/beam_common.h beam/erl_unicode.h \
 beam/beam_common.h beam/erl_global_literals.h \
 x86_64-pc-linux-gnu/utils.ycf.h
