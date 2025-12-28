# Generated dependency rules
$(ST_OBJDIR)/ei_connect.o: connect/ei_connect.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 misc/ei_portio.h misc/ei_internal.h connect/ei_connect_int.h \
 misc/ei_locking.h connect/eisend.h connect/eirecv.h \
 openssl/include/erl_md5.h openssl/include/openssl_local/md5.h \
 misc/putget.h connect/ei_resolve.h epmd/ei_epmd.h
$(ST_OBJDIR)/ei_resolve.o: connect/ei_resolve.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h connect/ei_resolve.h \
 misc/ei_locking.h
$(ST_OBJDIR)/eirecv.o: connect/eirecv.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/eiext.h connect/eirecv.h misc/ei_portio.h \
 misc/ei_internal.h misc/putget.h misc/ei_trace.h misc/show_msg.h \
 connect/ei_connect_int.h
$(ST_OBJDIR)/send.o: connect/send.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/eiext.h connect/eisend.h misc/putget.h \
 connect/ei_connect_int.h misc/ei_internal.h misc/ei_trace.h \
 misc/ei_portio.h misc/show_msg.h
$(ST_OBJDIR)/send_exit.o: connect/send_exit.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 connect/eisend.h connect/ei_connect_int.h misc/ei_trace.h \
 misc/ei_internal.h misc/putget.h misc/ei_portio.h misc/show_msg.h
$(ST_OBJDIR)/send_reg.o: connect/send_reg.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/eiext.h connect/eisend.h misc/putget.h \
 connect/ei_connect_int.h misc/ei_internal.h misc/ei_trace.h \
 misc/ei_portio.h misc/show_msg.h
$(ST_OBJDIR)/decode_atom.o: decode/decode_atom.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/decode_big.o: decode/decode_big.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/decode_bignum.o: decode/decode_bignum.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h
$(ST_OBJDIR)/decode_binary.o: decode/decode_binary.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/decode_boolean.o: decode/decode_boolean.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/decode_char.o: decode/decode_char.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/decode_double.o: decode/decode_double.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/decode_fun.o: decode/decode_fun.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 misc/ei_malloc.h decode/decode_skip.h misc/putget.h
$(ST_OBJDIR)/decode_intlist.o: decode/decode_intlist.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/decode_iodata.o: decode/decode_iodata.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/decode_list_header.o: decode/decode_list_header.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/decode_long.o: decode/decode_long.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/decode_pid.o: decode/decode_pid.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/decode_port.o: decode/decode_port.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/decode_ref.o: decode/decode_ref.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/decode_skip.o: decode/decode_skip.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 decode/decode_skip.h
$(ST_OBJDIR)/decode_string.o: decode/decode_string.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/decode_trace.o: decode/decode_trace.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/putget.h
$(ST_OBJDIR)/decode_tuple_header.o: decode/decode_tuple_header.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/decode_ulong.o: decode/decode_ulong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/decode_version.o: decode/decode_version.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/decode_longlong.o: decode/decode_longlong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/decode_ulonglong.o: decode/decode_ulonglong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/encode_atom.o: encode/encode_atom.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/encode_big.o: encode/encode_big.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h \
 misc/ei_x_encode.h
$(ST_OBJDIR)/encode_bignum.o: encode/encode_bignum.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h
$(ST_OBJDIR)/encode_binary.o: encode/encode_binary.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/encode_boolean.o: encode/encode_boolean.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/encode_char.o: encode/encode_char.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/encode_double.o: encode/encode_double.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/encode_fun.o: encode/encode_fun.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/encode_list_header.o: encode/encode_list_header.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/encode_long.o: encode/encode_long.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/encode_pid.o: encode/encode_pid.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/encode_port.o: encode/encode_port.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/encode_ref.o: encode/encode_ref.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/encode_string.o: encode/encode_string.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/encode_trace.o: encode/encode_trace.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/putget.h
$(ST_OBJDIR)/encode_tuple_header.o: encode/encode_tuple_header.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/encode_ulong.o: encode/encode_ulong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/encode_version.o: encode/encode_version.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/encode_longlong.o: encode/encode_longlong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h \
 misc/ei_x_encode.h
