{application, 'rabbitmq_federation_management', [
	{description, "RabbitMQ Federation Management"},
	{vsn, "3.13.4"},
	{id, "v3.13.3-56-ged42cd1"},
	{modules, ['rabbit_federation_mgmt']},
	{registered, []},
	{applications, [kernel,stdlib,amqp_client,rabbit_common,rabbit,rabbitmq_management,rabbitmq_federation]},
	{optional_applications, []},
	{env, []},
		{broker_version_requirements, []}
]}.