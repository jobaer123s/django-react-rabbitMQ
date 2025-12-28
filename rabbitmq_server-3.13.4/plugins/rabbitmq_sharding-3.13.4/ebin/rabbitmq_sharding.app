{application, 'rabbitmq_sharding', [
	{description, "RabbitMQ Sharding Plugin"},
	{vsn, "3.13.4"},
	{id, "v3.13.3-56-ged42cd1"},
	{modules, ['rabbit_sharding_exchange_decorator','rabbit_sharding_exchange_type_modulus_hash','rabbit_sharding_interceptor','rabbit_sharding_policy_validator','rabbit_sharding_shard','rabbit_sharding_util']},
	{registered, []},
	{applications, [kernel,stdlib,rabbit_common,rabbit]},
	{optional_applications, []},
	{env, []},
		{broker_version_requirements, []}
]}.