$(ST_OBJDIR)/encode_ulonglong.o: encode/encode_ulonglong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h \
 misc/ei_x_encode.h
$(ST_OBJDIR)/epmd_port.o: epmd/epmd_port.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_internal.h epmd/ei_epmd.h misc/ei_portio.h \
 misc/putget.h
$(ST_OBJDIR)/epmd_publish.o: epmd/epmd_publish.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/ei_internal.h \
 misc/putget.h epmd/ei_epmd.h misc/ei_portio.h
$(ST_OBJDIR)/epmd_unpublish.o: epmd/epmd_unpublish.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/ei_internal.h \
 misc/putget.h epmd/ei_epmd.h misc/ei_portio.h
$(ST_OBJDIR)/ei_decode_term.o: misc/ei_decode_term.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 misc/ei_decode_term.h misc/putget.h
$(ST_OBJDIR)/ei_format.o: misc/ei_format.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_malloc.h misc/ei_format.h
$(ST_OBJDIR)/ei_locking.o: misc/ei_locking.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_malloc.h misc/ei_locking.h
$(ST_OBJDIR)/ei_malloc.o: misc/ei_malloc.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_malloc.h
$(ST_OBJDIR)/ei_portio.o: misc/ei_portio.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_portio.h misc/ei_internal.h
$(ST_OBJDIR)/ei_printterm.o: misc/ei_printterm.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 misc/ei_printterm.h misc/ei_malloc.h
$(ST_OBJDIR)/ei_pthreads.o: misc/ei_pthreads.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/ei_locking.h
$(ST_OBJDIR)/ei_trace.o: misc/ei_trace.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_trace.h
$(ST_OBJDIR)/ei_x_encode.o: misc/ei_x_encode.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/ei_x_encode.h \
 misc/ei_malloc.h
$(ST_OBJDIR)/get_type.o: misc/get_type.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/eiext.h misc/putget.h
$(ST_OBJDIR)/show_msg.o: misc/show_msg.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/eiext.h misc/putget.h misc/ei_printterm.h \
 misc/ei_internal.h misc/show_msg.h
$(ST_OBJDIR)/ei_compat.o: misc/ei_compat.c ../include/ei.h misc/ei_internal.h
$(ST_OBJDIR)/ei_init.o: misc/ei_init.c ../include/ei.h connect/ei_resolve.h \
 misc/ei_internal.h
$(ST_OBJDIR)/ei_cmp_nc.o: misc/ei_cmp_nc.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h
$(ST_OBJDIR)/global_names.o: global/global_names.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 connect/eisend.h connect/eirecv.h connect/ei_connect_int.h \
 ../include/ei_connect.h ../include/ei.h misc/ei_internal.h
$(ST_OBJDIR)/global_register.o: global/global_register.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 connect/eisend.h connect/eirecv.h misc/ei_internal.h
$(ST_OBJDIR)/global_unregister.o: global/global_unregister.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 connect/eisend.h connect/eirecv.h connect/ei_connect_int.h \
 ../include/ei_connect.h ../include/ei.h misc/ei_internal.h
$(ST_OBJDIR)/global_whereis.o: global/global_whereis.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 connect/eisend.h connect/eirecv.h connect/ei_connect_int.h \
 ../include/ei_connect.h ../include/ei.h misc/ei_internal.h
$(ST_OBJDIR)/md5_dgst.o: openssl/crypto/md5/md5_dgst.c openssl/crypto/md5/md5_local.h \
 openssl/include/openssl_local/md5.h openssl/include/erl_md5.h \
 openssl/include/crypto/md32_common.h

