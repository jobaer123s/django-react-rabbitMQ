{application, 'rabbitmq_aws', [
	{description, "A minimalistic AWS API interface used by rabbitmq-autocluster (3.6.x) and other RabbitMQ plugins"},
	{vsn, "3.13.4"},
	{id, "v3.13.3-56-ged42cd1"},
	{modules, ['rabbitmq_aws','rabbitmq_aws_app','rabbitmq_aws_config','rabbitmq_aws_json','rabbitmq_aws_sign','rabbitmq_aws_sup','rabbitmq_aws_urilib','rabbitmq_aws_xml']},
	{registered, [rabbitmq_aws_sup,rabbitmq_aws]},
	{applications, [kernel,stdlib,crypto,inets,ssl,xmerl,public_key]},
	{optional_applications, []},
	{mod, {rabbitmq_aws_app, []}},
	{env, []}
]}.