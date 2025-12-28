ssh.$(EMULATOR): ssh.erl ssh.hrl ssh_connect.hrl \
  ../../public_key/include/public_key.hrl \
  ../../public_key/include/OTP-PUB-KEY.hrl \
  ../../public_key/include/PKCS-FRAME.hrl \
  ../../kernel/include/file.hrl \
  ../../kernel/include/inet.hrl
$(EBIN)/ssh_acceptor.$(EMULATOR): ssh_acceptor.erl ssh.hrl
$(EBIN)/ssh_acceptor_sup.$(EMULATOR): ssh_acceptor_sup.erl ssh.hrl
$(EBIN)/ssh_agent.$(EMULATOR): ssh_agent.erl ssh.hrl ssh_agent.hrl
$(EBIN)/ssh_app.$(EMULATOR): ssh_app.erl
$(EBIN)/ssh_auth.$(EMULATOR): ssh_auth.erl \
  ../../public_key/include/public_key.hrl \
  ../../public_key/include/OTP-PUB-KEY.hrl \
  ../../public_key/include/PKCS-FRAME.hrl \
  ssh.hrl ssh_auth.hrl ssh_agent.hrl ssh_transport.hrl
$(EBIN)/ssh_bits.$(EMULATOR): ssh_bits.erl ssh.hrl
$(EBIN)/ssh_channel_sup.$(EMULATOR): ssh_channel_sup.erl ssh.hrl
$(EBIN)/ssh_cli.$(EMULATOR): ssh_cli.erl ssh.hrl ssh_connect.hrl
$(EBIN)/ssh_connection.$(EMULATOR): ssh_connection.erl ssh.hrl ssh_connect.hrl \
  ssh_transport.hrl
$(EBIN)/ssh_connection_handler.$(EMULATOR): ssh_connection_handler.erl ssh.hrl \
  ssh_transport.hrl ssh_auth.hrl ssh_connect.hrl ssh_fsm.hrl
$(EBIN)/ssh_file.$(EMULATOR): ssh_file.erl \
  ../../public_key/include/public_key.hrl \
  ../../public_key/include/OTP-PUB-KEY.hrl \
  ../../public_key/include/PKCS-FRAME.hrl \
  ../../kernel/include/file.hrl \
  ssh.hrl
$(EBIN)/ssh_fsm_kexinit.$(EMULATOR): ssh_fsm_kexinit.erl ssh.hrl ssh_transport.hrl \
  ssh_auth.hrl ssh_connect.hrl ssh_fsm.hrl
$(EBIN)/ssh_fsm_userauth_client.$(EMULATOR): ssh_fsm_userauth_client.erl ssh.hrl \
  ssh_transport.hrl ssh_auth.hrl ssh_connect.hrl ssh_fsm.hrl
$(EBIN)/ssh_fsm_userauth_server.$(EMULATOR): ssh_fsm_userauth_server.erl ssh.hrl \
  ssh_transport.hrl ssh_auth.hrl ssh_connect.hrl ssh_fsm.hrl
$(EBIN)/ssh_info.$(EMULATOR): ssh_info.erl ssh.hrl ssh_connect.hrl
$(EBIN)/ssh_io.$(EMULATOR): ssh_io.erl ssh.hrl
$(EBIN)/ssh_lib.$(EMULATOR): ssh_lib.erl ssh.hrl
$(EBIN)/ssh_message.$(EMULATOR): ssh_message.erl \
  ../../public_key/include/public_key.hrl \
  ../../public_key/include/OTP-PUB-KEY.hrl \
  ../../public_key/include/PKCS-FRAME.hrl \
  ssh.hrl ssh_connect.hrl ssh_auth.hrl ssh_transport.hrl
$(EBIN)/ssh_no_io.$(EMULATOR): ssh_no_io.erl ssh_transport.hrl
$(EBIN)/ssh_options.$(EMULATOR): ssh_options.erl ssh.hrl \
  ../../kernel/include/file.hrl
$(EBIN)/ssh_sftp.$(EMULATOR): ssh_sftp.erl \
  ../../kernel/include/file.hrl \
  ssh.hrl ssh_xfer.hrl
$(EBIN)/ssh_sftpd.$(EMULATOR): ssh_sftpd.erl \
  ../../kernel/include/file.hrl \
  ssh.hrl ssh_xfer.hrl ssh_connect.hrl
$(EBIN)/ssh_sftpd_file.$(EMULATOR): ssh_sftpd_file.erl
$(EBIN)/ssh_shell.$(EMULATOR): ssh_shell.erl ssh.hrl ssh_connect.hrl
$(EBIN)/ssh_subsystem_sup.$(EMULATOR): ssh_subsystem_sup.erl ssh.hrl
$(EBIN)/ssh_system_sup.$(EMULATOR): ssh_system_sup.erl ssh.hrl
$(EBIN)/ssh_tcpip_forward_srv.$(EMULATOR): ssh_tcpip_forward_srv.erl
$(EBIN)/ssh_tcpip_forward_client.$(EMULATOR): ssh_tcpip_forward_client.erl
$(EBIN)/ssh_tcpip_forward_acceptor_sup.$(EMULATOR): ssh_tcpip_forward_acceptor_sup.erl \
  ssh.hrl
$(EBIN)/ssh_tcpip_forward_acceptor.$(EMULATOR): ssh_tcpip_forward_acceptor.erl ssh.hrl
$(EBIN)/ssh_transport.$(EMULATOR): ssh_transport.erl \
  ../../public_key/include/public_key.hrl \
  ../../public_key/include/OTP-PUB-KEY.hrl \
  ../../public_key/include/PKCS-FRAME.hrl \
  ../../kernel/include/inet.hrl \
  ssh_transport.hrl ssh.hrl
$(EBIN)/ssh_xfer.$(EMULATOR): ssh_xfer.erl ssh.hrl ssh_xfer.hrl
$(EBIN)/ssh_dbg.$(EMULATOR): ssh_dbg.erl ssh.hrl ssh_transport.hrl ssh_connect.hrl \
  ssh_auth.hrl
$(EBIN)/ssh_client_key_api.$(EMULATOR): ssh_client_key_api.erl \
  ../../public_key/include/public_key.hrl \
  ../../public_key/include/OTP-PUB-KEY.hrl \
  ../../public_key/include/PKCS-FRAME.hrl \
  ssh.hrl
$(EBIN)/ssh_daemon_channel.$(EMULATOR): ssh_daemon_channel.erl
$(EBIN)/ssh_server_channel.$(EMULATOR): ssh_server_channel.erl
$(EBIN)/ssh_server_key_api.$(EMULATOR): ssh_server_key_api.erl \
  ../../public_key/include/public_key.hrl \
  ../../public_key/include/OTP-PUB-KEY.hrl \
  ../../public_key/include/PKCS-FRAME.hrl \
  ssh.hrl
$(EBIN)/ssh_sftpd_file_api.$(EMULATOR): ssh_sftpd_file_api.erl
$(EBIN)/ssh_channel.$(EMULATOR): ssh_channel.erl ssh.hrl ssh_connect.hrl
$(EBIN)/ssh_client_channel.$(EMULATOR): ssh_client_channel.erl ssh.hrl ssh_connect.hrl
