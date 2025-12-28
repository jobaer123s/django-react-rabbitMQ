{application, 'rabbitmq_auth_backend_oauth2', [
	{description, "OAuth 2 and JWT-based AuthN and AuthZ backend"},
	{vsn, "3.13.4"},
	{id, "v3.13.3-56-ged42cd1"},
	{modules, ['Elixir.RabbitMQ.CLI.Ctl.Commands.AddSigningKeyCommand','Elixir.RabbitMQ.CLI.Ctl.Commands.AddUaaKeyCommand','rabbit_auth_backend_oauth2','rabbit_auth_backend_oauth2_app','rabbit_oauth2_config','rabbit_oauth2_scope','uaa_jwks','uaa_jwt','uaa_jwt_jwk','uaa_jwt_jwt','wildcard']},
	{registered, []},
	{applications, [kernel,stdlib,inets,public_key,rabbit,cowlib,jose,base64url,oauth2_client]},
	{optional_applications, []},
	{env, []}
]}.