$(MT_OBJDIR)/ei_connect.o: connect/ei_connect.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 misc/ei_portio.h misc/ei_internal.h connect/ei_connect_int.h \
 misc/ei_locking.h connect/eisend.h connect/eirecv.h \
 openssl/include/erl_md5.h openssl/include/openssl_local/md5.h \
 misc/putget.h connect/ei_resolve.h epmd/ei_epmd.h
$(MT_OBJDIR)/ei_resolve.o: connect/ei_resolve.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h connect/ei_resolve.h \
 misc/ei_locking.h
$(MT_OBJDIR)/eirecv.o: connect/eirecv.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/eiext.h connect/eirecv.h misc/ei_portio.h \
 misc/ei_internal.h misc/putget.h misc/ei_trace.h misc/show_msg.h \
 connect/ei_connect_int.h
$(MT_OBJDIR)/send.o: connect/send.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/eiext.h connect/eisend.h misc/putget.h \
 connect/ei_connect_int.h misc/ei_internal.h misc/ei_trace.h \
 misc/ei_portio.h misc/show_msg.h
$(MT_OBJDIR)/send_exit.o: connect/send_exit.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 connect/eisend.h connect/ei_connect_int.h misc/ei_trace.h \
 misc/ei_internal.h misc/putget.h misc/ei_portio.h misc/show_msg.h
$(MT_OBJDIR)/send_reg.o: connect/send_reg.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/eiext.h connect/eisend.h misc/putget.h \
 connect/ei_connect_int.h misc/ei_internal.h misc/ei_trace.h \
 misc/ei_portio.h misc/show_msg.h
$(MT_OBJDIR)/decode_atom.o: decode/decode_atom.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/decode_big.o: decode/decode_big.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/decode_bignum.o: decode/decode_bignum.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h
$(MT_OBJDIR)/decode_binary.o: decode/decode_binary.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/decode_boolean.o: decode/decode_boolean.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/decode_char.o: decode/decode_char.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/decode_double.o: decode/decode_double.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/decode_fun.o: decode/decode_fun.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 misc/ei_malloc.h decode/decode_skip.h misc/putget.h
$(MT_OBJDIR)/decode_intlist.o: decode/decode_intlist.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/decode_iodata.o: decode/decode_iodata.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/decode_list_header.o: decode/decode_list_header.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/decode_long.o: decode/decode_long.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/decode_pid.o: decode/decode_pid.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/decode_port.o: decode/decode_port.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/decode_ref.o: decode/decode_ref.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/decode_skip.o: decode/decode_skip.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 decode/decode_skip.h
$(MT_OBJDIR)/decode_string.o: decode/decode_string.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/decode_trace.o: decode/decode_trace.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/putget.h
$(MT_OBJDIR)/decode_tuple_header.o: decode/decode_tuple_header.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/decode_ulong.o: decode/decode_ulong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/decode_version.o: decode/decode_version.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/decode_longlong.o: decode/decode_longlong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/decode_ulonglong.o: decode/decode_ulonglong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/encode_atom.o: encode/encode_atom.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/encode_big.o: encode/encode_big.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h \
 misc/ei_x_encode.h
$(MT_OBJDIR)/encode_bignum.o: encode/encode_bignum.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h
$(MT_OBJDIR)/encode_binary.o: encode/encode_binary.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/encode_boolean.o: encode/encode_boolean.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/encode_char.o: encode/encode_char.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/encode_double.o: encode/encode_double.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/encode_fun.o: encode/encode_fun.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/encode_list_header.o: encode/encode_list_header.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/encode_long.o: encode/encode_long.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/encode_pid.o: encode/encode_pid.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/encode_port.o: encode/encode_port.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/encode_ref.o: encode/encode_ref.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/encode_string.o: encode/encode_string.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/encode_trace.o: encode/encode_trace.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/putget.h
$(MT_OBJDIR)/encode_tuple_header.o: encode/encode_tuple_header.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/encode_ulong.o: encode/encode_ulong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/encode_version.o: encode/encode_version.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/encode_longlong.o: encode/encode_longlong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h \
 misc/ei_x_encode.h
