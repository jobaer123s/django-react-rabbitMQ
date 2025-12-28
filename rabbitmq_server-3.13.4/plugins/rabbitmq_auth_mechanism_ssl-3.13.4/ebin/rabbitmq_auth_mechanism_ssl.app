{application, 'rabbitmq_auth_mechanism_ssl', [
	{description, "RabbitMQ SSL authentication (SASL EXTERNAL)"},
	{vsn, "3.13.4"},
	{id, "v3.13.3-56-ged42cd1"},
	{modules, ['rabbit_auth_mechanism_ssl','rabbit_auth_mechanism_ssl_app']},
	{registered, [rabbitmq_auth_mechanism_ssl_sup]},
	{applications, [kernel,stdlib,public_key,rabbit_common,rabbit]},
	{optional_applications, []},
	{mod, {rabbit_auth_mechanism_ssl_app, []}},
	{env, [
	    {name_from, distinguished_name}
	  ]},
		{broker_version_requirements, []}
]}.