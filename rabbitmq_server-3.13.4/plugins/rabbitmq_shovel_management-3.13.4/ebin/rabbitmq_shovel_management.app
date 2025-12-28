{application, 'rabbitmq_shovel_management', [
	{description, "Management extension for the Shovel plugin"},
	{vsn, "3.13.4"},
	{id, "v3.13.3-56-ged42cd1"},
	{modules, ['rabbit_shovel_mgmt','rabbit_shovel_mgmt_util']},
	{registered, []},
	{applications, [kernel,stdlib,rabbit_common,rabbit,rabbitmq_management,rabbitmq_shovel]},
	{optional_applications, []},
	{env, []},
		{broker_version_requirements, []}
]}.