$(MT_OBJDIR)/encode_ulonglong.o: encode/encode_ulonglong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h \
 misc/ei_x_encode.h
$(MT_OBJDIR)/epmd_port.o: epmd/epmd_port.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_internal.h epmd/ei_epmd.h misc/ei_portio.h \
 misc/putget.h
$(MT_OBJDIR)/epmd_publish.o: epmd/epmd_publish.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/ei_internal.h \
 misc/putget.h epmd/ei_epmd.h misc/ei_portio.h
$(MT_OBJDIR)/epmd_unpublish.o: epmd/epmd_unpublish.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/ei_internal.h \
 misc/putget.h epmd/ei_epmd.h misc/ei_portio.h
$(MT_OBJDIR)/ei_decode_term.o: misc/ei_decode_term.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 misc/ei_decode_term.h misc/putget.h
$(MT_OBJDIR)/ei_format.o: misc/ei_format.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_malloc.h misc/ei_format.h
$(MT_OBJDIR)/ei_locking.o: misc/ei_locking.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_malloc.h misc/ei_locking.h
$(MT_OBJDIR)/ei_malloc.o: misc/ei_malloc.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_malloc.h
$(MT_OBJDIR)/ei_portio.o: misc/ei_portio.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_portio.h misc/ei_internal.h
$(MT_OBJDIR)/ei_printterm.o: misc/ei_printterm.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 misc/ei_printterm.h misc/ei_malloc.h
$(MT_OBJDIR)/ei_pthreads.o: misc/ei_pthreads.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/ei_locking.h
$(MT_OBJDIR)/ei_trace.o: misc/ei_trace.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_trace.h
$(MT_OBJDIR)/ei_x_encode.o: misc/ei_x_encode.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/ei_x_encode.h \
 misc/ei_malloc.h
$(MT_OBJDIR)/get_type.o: misc/get_type.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/eiext.h misc/putget.h
$(MT_OBJDIR)/show_msg.o: misc/show_msg.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/eiext.h misc/putget.h misc/ei_printterm.h \
 misc/ei_internal.h misc/show_msg.h
$(MT_OBJDIR)/ei_compat.o: misc/ei_compat.c ../include/ei.h misc/ei_internal.h
$(MT_OBJDIR)/ei_init.o: misc/ei_init.c ../include/ei.h connect/ei_resolve.h \
 misc/ei_internal.h
$(MT_OBJDIR)/ei_cmp_nc.o: misc/ei_cmp_nc.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h
$(MT_OBJDIR)/global_names.o: global/global_names.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 connect/eisend.h connect/eirecv.h connect/ei_connect_int.h \
 ../include/ei_connect.h ../include/ei.h misc/ei_internal.h
$(MT_OBJDIR)/global_register.o: global/global_register.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 connect/eisend.h connect/eirecv.h misc/ei_internal.h
$(MT_OBJDIR)/global_unregister.o: global/global_unregister.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 connect/eisend.h connect/eirecv.h connect/ei_connect_int.h \
 ../include/ei_connect.h ../include/ei.h misc/ei_internal.h
$(MT_OBJDIR)/global_whereis.o: global/global_whereis.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 connect/eisend.h connect/eirecv.h connect/ei_connect_int.h \
 ../include/ei_connect.h ../include/ei.h misc/ei_internal.h
$(MT_OBJDIR)/md5_dgst.o: openssl/crypto/md5/md5_dgst.c openssl/crypto/md5/md5_local.h \
 openssl/include/openssl_local/md5.h openssl/include/erl_md5.h \
 openssl/include/crypto/md32_common.h

