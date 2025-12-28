{application, 'oauth2_client', [
	{description, "OAuth2 client from the RabbitMQ Project"},
	{vsn, "3.13.4"},
	{id, "v3.13.3-56-ged42cd1"},
	{modules, ['jwt_helper','oauth2_client']},
	{registered, []},
	{applications, [kernel,stdlib,ssl,inets,crypto,public_key,rabbit_common,jose]},
	{optional_applications, []},
	{env, []}
]}.