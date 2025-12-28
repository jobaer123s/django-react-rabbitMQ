{application, 'rabbitmq_prometheus', [
	{description, "Prometheus metrics for RabbitMQ"},
	{vsn, "3.13.4"},
	{id, "v3.13.3-56-ged42cd1"},
	{modules, ['prometheus_process_collector','prometheus_rabbitmq_alarm_metrics_collector','prometheus_rabbitmq_core_metrics_collector','prometheus_rabbitmq_dynamic_collector','prometheus_rabbitmq_federation_collector','prometheus_rabbitmq_global_metrics_collector','rabbit_prometheus_app','rabbit_prometheus_dispatcher','rabbit_prometheus_handler']},
	{registered, [rabbitmq_prometheus_sup]},
	{applications, [kernel,stdlib,accept,cowboy,rabbit,rabbitmq_management_agent,prometheus,rabbitmq_web_dispatch,rabbitmq_federation]},
	{optional_applications, []},
	{mod, {rabbit_prometheus_app, []}},
	{env, [
	{tcp_config, [{port, 15692}]},
	{ssl_config, []},
	{return_per_object_metrics, false}
]}
]}.