$(MD_OBJDIR)/ei_connect.o: connect/ei_connect.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 misc/ei_portio.h misc/ei_internal.h connect/ei_connect_int.h \
 misc/ei_locking.h connect/eisend.h connect/eirecv.h \
 openssl/include/erl_md5.h openssl/include/openssl_local/md5.h \
 misc/putget.h connect/ei_resolve.h epmd/ei_epmd.h
$(MD_OBJDIR)/ei_resolve.o: connect/ei_resolve.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h connect/ei_resolve.h \
 misc/ei_locking.h
$(MD_OBJDIR)/eirecv.o: connect/eirecv.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/eiext.h connect/eirecv.h misc/ei_portio.h \
 misc/ei_internal.h misc/putget.h misc/ei_trace.h misc/show_msg.h \
 connect/ei_connect_int.h
$(MD_OBJDIR)/send.o: connect/send.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/eiext.h connect/eisend.h misc/putget.h \
 connect/ei_connect_int.h misc/ei_internal.h misc/ei_trace.h \
 misc/ei_portio.h misc/show_msg.h
$(MD_OBJDIR)/send_exit.o: connect/send_exit.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 connect/eisend.h connect/ei_connect_int.h misc/ei_trace.h \
 misc/ei_internal.h misc/putget.h misc/ei_portio.h misc/show_msg.h
$(MD_OBJDIR)/send_reg.o: connect/send_reg.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/eiext.h connect/eisend.h misc/putget.h \
 connect/ei_connect_int.h misc/ei_internal.h misc/ei_trace.h \
 misc/ei_portio.h misc/show_msg.h
$(MD_OBJDIR)/decode_atom.o: decode/decode_atom.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/decode_big.o: decode/decode_big.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/decode_bignum.o: decode/decode_bignum.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h
$(MD_OBJDIR)/decode_binary.o: decode/decode_binary.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/decode_boolean.o: decode/decode_boolean.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/decode_char.o: decode/decode_char.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/decode_double.o: decode/decode_double.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/decode_fun.o: decode/decode_fun.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 misc/ei_malloc.h decode/decode_skip.h misc/putget.h
$(MD_OBJDIR)/decode_intlist.o: decode/decode_intlist.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/decode_iodata.o: decode/decode_iodata.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/decode_list_header.o: decode/decode_list_header.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/decode_long.o: decode/decode_long.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/decode_pid.o: decode/decode_pid.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/decode_port.o: decode/decode_port.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/decode_ref.o: decode/decode_ref.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/decode_skip.o: decode/decode_skip.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 decode/decode_skip.h
$(MD_OBJDIR)/decode_string.o: decode/decode_string.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/decode_trace.o: decode/decode_trace.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/putget.h
$(MD_OBJDIR)/decode_tuple_header.o: decode/decode_tuple_header.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/decode_ulong.o: decode/decode_ulong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/decode_version.o: decode/decode_version.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/decode_longlong.o: decode/decode_longlong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/decode_ulonglong.o: decode/decode_ulonglong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/encode_atom.o: encode/encode_atom.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/encode_big.o: encode/encode_big.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h \
 misc/ei_x_encode.h
$(MD_OBJDIR)/encode_bignum.o: encode/encode_bignum.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h
$(MD_OBJDIR)/encode_binary.o: encode/encode_binary.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/encode_boolean.o: encode/encode_boolean.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/encode_char.o: encode/encode_char.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/encode_double.o: encode/encode_double.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/encode_fun.o: encode/encode_fun.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/encode_list_header.o: encode/encode_list_header.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/encode_long.o: encode/encode_long.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/encode_pid.o: encode/encode_pid.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/encode_port.o: encode/encode_port.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/encode_ref.o: encode/encode_ref.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/encode_string.o: encode/encode_string.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/encode_trace.o: encode/encode_trace.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/putget.h
$(MD_OBJDIR)/encode_tuple_header.o: encode/encode_tuple_header.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/encode_ulong.o: encode/encode_ulong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/encode_version.o: encode/encode_version.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/encode_longlong.o: encode/encode_longlong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h \
 misc/ei_x_encode.h
