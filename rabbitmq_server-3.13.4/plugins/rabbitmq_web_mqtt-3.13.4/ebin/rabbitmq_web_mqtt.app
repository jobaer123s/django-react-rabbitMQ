{application, 'rabbitmq_web_mqtt', [
	{description, "RabbitMQ MQTT-over-WebSockets adapter"},
	{vsn, "3.13.4"},
	{id, "v3.13.3-56-ged42cd1"},
	{modules, ['Elixir.RabbitMQ.CLI.Ctl.Commands.ListWebMqttConnectionsCommand','rabbit_web_mqtt_app','rabbit_web_mqtt_handler','rabbit_web_mqtt_stream_handler']},
	{registered, [rabbitmq_web_mqtt_sup]},
	{applications, [kernel,stdlib,ssl,rabbit_common,rabbit,cowboy,rabbitmq_mqtt]},
	{optional_applications, []},
	{mod, {rabbit_web_mqtt_app, []}},
	{env, [
	    {tcp_config, [{port, 15675}]},
	    {ssl_config, []},
	    {num_tcp_acceptors, 10},
	    {num_ssl_acceptors, 10},
	    {cowboy_opts, []},
	    {proxy_protocol, false}
	  ]}
]}.