{application, 'rabbitmq_peer_discovery_etcd', [
	{description, "etcd-based RabbitMQ peer discovery backend"},
	{vsn, "3.13.4"},
	{id, "v3.13.3-56-ged42cd1"},
	{modules, ['rabbit_peer_discovery_etcd','rabbitmq_peer_discovery_etcd','rabbitmq_peer_discovery_etcd_app','rabbitmq_peer_discovery_etcd_sup','rabbitmq_peer_discovery_etcd_v3_client']},
	{registered, [rabbitmq_peer_discovery_etcd_sup]},
	{applications, [kernel,stdlib,rabbit_common,rabbitmq_peer_discovery_common,rabbit,eetcd,gun]},
	{optional_applications, []},
	{mod, {rabbitmq_peer_discovery_etcd_app, []}},
	{env, []}
]}.