$(MD_OBJDIR)/encode_ulonglong.o: encode/encode_ulonglong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h \
 misc/ei_x_encode.h
$(MD_OBJDIR)/epmd_port.o: epmd/epmd_port.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_internal.h epmd/ei_epmd.h misc/ei_portio.h \
 misc/putget.h
$(MD_OBJDIR)/epmd_publish.o: epmd/epmd_publish.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/ei_internal.h \
 misc/putget.h epmd/ei_epmd.h misc/ei_portio.h
$(MD_OBJDIR)/epmd_unpublish.o: epmd/epmd_unpublish.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/ei_internal.h \
 misc/putget.h epmd/ei_epmd.h misc/ei_portio.h
$(MD_OBJDIR)/ei_decode_term.o: misc/ei_decode_term.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 misc/ei_decode_term.h misc/putget.h
$(MD_OBJDIR)/ei_format.o: misc/ei_format.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_malloc.h misc/ei_format.h
$(MD_OBJDIR)/ei_locking.o: misc/ei_locking.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_malloc.h misc/ei_locking.h
$(MD_OBJDIR)/ei_malloc.o: misc/ei_malloc.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_malloc.h
$(MD_OBJDIR)/ei_portio.o: misc/ei_portio.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_portio.h misc/ei_internal.h
$(MD_OBJDIR)/ei_printterm.o: misc/ei_printterm.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 misc/ei_printterm.h misc/ei_malloc.h
$(MD_OBJDIR)/ei_pthreads.o: misc/ei_pthreads.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/ei_locking.h
$(MD_OBJDIR)/ei_trace.o: misc/ei_trace.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_trace.h
$(MD_OBJDIR)/ei_x_encode.o: misc/ei_x_encode.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/ei_x_encode.h \
 misc/ei_malloc.h
$(MD_OBJDIR)/get_type.o: misc/get_type.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/eiext.h misc/putget.h
$(MD_OBJDIR)/show_msg.o: misc/show_msg.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/eiext.h misc/putget.h misc/ei_printterm.h \
 misc/ei_internal.h misc/show_msg.h
$(MD_OBJDIR)/ei_compat.o: misc/ei_compat.c ../include/ei.h misc/ei_internal.h
$(MD_OBJDIR)/ei_init.o: misc/ei_init.c ../include/ei.h connect/ei_resolve.h \
 misc/ei_internal.h
$(MD_OBJDIR)/ei_cmp_nc.o: misc/ei_cmp_nc.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h
$(MD_OBJDIR)/global_names.o: global/global_names.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 connect/eisend.h connect/eirecv.h connect/ei_connect_int.h \
 ../include/ei_connect.h ../include/ei.h misc/ei_internal.h
$(MD_OBJDIR)/global_register.o: global/global_register.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 connect/eisend.h connect/eirecv.h misc/ei_internal.h
$(MD_OBJDIR)/global_unregister.o: global/global_unregister.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 connect/eisend.h connect/eirecv.h connect/ei_connect_int.h \
 ../include/ei_connect.h ../include/ei.h misc/ei_internal.h
$(MD_OBJDIR)/global_whereis.o: global/global_whereis.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 connect/eisend.h connect/eirecv.h connect/ei_connect_int.h \
 ../include/ei_connect.h ../include/ei.h misc/ei_internal.h
$(MD_OBJDIR)/md5_dgst.o: openssl/crypto/md5/md5_dgst.c openssl/crypto/md5/md5_local.h \
 openssl/include/openssl_local/md5.h openssl/include/erl_md5.h \
 openssl/include/crypto/md32_common.h

$(MDD_OBJDIR)/ei_connect.o: connect/ei_connect.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 misc/ei_portio.h misc/ei_internal.h connect/ei_connect_int.h \
 misc/ei_locking.h connect/eisend.h connect/eirecv.h \
 openssl/include/erl_md5.h openssl/include/openssl_local/md5.h \
 misc/putget.h connect/ei_resolve.h epmd/ei_epmd.h
$(MDD_OBJDIR)/ei_resolve.o: connect/ei_resolve.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h connect/ei_resolve.h \
 misc/ei_locking.h
$(MDD_OBJDIR)/eirecv.o: connect/eirecv.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/eiext.h connect/eirecv.h misc/ei_portio.h \
 misc/ei_internal.h misc/putget.h misc/ei_trace.h misc/show_msg.h \
 connect/ei_connect_int.h
$(MDD_OBJDIR)/send.o: connect/send.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/eiext.h connect/eisend.h misc/putget.h \
 connect/ei_connect_int.h misc/ei_internal.h misc/ei_trace.h \
 misc/ei_portio.h misc/show_msg.h
$(MDD_OBJDIR)/send_exit.o: connect/send_exit.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 connect/eisend.h connect/ei_connect_int.h misc/ei_trace.h \
 misc/ei_internal.h misc/putget.h misc/ei_portio.h misc/show_msg.h
$(MDD_OBJDIR)/send_reg.o: connect/send_reg.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/eiext.h connect/eisend.h misc/putget.h \
 connect/ei_connect_int.h misc/ei_internal.h misc/ei_trace.h \
 misc/ei_portio.h misc/show_msg.h
$(MDD_OBJDIR)/decode_atom.o: decode/decode_atom.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/decode_big.o: decode/decode_big.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/decode_bignum.o: decode/decode_bignum.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h
$(MDD_OBJDIR)/decode_binary.o: decode/decode_binary.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/decode_boolean.o: decode/decode_boolean.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/decode_char.o: decode/decode_char.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/decode_double.o: decode/decode_double.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/decode_fun.o: decode/decode_fun.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 misc/ei_malloc.h decode/decode_skip.h misc/putget.h
$(MDD_OBJDIR)/decode_intlist.o: decode/decode_intlist.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/decode_iodata.o: decode/decode_iodata.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/decode_list_header.o: decode/decode_list_header.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/decode_long.o: decode/decode_long.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/decode_pid.o: decode/decode_pid.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/decode_port.o: decode/decode_port.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/decode_ref.o: decode/decode_ref.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/decode_skip.o: decode/decode_skip.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 decode/decode_skip.h
$(MDD_OBJDIR)/decode_string.o: decode/decode_string.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/decode_trace.o: decode/decode_trace.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/putget.h
$(MDD_OBJDIR)/decode_tuple_header.o: decode/decode_tuple_header.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/decode_ulong.o: decode/decode_ulong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/decode_version.o: decode/decode_version.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/decode_longlong.o: decode/decode_longlong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/decode_ulonglong.o: decode/decode_ulonglong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/encode_atom.o: encode/encode_atom.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/encode_big.o: encode/encode_big.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h \
 misc/ei_x_encode.h
$(MDD_OBJDIR)/encode_bignum.o: encode/encode_bignum.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h
$(MDD_OBJDIR)/encode_binary.o: encode/encode_binary.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/encode_boolean.o: encode/encode_boolean.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/encode_char.o: encode/encode_char.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/encode_double.o: encode/encode_double.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/encode_fun.o: encode/encode_fun.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/encode_list_header.o: encode/encode_list_header.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/encode_long.o: encode/encode_long.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/encode_pid.o: encode/encode_pid.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/encode_port.o: encode/encode_port.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/encode_ref.o: encode/encode_ref.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/encode_string.o: encode/encode_string.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/encode_trace.o: encode/encode_trace.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/putget.h
$(MDD_OBJDIR)/encode_tuple_header.o: encode/encode_tuple_header.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/encode_ulong.o: encode/encode_ulong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/encode_version.o: encode/encode_version.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/encode_longlong.o: encode/encode_longlong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h \
 misc/ei_x_encode.h
$(MDD_OBJDIR)/encode_ulonglong.o: encode/encode_ulonglong.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h misc/putget.h \
 misc/ei_x_encode.h
$(MDD_OBJDIR)/epmd_port.o: epmd/epmd_port.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_internal.h epmd/ei_epmd.h misc/ei_portio.h \
 misc/putget.h
$(MDD_OBJDIR)/epmd_publish.o: epmd/epmd_publish.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/ei_internal.h \
 misc/putget.h epmd/ei_epmd.h misc/ei_portio.h
$(MDD_OBJDIR)/epmd_unpublish.o: epmd/epmd_unpublish.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/ei_internal.h \
 misc/putget.h epmd/ei_epmd.h misc/ei_portio.h
$(MDD_OBJDIR)/ei_decode_term.o: misc/ei_decode_term.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 misc/ei_decode_term.h misc/putget.h
$(MDD_OBJDIR)/ei_format.o: misc/ei_format.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_malloc.h misc/ei_format.h
$(MDD_OBJDIR)/ei_locking.o: misc/ei_locking.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_malloc.h misc/ei_locking.h
$(MDD_OBJDIR)/ei_malloc.o: misc/ei_malloc.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_malloc.h
$(MDD_OBJDIR)/ei_portio.o: misc/ei_portio.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_portio.h misc/ei_internal.h
$(MDD_OBJDIR)/ei_printterm.o: misc/ei_printterm.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 misc/ei_printterm.h misc/ei_malloc.h
$(MDD_OBJDIR)/ei_pthreads.o: misc/ei_pthreads.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/ei_locking.h
$(MDD_OBJDIR)/ei_trace.o: misc/ei_trace.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/ei_trace.h
$(MDD_OBJDIR)/ei_x_encode.o: misc/ei_x_encode.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/ei_x_encode.h \
 misc/ei_malloc.h
$(MDD_OBJDIR)/get_type.o: misc/get_type.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/eiext.h misc/putget.h
$(MDD_OBJDIR)/show_msg.o: misc/show_msg.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h misc/eiext.h misc/putget.h misc/ei_printterm.h \
 misc/ei_internal.h misc/show_msg.h
$(MDD_OBJDIR)/ei_compat.o: misc/ei_compat.c ../include/ei.h misc/ei_internal.h
$(MDD_OBJDIR)/ei_init.o: misc/ei_init.c ../include/ei.h connect/ei_resolve.h \
 misc/ei_internal.h
$(MDD_OBJDIR)/ei_cmp_nc.o: misc/ei_cmp_nc.c misc/eidef.h $(TARGET)/config.h \
 ../include/ei.h
$(MDD_OBJDIR)/global_names.o: global/global_names.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 connect/eisend.h connect/eirecv.h connect/ei_connect_int.h \
 ../include/ei_connect.h ../include/ei.h misc/ei_internal.h
$(MDD_OBJDIR)/global_register.o: global/global_register.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 connect/eisend.h connect/eirecv.h misc/ei_internal.h
$(MDD_OBJDIR)/global_unregister.o: global/global_unregister.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 connect/eisend.h connect/eirecv.h connect/ei_connect_int.h \
 ../include/ei_connect.h ../include/ei.h misc/ei_internal.h
$(MDD_OBJDIR)/global_whereis.o: global/global_whereis.c misc/eidef.h \
 $(TARGET)/config.h ../include/ei.h misc/eiext.h \
 connect/eisend.h connect/eirecv.h connect/ei_connect_int.h \
 ../include/ei_connect.h ../include/ei.h misc/ei_internal.h
$(MDD_OBJDIR)/md5_dgst.o: openssl/crypto/md5/md5_dgst.c openssl/crypto/md5/md5_local.h \
 openssl/include/openssl_local/md5.h openssl/include/erl_md5.h \
 openssl/include/crypto/md32_common.h

