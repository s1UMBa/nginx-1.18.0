
CC =	cc
CFLAGS =  -pipe  -O -W -Wall -Wpointer-arith -Wno-unused-parameter -Werror -g -g -O2 -fdebug-prefix-map=/build/nginx-Iwde_Y/nginx-1.18.0=. -fstack-protector-strong -Wformat -Werror=format-security -fPIC -Wdate-time -D_FORTIFY_SOURCE=2  -D_GLIBCXX_USE_CXX11_ABI=0
CPP =	cc -E
LINK =	$(CC)


ALL_INCS = -I src/core \
	-I src/event \
	-I src/event/modules \
	-I src/os/unix \
	-I ../ngx_devel_kit-0.2.19/objs \
	-I objs/addon/ndk \
	-I objs \
	-I src/http \
	-I src/http/modules \
	-I src/http/v2 \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/third_party/chromium/src \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/third_party/google-sparsehash/src/src \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/third_party/google-sparsehash/gen/arch/linux/x64/include \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/third_party/grpc/src/include \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/third_party/protobuf/src/src \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/third_party/re2/src \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/out/Release/obj/gen \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/out/Release/obj/gen/protoc_out/instaweb \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/third_party/apr/src/include \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/third_party/aprutil/src/include \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/third_party/apr/gen/arch/linux/x64/include \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/third_party/aprutil/gen/arch/linux/x64/include \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/url \
	-I ../nchan/src \
	-I ../ngx_devel_kit-0.2.19/src


CORE_DEPS = src/core/nginx.h \
	src/core/ngx_config.h \
	src/core/ngx_core.h \
	src/core/ngx_log.h \
	src/core/ngx_palloc.h \
	src/core/ngx_array.h \
	src/core/ngx_list.h \
	src/core/ngx_hash.h \
	src/core/ngx_buf.h \
	src/core/ngx_queue.h \
	src/core/ngx_string.h \
	src/core/ngx_parse.h \
	src/core/ngx_parse_time.h \
	src/core/ngx_inet.h \
	src/core/ngx_file.h \
	src/core/ngx_crc.h \
	src/core/ngx_crc32.h \
	src/core/ngx_murmurhash.h \
	src/core/ngx_md5.h \
	src/core/ngx_sha1.h \
	src/core/ngx_rbtree.h \
	src/core/ngx_radix_tree.h \
	src/core/ngx_rwlock.h \
	src/core/ngx_slab.h \
	src/core/ngx_times.h \
	src/core/ngx_shmtx.h \
	src/core/ngx_connection.h \
	src/core/ngx_cycle.h \
	src/core/ngx_conf_file.h \
	src/core/ngx_module.h \
	src/core/ngx_resolver.h \
	src/core/ngx_open_file_cache.h \
	src/core/ngx_crypt.h \
	src/core/ngx_proxy_protocol.h \
	src/core/ngx_syslog.h \
	src/event/ngx_event.h \
	src/event/ngx_event_timer.h \
	src/event/ngx_event_posted.h \
	src/event/ngx_event_connect.h \
	src/event/ngx_event_pipe.h \
	src/os/unix/ngx_time.h \
	src/os/unix/ngx_errno.h \
	src/os/unix/ngx_alloc.h \
	src/os/unix/ngx_files.h \
	src/os/unix/ngx_channel.h \
	src/os/unix/ngx_shmem.h \
	src/os/unix/ngx_process.h \
	src/os/unix/ngx_setaffinity.h \
	src/os/unix/ngx_setproctitle.h \
	src/os/unix/ngx_atomic.h \
	src/os/unix/ngx_gcc_atomic_x86.h \
	src/os/unix/ngx_thread.h \
	src/os/unix/ngx_socket.h \
	src/os/unix/ngx_os.h \
	src/os/unix/ngx_user.h \
	src/os/unix/ngx_dlopen.h \
	src/os/unix/ngx_process_cycle.h \
	src/os/unix/ngx_linux_config.h \
	src/os/unix/ngx_linux.h \
	src/core/ngx_thread_pool.h \
	src/event/ngx_event_openssl.h \
	src/core/ngx_regex.h \
	objs/ngx_auto_config.h


CORE_INCS = -I src/core \
	-I src/event \
	-I src/event/modules \
	-I src/os/unix \
	-I ../ngx_devel_kit-0.2.19/objs \
	-I objs/addon/ndk \
	-I objs


HTTP_DEPS = src/http/ngx_http.h \
	src/http/ngx_http_request.h \
	src/http/ngx_http_config.h \
	src/http/ngx_http_core_module.h \
	src/http/ngx_http_cache.h \
	src/http/ngx_http_variables.h \
	src/http/ngx_http_script.h \
	src/http/ngx_http_upstream.h \
	src/http/ngx_http_upstream_round_robin.h \
	src/http/modules/ngx_http_ssi_filter_module.h \
	src/http/v2/ngx_http_v2.h \
	src/http/v2/ngx_http_v2_module.h \
	src/http/modules/ngx_http_ssl_module.h


HTTP_INCS = -I src/http \
	-I src/http/modules \
	-I src/http/v2 \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/third_party/chromium/src \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/third_party/google-sparsehash/src/src \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/third_party/google-sparsehash/gen/arch/linux/x64/include \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/third_party/grpc/src/include \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/third_party/protobuf/src/src \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/third_party/re2/src \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/out/Release/obj/gen \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/out/Release/obj/gen/protoc_out/instaweb \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/third_party/apr/src/include \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/third_party/aprutil/src/include \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/third_party/apr/gen/arch/linux/x64/include \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/third_party/aprutil/gen/arch/linux/x64/include \
	-I ../incubator-pagespeed-ngx-latest-stable/psol/include/url \
	-I ../nchan/src \
	-I ../ngx_devel_kit-0.2.19/src


ADDON_DEPS = $(CORE_DEPS)  ../headers-more-nginx-module-0.29/src/ddebug.h ../headers-more-nginx-module-0.29/src/ngx_http_headers_more_filter_module.h ../headers-more-nginx-module-0.29/src/ngx_http_headers_more_headers_in.h ../headers-more-nginx-module-0.29/src/ngx_http_headers_more_headers_out.h ../headers-more-nginx-module-0.29/src/ngx_http_headers_more_headers_in.h ../headers-more-nginx-module-0.29/src/ngx_http_headers_more_util.h ../incubator-pagespeed-ngx-latest-stable/src/log_message_handler.h ../incubator-pagespeed-ngx-latest-stable/src/ngx_base_fetch.h ../incubator-pagespeed-ngx-latest-stable/src/ngx_caching_headers.h ../incubator-pagespeed-ngx-latest-stable/src/ngx_event_connection.h ../incubator-pagespeed-ngx-latest-stable/src/ngx_fetch.h ../incubator-pagespeed-ngx-latest-stable/src/ngx_gzip_setter.h ../incubator-pagespeed-ngx-latest-stable/src/ngx_list_iterator.h ../incubator-pagespeed-ngx-latest-stable/src/ngx_message_handler.h ../incubator-pagespeed-ngx-latest-stable/src/ngx_pagespeed.h ../incubator-pagespeed-ngx-latest-stable/src/ngx_rewrite_driver_factory.h ../incubator-pagespeed-ngx-latest-stable/src/ngx_rewrite_options.h ../incubator-pagespeed-ngx-latest-stable/src/ngx_server_context.h ../incubator-pagespeed-ngx-latest-stable/src/ngx_url_async_fetcher.h ../incubator-pagespeed-ngx-latest-stable/psol/lib/Release/linux/x64/pagespeed_automatic.a ../ngx_http_google_filter_module-0.2.0/src/*.h $(HTTP_DEPS)


build:	binary modules manpage

binary:	objs/nginx

objs/nginx:	objs/src/core/nginx.o \
	objs/src/core/ngx_log.o \
	objs/src/core/ngx_palloc.o \
	objs/src/core/ngx_array.o \
	objs/src/core/ngx_list.o \
	objs/src/core/ngx_hash.o \
	objs/src/core/ngx_buf.o \
	objs/src/core/ngx_queue.o \
	objs/src/core/ngx_output_chain.o \
	objs/src/core/ngx_string.o \
	objs/src/core/ngx_parse.o \
	objs/src/core/ngx_parse_time.o \
	objs/src/core/ngx_inet.o \
	objs/src/core/ngx_file.o \
	objs/src/core/ngx_crc32.o \
	objs/src/core/ngx_murmurhash.o \
	objs/src/core/ngx_md5.o \
	objs/src/core/ngx_sha1.o \
	objs/src/core/ngx_rbtree.o \
	objs/src/core/ngx_radix_tree.o \
	objs/src/core/ngx_slab.o \
	objs/src/core/ngx_times.o \
	objs/src/core/ngx_shmtx.o \
	objs/src/core/ngx_connection.o \
	objs/src/core/ngx_cycle.o \
	objs/src/core/ngx_spinlock.o \
	objs/src/core/ngx_rwlock.o \
	objs/src/core/ngx_cpuinfo.o \
	objs/src/core/ngx_conf_file.o \
	objs/src/core/ngx_module.o \
	objs/src/core/ngx_resolver.o \
	objs/src/core/ngx_open_file_cache.o \
	objs/src/core/ngx_crypt.o \
	objs/src/core/ngx_proxy_protocol.o \
	objs/src/core/ngx_syslog.o \
	objs/src/event/ngx_event.o \
	objs/src/event/ngx_event_timer.o \
	objs/src/event/ngx_event_posted.o \
	objs/src/event/ngx_event_accept.o \
	objs/src/event/ngx_event_udp.o \
	objs/src/event/ngx_event_connect.o \
	objs/src/event/ngx_event_pipe.o \
	objs/src/os/unix/ngx_time.o \
	objs/src/os/unix/ngx_errno.o \
	objs/src/os/unix/ngx_alloc.o \
	objs/src/os/unix/ngx_files.o \
	objs/src/os/unix/ngx_socket.o \
	objs/src/os/unix/ngx_recv.o \
	objs/src/os/unix/ngx_readv_chain.o \
	objs/src/os/unix/ngx_udp_recv.o \
	objs/src/os/unix/ngx_send.o \
	objs/src/os/unix/ngx_writev_chain.o \
	objs/src/os/unix/ngx_udp_send.o \
	objs/src/os/unix/ngx_udp_sendmsg_chain.o \
	objs/src/os/unix/ngx_channel.o \
	objs/src/os/unix/ngx_shmem.o \
	objs/src/os/unix/ngx_process.o \
	objs/src/os/unix/ngx_daemon.o \
	objs/src/os/unix/ngx_setaffinity.o \
	objs/src/os/unix/ngx_setproctitle.o \
	objs/src/os/unix/ngx_posix_init.o \
	objs/src/os/unix/ngx_user.o \
	objs/src/os/unix/ngx_dlopen.o \
	objs/src/os/unix/ngx_process_cycle.o \
	objs/src/os/unix/ngx_linux_init.o \
	objs/src/event/modules/ngx_epoll_module.o \
	objs/src/os/unix/ngx_linux_sendfile_chain.o \
	objs/src/core/ngx_thread_pool.o \
	objs/src/os/unix/ngx_thread_cond.o \
	objs/src/os/unix/ngx_thread_mutex.o \
	objs/src/os/unix/ngx_thread_id.o \
	objs/src/event/ngx_event_openssl.o \
	objs/src/event/ngx_event_openssl_stapling.o \
	objs/src/core/ngx_regex.o \
	objs/src/http/ngx_http.o \
	objs/src/http/ngx_http_core_module.o \
	objs/src/http/ngx_http_special_response.o \
	objs/src/http/ngx_http_request.o \
	objs/src/http/ngx_http_parse.o \
	objs/src/http/modules/ngx_http_log_module.o \
	objs/src/http/ngx_http_request_body.o \
	objs/src/http/ngx_http_variables.o \
	objs/src/http/ngx_http_script.o \
	objs/src/http/ngx_http_upstream.o \
	objs/src/http/ngx_http_upstream_round_robin.o \
	objs/src/http/ngx_http_file_cache.o \
	objs/src/http/ngx_http_write_filter_module.o \
	objs/src/http/ngx_http_header_filter_module.o \
	objs/src/http/modules/ngx_http_chunked_filter_module.o \
	objs/src/http/v2/ngx_http_v2_filter_module.o \
	objs/src/http/modules/ngx_http_range_filter_module.o \
	objs/src/http/modules/ngx_http_gzip_filter_module.o \
	objs/src/http/ngx_http_postpone_filter_module.o \
	objs/src/http/modules/ngx_http_ssi_filter_module.o \
	objs/src/http/modules/ngx_http_charset_filter_module.o \
	objs/src/http/modules/ngx_http_sub_filter_module.o \
	objs/src/http/modules/ngx_http_addition_filter_module.o \
	objs/src/http/modules/ngx_http_gunzip_filter_module.o \
	objs/src/http/modules/ngx_http_userid_filter_module.o \
	objs/src/http/modules/ngx_http_headers_filter_module.o \
	objs/src/http/ngx_http_copy_filter_module.o \
	objs/src/http/modules/ngx_http_not_modified_filter_module.o \
	objs/src/http/modules/ngx_http_slice_filter_module.o \
	objs/src/http/v2/ngx_http_v2.o \
	objs/src/http/v2/ngx_http_v2_table.o \
	objs/src/http/v2/ngx_http_v2_encode.o \
	objs/src/http/v2/ngx_http_v2_huff_decode.o \
	objs/src/http/v2/ngx_http_v2_huff_encode.o \
	objs/src/http/v2/ngx_http_v2_module.o \
	objs/src/http/modules/ngx_http_static_module.o \
	objs/src/http/modules/ngx_http_gzip_static_module.o \
	objs/src/http/modules/ngx_http_dav_module.o \
	objs/src/http/modules/ngx_http_autoindex_module.o \
	objs/src/http/modules/ngx_http_index_module.o \
	objs/src/http/modules/ngx_http_mirror_module.o \
	objs/src/http/modules/ngx_http_try_files_module.o \
	objs/src/http/modules/ngx_http_auth_request_module.o \
	objs/src/http/modules/ngx_http_auth_basic_module.o \
	objs/src/http/modules/ngx_http_access_module.o \
	objs/src/http/modules/ngx_http_limit_conn_module.o \
	objs/src/http/modules/ngx_http_limit_req_module.o \
	objs/src/http/modules/ngx_http_realip_module.o \
	objs/src/http/modules/ngx_http_geo_module.o \
	objs/src/http/modules/ngx_http_map_module.o \
	objs/src/http/modules/ngx_http_split_clients_module.o \
	objs/src/http/modules/ngx_http_referer_module.o \
	objs/src/http/modules/ngx_http_rewrite_module.o \
	objs/src/http/modules/ngx_http_ssl_module.o \
	objs/src/http/modules/ngx_http_proxy_module.o \
	objs/src/http/modules/ngx_http_fastcgi_module.o \
	objs/src/http/modules/ngx_http_uwsgi_module.o \
	objs/src/http/modules/ngx_http_scgi_module.o \
	objs/src/http/modules/ngx_http_grpc_module.o \
	objs/src/http/modules/ngx_http_memcached_module.o \
	objs/src/http/modules/ngx_http_empty_gif_module.o \
	objs/src/http/modules/ngx_http_browser_module.o \
	objs/src/http/modules/ngx_http_upstream_hash_module.o \
	objs/src/http/modules/ngx_http_upstream_ip_hash_module.o \
	objs/src/http/modules/ngx_http_upstream_least_conn_module.o \
	objs/src/http/modules/ngx_http_upstream_random_module.o \
	objs/src/http/modules/ngx_http_upstream_keepalive_module.o \
	objs/src/http/modules/ngx_http_upstream_zone_module.o \
	objs/src/http/modules/ngx_http_stub_status_module.o \
	objs/addon/ngx_http_geoip2_module/ngx_http_geoip2_module.o \
	objs/addon/ngx_cache_purge-2.3/ngx_cache_purge_module.o \
	objs/addon/src/ngx_http_headers_more_filter_module.o \
	objs/addon/src/ngx_http_headers_more_headers_out.o \
	objs/addon/src/ngx_http_headers_more_headers_in.o \
	objs/addon/src/ngx_http_headers_more_util.o \
	objs/addon/src/log_message_handler.o \
	objs/addon/src/ngx_base_fetch.o \
	objs/addon/src/ngx_caching_headers.o \
	objs/addon/src/ngx_event_connection.o \
	objs/addon/src/ngx_fetch.o \
	objs/addon/src/ngx_gzip_setter.o \
	objs/addon/src/ngx_list_iterator.o \
	objs/addon/src/ngx_message_handler.o \
	objs/addon/src/ngx_pagespeed.o \
	objs/addon/src/ngx_rewrite_driver_factory.o \
	objs/addon/src/ngx_rewrite_options.o \
	objs/addon/src/ngx_server_context.o \
	objs/addon/src/ngx_url_async_fetcher.o \
	objs/addon/src/nchan_defs.o \
	objs/addon/src/nchan_variables.o \
	objs/addon/src/nchan_module.o \
	objs/addon/util/nchan_debug.o \
	objs/addon/util/nchan_list.o \
	objs/addon/util/nchan_slist.o \
	objs/addon/util/ngx_nchan_hacked_slab.o \
	objs/addon/util/shmem.o \
	objs/addon/util/nchan_rbtree.o \
	objs/addon/util/nchan_reuse_queue.o \
	objs/addon/util/nchan_output.o \
	objs/addon/util/nchan_util.o \
	objs/addon/util/nchan_fake_request.o \
	objs/addon/util/nchan_bufchainpool.o \
	objs/addon/util/nchan_channel_id.o \
	objs/addon/util/nchan_output_info.o \
	objs/addon/util/nchan_msg.o \
	objs/addon/util/nchan_thingcache.o \
	objs/addon/util/nchan_reaper.o \
	objs/addon/util/nchan_subrequest.o \
	objs/addon/util/nchan_benchmark.o \
	objs/addon/util/hdr_histogram.o \
	objs/addon/subscribers/common.o \
	objs/addon/subscribers/longpoll.o \
	objs/addon/subscribers/intervalpoll.o \
	objs/addon/subscribers/eventsource.o \
	objs/addon/subscribers/http-chunked.o \
	objs/addon/subscribers/http-multipart-mixed.o \
	objs/addon/subscribers/http-raw-stream.o \
	objs/addon/subscribers/websocket.o \
	objs/addon/src/nchan_websocket_publisher.o \
	objs/addon/subscribers/internal.o \
	objs/addon/subscribers/memstore_ipc.o \
	objs/addon/subscribers/memstore_multi.o \
	objs/addon/subscribers/memstore_redis.o \
	objs/addon/subscribers/getmsg_proxy.o \
	objs/addon/subscribers/benchmark.o \
	objs/addon/store/spool.o \
	objs/addon/store/ngx_rwlock.o \
	objs/addon/store/store_common.o \
	objs/addon/memory/ipc.o \
	objs/addon/memory/ipc-handlers.o \
	objs/addon/memory/groups.o \
	objs/addon/memory/memstore.o \
	objs/addon/hiredis/alloc.o \
	objs/addon/hiredis/async.o \
	objs/addon/hiredis/dict.o \
	objs/addon/hiredis/hiredis.o \
	objs/addon/hiredis/net.o \
	objs/addon/hiredis/read.o \
	objs/addon/hiredis/sds.o \
	objs/addon/hiredis/sockcompat.o \
	objs/addon/hiredis/ssl.o \
	objs/addon/redis/cmp.o \
	objs/addon/redis/redis_lua_commands.o \
	objs/addon/redis/redis_nodeset_parser.o \
	objs/addon/redis/redis_nodeset.o \
	objs/addon/redis/rdsstore.o \
	objs/addon/redis/redis_nginx_adapter.o \
	objs/addon/nginx-upload-progress-module-0.9.1/ngx_http_uploadprogress_module.o \
	objs/addon/src/ndk.o \
	objs/addon/ngx_http_substitutions_filter_module-0.6.4/ngx_http_subs_filter_module.o \
	objs/addon/src/ngx_http_google_filter_module.o \
	objs/addon/src/ngx_http_google_inject.o \
	objs/addon/src/ngx_http_google_request.o \
	objs/addon/src/ngx_http_google_response.o \
	objs/addon/src/ngx_http_google_util.o \
	objs/addon/ngx_http_auth_pam_module-1.4/ngx_http_auth_pam_module.o \
	objs/ngx_modules.o

	$(LINK) -o objs/nginx \
	objs/src/core/nginx.o \
	objs/src/core/ngx_log.o \
	objs/src/core/ngx_palloc.o \
	objs/src/core/ngx_array.o \
	objs/src/core/ngx_list.o \
	objs/src/core/ngx_hash.o \
	objs/src/core/ngx_buf.o \
	objs/src/core/ngx_queue.o \
	objs/src/core/ngx_output_chain.o \
	objs/src/core/ngx_string.o \
	objs/src/core/ngx_parse.o \
	objs/src/core/ngx_parse_time.o \
	objs/src/core/ngx_inet.o \
	objs/src/core/ngx_file.o \
	objs/src/core/ngx_crc32.o \
	objs/src/core/ngx_murmurhash.o \
	objs/src/core/ngx_md5.o \
	objs/src/core/ngx_sha1.o \
	objs/src/core/ngx_rbtree.o \
	objs/src/core/ngx_radix_tree.o \
	objs/src/core/ngx_slab.o \
	objs/src/core/ngx_times.o \
	objs/src/core/ngx_shmtx.o \
	objs/src/core/ngx_connection.o \
	objs/src/core/ngx_cycle.o \
	objs/src/core/ngx_spinlock.o \
	objs/src/core/ngx_rwlock.o \
	objs/src/core/ngx_cpuinfo.o \
	objs/src/core/ngx_conf_file.o \
	objs/src/core/ngx_module.o \
	objs/src/core/ngx_resolver.o \
	objs/src/core/ngx_open_file_cache.o \
	objs/src/core/ngx_crypt.o \
	objs/src/core/ngx_proxy_protocol.o \
	objs/src/core/ngx_syslog.o \
	objs/src/event/ngx_event.o \
	objs/src/event/ngx_event_timer.o \
	objs/src/event/ngx_event_posted.o \
	objs/src/event/ngx_event_accept.o \
	objs/src/event/ngx_event_udp.o \
	objs/src/event/ngx_event_connect.o \
	objs/src/event/ngx_event_pipe.o \
	objs/src/os/unix/ngx_time.o \
	objs/src/os/unix/ngx_errno.o \
	objs/src/os/unix/ngx_alloc.o \
	objs/src/os/unix/ngx_files.o \
	objs/src/os/unix/ngx_socket.o \
	objs/src/os/unix/ngx_recv.o \
	objs/src/os/unix/ngx_readv_chain.o \
	objs/src/os/unix/ngx_udp_recv.o \
	objs/src/os/unix/ngx_send.o \
	objs/src/os/unix/ngx_writev_chain.o \
	objs/src/os/unix/ngx_udp_send.o \
	objs/src/os/unix/ngx_udp_sendmsg_chain.o \
	objs/src/os/unix/ngx_channel.o \
	objs/src/os/unix/ngx_shmem.o \
	objs/src/os/unix/ngx_process.o \
	objs/src/os/unix/ngx_daemon.o \
	objs/src/os/unix/ngx_setaffinity.o \
	objs/src/os/unix/ngx_setproctitle.o \
	objs/src/os/unix/ngx_posix_init.o \
	objs/src/os/unix/ngx_user.o \
	objs/src/os/unix/ngx_dlopen.o \
	objs/src/os/unix/ngx_process_cycle.o \
	objs/src/os/unix/ngx_linux_init.o \
	objs/src/event/modules/ngx_epoll_module.o \
	objs/src/os/unix/ngx_linux_sendfile_chain.o \
	objs/src/core/ngx_thread_pool.o \
	objs/src/os/unix/ngx_thread_cond.o \
	objs/src/os/unix/ngx_thread_mutex.o \
	objs/src/os/unix/ngx_thread_id.o \
	objs/src/event/ngx_event_openssl.o \
	objs/src/event/ngx_event_openssl_stapling.o \
	objs/src/core/ngx_regex.o \
	objs/src/http/ngx_http.o \
	objs/src/http/ngx_http_core_module.o \
	objs/src/http/ngx_http_special_response.o \
	objs/src/http/ngx_http_request.o \
	objs/src/http/ngx_http_parse.o \
	objs/src/http/modules/ngx_http_log_module.o \
	objs/src/http/ngx_http_request_body.o \
	objs/src/http/ngx_http_variables.o \
	objs/src/http/ngx_http_script.o \
	objs/src/http/ngx_http_upstream.o \
	objs/src/http/ngx_http_upstream_round_robin.o \
	objs/src/http/ngx_http_file_cache.o \
	objs/src/http/ngx_http_write_filter_module.o \
	objs/src/http/ngx_http_header_filter_module.o \
	objs/src/http/modules/ngx_http_chunked_filter_module.o \
	objs/src/http/v2/ngx_http_v2_filter_module.o \
	objs/src/http/modules/ngx_http_range_filter_module.o \
	objs/src/http/modules/ngx_http_gzip_filter_module.o \
	objs/src/http/ngx_http_postpone_filter_module.o \
	objs/src/http/modules/ngx_http_ssi_filter_module.o \
	objs/src/http/modules/ngx_http_charset_filter_module.o \
	objs/src/http/modules/ngx_http_sub_filter_module.o \
	objs/src/http/modules/ngx_http_addition_filter_module.o \
	objs/src/http/modules/ngx_http_gunzip_filter_module.o \
	objs/src/http/modules/ngx_http_userid_filter_module.o \
	objs/src/http/modules/ngx_http_headers_filter_module.o \
	objs/src/http/ngx_http_copy_filter_module.o \
	objs/src/http/modules/ngx_http_not_modified_filter_module.o \
	objs/src/http/modules/ngx_http_slice_filter_module.o \
	objs/src/http/v2/ngx_http_v2.o \
	objs/src/http/v2/ngx_http_v2_table.o \
	objs/src/http/v2/ngx_http_v2_encode.o \
	objs/src/http/v2/ngx_http_v2_huff_decode.o \
	objs/src/http/v2/ngx_http_v2_huff_encode.o \
	objs/src/http/v2/ngx_http_v2_module.o \
	objs/src/http/modules/ngx_http_static_module.o \
	objs/src/http/modules/ngx_http_gzip_static_module.o \
	objs/src/http/modules/ngx_http_dav_module.o \
	objs/src/http/modules/ngx_http_autoindex_module.o \
	objs/src/http/modules/ngx_http_index_module.o \
	objs/src/http/modules/ngx_http_mirror_module.o \
	objs/src/http/modules/ngx_http_try_files_module.o \
	objs/src/http/modules/ngx_http_auth_request_module.o \
	objs/src/http/modules/ngx_http_auth_basic_module.o \
	objs/src/http/modules/ngx_http_access_module.o \
	objs/src/http/modules/ngx_http_limit_conn_module.o \
	objs/src/http/modules/ngx_http_limit_req_module.o \
	objs/src/http/modules/ngx_http_realip_module.o \
	objs/src/http/modules/ngx_http_geo_module.o \
	objs/src/http/modules/ngx_http_map_module.o \
	objs/src/http/modules/ngx_http_split_clients_module.o \
	objs/src/http/modules/ngx_http_referer_module.o \
	objs/src/http/modules/ngx_http_rewrite_module.o \
	objs/src/http/modules/ngx_http_ssl_module.o \
	objs/src/http/modules/ngx_http_proxy_module.o \
	objs/src/http/modules/ngx_http_fastcgi_module.o \
	objs/src/http/modules/ngx_http_uwsgi_module.o \
	objs/src/http/modules/ngx_http_scgi_module.o \
	objs/src/http/modules/ngx_http_grpc_module.o \
	objs/src/http/modules/ngx_http_memcached_module.o \
	objs/src/http/modules/ngx_http_empty_gif_module.o \
	objs/src/http/modules/ngx_http_browser_module.o \
	objs/src/http/modules/ngx_http_upstream_hash_module.o \
	objs/src/http/modules/ngx_http_upstream_ip_hash_module.o \
	objs/src/http/modules/ngx_http_upstream_least_conn_module.o \
	objs/src/http/modules/ngx_http_upstream_random_module.o \
	objs/src/http/modules/ngx_http_upstream_keepalive_module.o \
	objs/src/http/modules/ngx_http_upstream_zone_module.o \
	objs/src/http/modules/ngx_http_stub_status_module.o \
	objs/addon/ngx_http_geoip2_module/ngx_http_geoip2_module.o \
	objs/addon/ngx_cache_purge-2.3/ngx_cache_purge_module.o \
	objs/addon/src/ngx_http_headers_more_filter_module.o \
	objs/addon/src/ngx_http_headers_more_headers_out.o \
	objs/addon/src/ngx_http_headers_more_headers_in.o \
	objs/addon/src/ngx_http_headers_more_util.o \
	objs/addon/src/log_message_handler.o \
	objs/addon/src/ngx_base_fetch.o \
	objs/addon/src/ngx_caching_headers.o \
	objs/addon/src/ngx_event_connection.o \
	objs/addon/src/ngx_fetch.o \
	objs/addon/src/ngx_gzip_setter.o \
	objs/addon/src/ngx_list_iterator.o \
	objs/addon/src/ngx_message_handler.o \
	objs/addon/src/ngx_pagespeed.o \
	objs/addon/src/ngx_rewrite_driver_factory.o \
	objs/addon/src/ngx_rewrite_options.o \
	objs/addon/src/ngx_server_context.o \
	objs/addon/src/ngx_url_async_fetcher.o \
	objs/addon/src/nchan_defs.o \
	objs/addon/src/nchan_variables.o \
	objs/addon/src/nchan_module.o \
	objs/addon/util/nchan_debug.o \
	objs/addon/util/nchan_list.o \
	objs/addon/util/nchan_slist.o \
	objs/addon/util/ngx_nchan_hacked_slab.o \
	objs/addon/util/shmem.o \
	objs/addon/util/nchan_rbtree.o \
	objs/addon/util/nchan_reuse_queue.o \
	objs/addon/util/nchan_output.o \
	objs/addon/util/nchan_util.o \
	objs/addon/util/nchan_fake_request.o \
	objs/addon/util/nchan_bufchainpool.o \
	objs/addon/util/nchan_channel_id.o \
	objs/addon/util/nchan_output_info.o \
	objs/addon/util/nchan_msg.o \
	objs/addon/util/nchan_thingcache.o \
	objs/addon/util/nchan_reaper.o \
	objs/addon/util/nchan_subrequest.o \
	objs/addon/util/nchan_benchmark.o \
	objs/addon/util/hdr_histogram.o \
	objs/addon/subscribers/common.o \
	objs/addon/subscribers/longpoll.o \
	objs/addon/subscribers/intervalpoll.o \
	objs/addon/subscribers/eventsource.o \
	objs/addon/subscribers/http-chunked.o \
	objs/addon/subscribers/http-multipart-mixed.o \
	objs/addon/subscribers/http-raw-stream.o \
	objs/addon/subscribers/websocket.o \
	objs/addon/src/nchan_websocket_publisher.o \
	objs/addon/subscribers/internal.o \
	objs/addon/subscribers/memstore_ipc.o \
	objs/addon/subscribers/memstore_multi.o \
	objs/addon/subscribers/memstore_redis.o \
	objs/addon/subscribers/getmsg_proxy.o \
	objs/addon/subscribers/benchmark.o \
	objs/addon/store/spool.o \
	objs/addon/store/ngx_rwlock.o \
	objs/addon/store/store_common.o \
	objs/addon/memory/ipc.o \
	objs/addon/memory/ipc-handlers.o \
	objs/addon/memory/groups.o \
	objs/addon/memory/memstore.o \
	objs/addon/hiredis/alloc.o \
	objs/addon/hiredis/async.o \
	objs/addon/hiredis/dict.o \
	objs/addon/hiredis/hiredis.o \
	objs/addon/hiredis/net.o \
	objs/addon/hiredis/read.o \
	objs/addon/hiredis/sds.o \
	objs/addon/hiredis/sockcompat.o \
	objs/addon/hiredis/ssl.o \
	objs/addon/redis/cmp.o \
	objs/addon/redis/redis_lua_commands.o \
	objs/addon/redis/redis_nodeset_parser.o \
	objs/addon/redis/redis_nodeset.o \
	objs/addon/redis/rdsstore.o \
	objs/addon/redis/redis_nginx_adapter.o \
	objs/addon/nginx-upload-progress-module-0.9.1/ngx_http_uploadprogress_module.o \
	objs/addon/src/ndk.o \
	objs/addon/ngx_http_substitutions_filter_module-0.6.4/ngx_http_subs_filter_module.o \
	objs/addon/src/ngx_http_google_filter_module.o \
	objs/addon/src/ngx_http_google_inject.o \
	objs/addon/src/ngx_http_google_request.o \
	objs/addon/src/ngx_http_google_response.o \
	objs/addon/src/ngx_http_google_util.o \
	objs/addon/ngx_http_auth_pam_module-1.4/ngx_http_auth_pam_module.o \
	objs/ngx_modules.o \
	-Wl,-Bsymbolic-functions -Wl,-z,relro -Wl,-z,now -fPIC -ldl -lpthread -lpthread -lcrypt -lmaxminddb ../incubator-pagespeed-ngx-latest-stable/psol/lib/Release/linux/x64/pagespeed_automatic.a -lstdc++ -lrt -pthread -lm -luuid -lm -lpam -lpcre -lssl -lcrypto -ldl -lpthread -lz \
	-Wl,-E
	


modules:

objs/ngx_modules.o:	$(CORE_DEPS) \
	objs/ngx_modules.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/ngx_modules.o \
		objs/ngx_modules.c


objs/src/core/nginx.o:	$(CORE_DEPS) \
	src/core/nginx.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/nginx.o \
		src/core/nginx.c


objs/src/core/ngx_log.o:	$(CORE_DEPS) \
	src/core/ngx_log.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_log.o \
		src/core/ngx_log.c


objs/src/core/ngx_palloc.o:	$(CORE_DEPS) \
	src/core/ngx_palloc.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_palloc.o \
		src/core/ngx_palloc.c


objs/src/core/ngx_array.o:	$(CORE_DEPS) \
	src/core/ngx_array.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_array.o \
		src/core/ngx_array.c


objs/src/core/ngx_list.o:	$(CORE_DEPS) \
	src/core/ngx_list.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_list.o \
		src/core/ngx_list.c


objs/src/core/ngx_hash.o:	$(CORE_DEPS) \
	src/core/ngx_hash.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_hash.o \
		src/core/ngx_hash.c


objs/src/core/ngx_buf.o:	$(CORE_DEPS) \
	src/core/ngx_buf.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_buf.o \
		src/core/ngx_buf.c


objs/src/core/ngx_queue.o:	$(CORE_DEPS) \
	src/core/ngx_queue.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_queue.o \
		src/core/ngx_queue.c


objs/src/core/ngx_output_chain.o:	$(CORE_DEPS) \
	src/core/ngx_output_chain.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_output_chain.o \
		src/core/ngx_output_chain.c


objs/src/core/ngx_string.o:	$(CORE_DEPS) \
	src/core/ngx_string.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_string.o \
		src/core/ngx_string.c


objs/src/core/ngx_parse.o:	$(CORE_DEPS) \
	src/core/ngx_parse.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_parse.o \
		src/core/ngx_parse.c


objs/src/core/ngx_parse_time.o:	$(CORE_DEPS) \
	src/core/ngx_parse_time.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_parse_time.o \
		src/core/ngx_parse_time.c


objs/src/core/ngx_inet.o:	$(CORE_DEPS) \
	src/core/ngx_inet.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_inet.o \
		src/core/ngx_inet.c


objs/src/core/ngx_file.o:	$(CORE_DEPS) \
	src/core/ngx_file.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_file.o \
		src/core/ngx_file.c


objs/src/core/ngx_crc32.o:	$(CORE_DEPS) \
	src/core/ngx_crc32.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_crc32.o \
		src/core/ngx_crc32.c


objs/src/core/ngx_murmurhash.o:	$(CORE_DEPS) \
	src/core/ngx_murmurhash.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_murmurhash.o \
		src/core/ngx_murmurhash.c


objs/src/core/ngx_md5.o:	$(CORE_DEPS) \
	src/core/ngx_md5.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_md5.o \
		src/core/ngx_md5.c


objs/src/core/ngx_sha1.o:	$(CORE_DEPS) \
	src/core/ngx_sha1.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_sha1.o \
		src/core/ngx_sha1.c


objs/src/core/ngx_rbtree.o:	$(CORE_DEPS) \
	src/core/ngx_rbtree.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_rbtree.o \
		src/core/ngx_rbtree.c


objs/src/core/ngx_radix_tree.o:	$(CORE_DEPS) \
	src/core/ngx_radix_tree.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_radix_tree.o \
		src/core/ngx_radix_tree.c


objs/src/core/ngx_slab.o:	$(CORE_DEPS) \
	src/core/ngx_slab.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_slab.o \
		src/core/ngx_slab.c


objs/src/core/ngx_times.o:	$(CORE_DEPS) \
	src/core/ngx_times.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_times.o \
		src/core/ngx_times.c


objs/src/core/ngx_shmtx.o:	$(CORE_DEPS) \
	src/core/ngx_shmtx.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_shmtx.o \
		src/core/ngx_shmtx.c


objs/src/core/ngx_connection.o:	$(CORE_DEPS) \
	src/core/ngx_connection.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_connection.o \
		src/core/ngx_connection.c


objs/src/core/ngx_cycle.o:	$(CORE_DEPS) \
	src/core/ngx_cycle.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_cycle.o \
		src/core/ngx_cycle.c


objs/src/core/ngx_spinlock.o:	$(CORE_DEPS) \
	src/core/ngx_spinlock.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_spinlock.o \
		src/core/ngx_spinlock.c


objs/src/core/ngx_rwlock.o:	$(CORE_DEPS) \
	src/core/ngx_rwlock.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_rwlock.o \
		src/core/ngx_rwlock.c


objs/src/core/ngx_cpuinfo.o:	$(CORE_DEPS) \
	src/core/ngx_cpuinfo.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_cpuinfo.o \
		src/core/ngx_cpuinfo.c


objs/src/core/ngx_conf_file.o:	$(CORE_DEPS) \
	src/core/ngx_conf_file.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_conf_file.o \
		src/core/ngx_conf_file.c


objs/src/core/ngx_module.o:	$(CORE_DEPS) \
	src/core/ngx_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_module.o \
		src/core/ngx_module.c


objs/src/core/ngx_resolver.o:	$(CORE_DEPS) \
	src/core/ngx_resolver.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_resolver.o \
		src/core/ngx_resolver.c


objs/src/core/ngx_open_file_cache.o:	$(CORE_DEPS) \
	src/core/ngx_open_file_cache.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_open_file_cache.o \
		src/core/ngx_open_file_cache.c


objs/src/core/ngx_crypt.o:	$(CORE_DEPS) \
	src/core/ngx_crypt.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_crypt.o \
		src/core/ngx_crypt.c


objs/src/core/ngx_proxy_protocol.o:	$(CORE_DEPS) \
	src/core/ngx_proxy_protocol.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_proxy_protocol.o \
		src/core/ngx_proxy_protocol.c


objs/src/core/ngx_syslog.o:	$(CORE_DEPS) \
	src/core/ngx_syslog.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_syslog.o \
		src/core/ngx_syslog.c


objs/src/event/ngx_event.o:	$(CORE_DEPS) \
	src/event/ngx_event.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event.o \
		src/event/ngx_event.c


objs/src/event/ngx_event_timer.o:	$(CORE_DEPS) \
	src/event/ngx_event_timer.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event_timer.o \
		src/event/ngx_event_timer.c


objs/src/event/ngx_event_posted.o:	$(CORE_DEPS) \
	src/event/ngx_event_posted.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event_posted.o \
		src/event/ngx_event_posted.c


objs/src/event/ngx_event_accept.o:	$(CORE_DEPS) \
	src/event/ngx_event_accept.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event_accept.o \
		src/event/ngx_event_accept.c


objs/src/event/ngx_event_udp.o:	$(CORE_DEPS) \
	src/event/ngx_event_udp.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event_udp.o \
		src/event/ngx_event_udp.c


objs/src/event/ngx_event_connect.o:	$(CORE_DEPS) \
	src/event/ngx_event_connect.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event_connect.o \
		src/event/ngx_event_connect.c


objs/src/event/ngx_event_pipe.o:	$(CORE_DEPS) \
	src/event/ngx_event_pipe.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event_pipe.o \
		src/event/ngx_event_pipe.c


objs/src/os/unix/ngx_time.o:	$(CORE_DEPS) \
	src/os/unix/ngx_time.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_time.o \
		src/os/unix/ngx_time.c


objs/src/os/unix/ngx_errno.o:	$(CORE_DEPS) \
	src/os/unix/ngx_errno.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_errno.o \
		src/os/unix/ngx_errno.c


objs/src/os/unix/ngx_alloc.o:	$(CORE_DEPS) \
	src/os/unix/ngx_alloc.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_alloc.o \
		src/os/unix/ngx_alloc.c


objs/src/os/unix/ngx_files.o:	$(CORE_DEPS) \
	src/os/unix/ngx_files.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_files.o \
		src/os/unix/ngx_files.c


objs/src/os/unix/ngx_socket.o:	$(CORE_DEPS) \
	src/os/unix/ngx_socket.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_socket.o \
		src/os/unix/ngx_socket.c


objs/src/os/unix/ngx_recv.o:	$(CORE_DEPS) \
	src/os/unix/ngx_recv.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_recv.o \
		src/os/unix/ngx_recv.c


objs/src/os/unix/ngx_readv_chain.o:	$(CORE_DEPS) \
	src/os/unix/ngx_readv_chain.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_readv_chain.o \
		src/os/unix/ngx_readv_chain.c


objs/src/os/unix/ngx_udp_recv.o:	$(CORE_DEPS) \
	src/os/unix/ngx_udp_recv.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_udp_recv.o \
		src/os/unix/ngx_udp_recv.c


objs/src/os/unix/ngx_send.o:	$(CORE_DEPS) \
	src/os/unix/ngx_send.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_send.o \
		src/os/unix/ngx_send.c


objs/src/os/unix/ngx_writev_chain.o:	$(CORE_DEPS) \
	src/os/unix/ngx_writev_chain.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_writev_chain.o \
		src/os/unix/ngx_writev_chain.c


objs/src/os/unix/ngx_udp_send.o:	$(CORE_DEPS) \
	src/os/unix/ngx_udp_send.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_udp_send.o \
		src/os/unix/ngx_udp_send.c


objs/src/os/unix/ngx_udp_sendmsg_chain.o:	$(CORE_DEPS) \
	src/os/unix/ngx_udp_sendmsg_chain.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_udp_sendmsg_chain.o \
		src/os/unix/ngx_udp_sendmsg_chain.c


objs/src/os/unix/ngx_channel.o:	$(CORE_DEPS) \
	src/os/unix/ngx_channel.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_channel.o \
		src/os/unix/ngx_channel.c


objs/src/os/unix/ngx_shmem.o:	$(CORE_DEPS) \
	src/os/unix/ngx_shmem.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_shmem.o \
		src/os/unix/ngx_shmem.c


objs/src/os/unix/ngx_process.o:	$(CORE_DEPS) \
	src/os/unix/ngx_process.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_process.o \
		src/os/unix/ngx_process.c


objs/src/os/unix/ngx_daemon.o:	$(CORE_DEPS) \
	src/os/unix/ngx_daemon.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_daemon.o \
		src/os/unix/ngx_daemon.c


objs/src/os/unix/ngx_setaffinity.o:	$(CORE_DEPS) \
	src/os/unix/ngx_setaffinity.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_setaffinity.o \
		src/os/unix/ngx_setaffinity.c


objs/src/os/unix/ngx_setproctitle.o:	$(CORE_DEPS) \
	src/os/unix/ngx_setproctitle.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_setproctitle.o \
		src/os/unix/ngx_setproctitle.c


objs/src/os/unix/ngx_posix_init.o:	$(CORE_DEPS) \
	src/os/unix/ngx_posix_init.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_posix_init.o \
		src/os/unix/ngx_posix_init.c


objs/src/os/unix/ngx_user.o:	$(CORE_DEPS) \
	src/os/unix/ngx_user.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_user.o \
		src/os/unix/ngx_user.c


objs/src/os/unix/ngx_dlopen.o:	$(CORE_DEPS) \
	src/os/unix/ngx_dlopen.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_dlopen.o \
		src/os/unix/ngx_dlopen.c


objs/src/os/unix/ngx_process_cycle.o:	$(CORE_DEPS) \
	src/os/unix/ngx_process_cycle.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_process_cycle.o \
		src/os/unix/ngx_process_cycle.c


objs/src/os/unix/ngx_linux_init.o:	$(CORE_DEPS) \
	src/os/unix/ngx_linux_init.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_linux_init.o \
		src/os/unix/ngx_linux_init.c


objs/src/event/modules/ngx_epoll_module.o:	$(CORE_DEPS) \
	src/event/modules/ngx_epoll_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/modules/ngx_epoll_module.o \
		src/event/modules/ngx_epoll_module.c


objs/src/os/unix/ngx_linux_sendfile_chain.o:	$(CORE_DEPS) \
	src/os/unix/ngx_linux_sendfile_chain.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_linux_sendfile_chain.o \
		src/os/unix/ngx_linux_sendfile_chain.c


objs/src/core/ngx_thread_pool.o:	$(CORE_DEPS) \
	src/core/ngx_thread_pool.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_thread_pool.o \
		src/core/ngx_thread_pool.c


objs/src/os/unix/ngx_thread_cond.o:	$(CORE_DEPS) \
	src/os/unix/ngx_thread_cond.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_thread_cond.o \
		src/os/unix/ngx_thread_cond.c


objs/src/os/unix/ngx_thread_mutex.o:	$(CORE_DEPS) \
	src/os/unix/ngx_thread_mutex.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_thread_mutex.o \
		src/os/unix/ngx_thread_mutex.c


objs/src/os/unix/ngx_thread_id.o:	$(CORE_DEPS) \
	src/os/unix/ngx_thread_id.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/os/unix/ngx_thread_id.o \
		src/os/unix/ngx_thread_id.c


objs/src/event/ngx_event_openssl.o:	$(CORE_DEPS) \
	src/event/ngx_event_openssl.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event_openssl.o \
		src/event/ngx_event_openssl.c


objs/src/event/ngx_event_openssl_stapling.o:	$(CORE_DEPS) \
	src/event/ngx_event_openssl_stapling.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/ngx_event_openssl_stapling.o \
		src/event/ngx_event_openssl_stapling.c


objs/src/core/ngx_regex.o:	$(CORE_DEPS) \
	src/core/ngx_regex.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/ngx_regex.o \
		src/core/ngx_regex.c


objs/src/http/ngx_http.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http.o \
		src/http/ngx_http.c


objs/src/http/ngx_http_core_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_core_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_core_module.o \
		src/http/ngx_http_core_module.c


objs/src/http/ngx_http_special_response.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_special_response.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_special_response.o \
		src/http/ngx_http_special_response.c


objs/src/http/ngx_http_request.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_request.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_request.o \
		src/http/ngx_http_request.c


objs/src/http/ngx_http_parse.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_parse.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_parse.o \
		src/http/ngx_http_parse.c


objs/src/http/modules/ngx_http_log_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_log_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_log_module.o \
		src/http/modules/ngx_http_log_module.c


objs/src/http/ngx_http_request_body.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_request_body.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_request_body.o \
		src/http/ngx_http_request_body.c


objs/src/http/ngx_http_variables.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_variables.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_variables.o \
		src/http/ngx_http_variables.c


objs/src/http/ngx_http_script.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_script.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_script.o \
		src/http/ngx_http_script.c


objs/src/http/ngx_http_upstream.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_upstream.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_upstream.o \
		src/http/ngx_http_upstream.c


objs/src/http/ngx_http_upstream_round_robin.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_upstream_round_robin.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_upstream_round_robin.o \
		src/http/ngx_http_upstream_round_robin.c


objs/src/http/ngx_http_file_cache.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_file_cache.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_file_cache.o \
		src/http/ngx_http_file_cache.c


objs/src/http/ngx_http_write_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_write_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_write_filter_module.o \
		src/http/ngx_http_write_filter_module.c


objs/src/http/ngx_http_header_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_header_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_header_filter_module.o \
		src/http/ngx_http_header_filter_module.c


objs/src/http/modules/ngx_http_chunked_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_chunked_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_chunked_filter_module.o \
		src/http/modules/ngx_http_chunked_filter_module.c


objs/src/http/v2/ngx_http_v2_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v2/ngx_http_v2_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v2/ngx_http_v2_filter_module.o \
		src/http/v2/ngx_http_v2_filter_module.c


objs/src/http/modules/ngx_http_range_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_range_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_range_filter_module.o \
		src/http/modules/ngx_http_range_filter_module.c


objs/src/http/modules/ngx_http_gzip_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_gzip_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_gzip_filter_module.o \
		src/http/modules/ngx_http_gzip_filter_module.c


objs/src/http/ngx_http_postpone_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_postpone_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_postpone_filter_module.o \
		src/http/ngx_http_postpone_filter_module.c


objs/src/http/modules/ngx_http_ssi_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_ssi_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_ssi_filter_module.o \
		src/http/modules/ngx_http_ssi_filter_module.c


objs/src/http/modules/ngx_http_charset_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_charset_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_charset_filter_module.o \
		src/http/modules/ngx_http_charset_filter_module.c


objs/src/http/modules/ngx_http_sub_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_sub_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_sub_filter_module.o \
		src/http/modules/ngx_http_sub_filter_module.c


objs/src/http/modules/ngx_http_addition_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_addition_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_addition_filter_module.o \
		src/http/modules/ngx_http_addition_filter_module.c


objs/src/http/modules/ngx_http_gunzip_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_gunzip_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_gunzip_filter_module.o \
		src/http/modules/ngx_http_gunzip_filter_module.c


objs/src/http/modules/ngx_http_userid_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_userid_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_userid_filter_module.o \
		src/http/modules/ngx_http_userid_filter_module.c


objs/src/http/modules/ngx_http_headers_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_headers_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_headers_filter_module.o \
		src/http/modules/ngx_http_headers_filter_module.c


objs/src/http/ngx_http_copy_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_copy_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/ngx_http_copy_filter_module.o \
		src/http/ngx_http_copy_filter_module.c


objs/src/http/modules/ngx_http_not_modified_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_not_modified_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_not_modified_filter_module.o \
		src/http/modules/ngx_http_not_modified_filter_module.c


objs/src/http/modules/ngx_http_slice_filter_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_slice_filter_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_slice_filter_module.o \
		src/http/modules/ngx_http_slice_filter_module.c


objs/src/http/v2/ngx_http_v2.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v2/ngx_http_v2.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v2/ngx_http_v2.o \
		src/http/v2/ngx_http_v2.c


objs/src/http/v2/ngx_http_v2_table.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v2/ngx_http_v2_table.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v2/ngx_http_v2_table.o \
		src/http/v2/ngx_http_v2_table.c


objs/src/http/v2/ngx_http_v2_encode.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v2/ngx_http_v2_encode.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v2/ngx_http_v2_encode.o \
		src/http/v2/ngx_http_v2_encode.c


objs/src/http/v2/ngx_http_v2_huff_decode.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v2/ngx_http_v2_huff_decode.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v2/ngx_http_v2_huff_decode.o \
		src/http/v2/ngx_http_v2_huff_decode.c


objs/src/http/v2/ngx_http_v2_huff_encode.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v2/ngx_http_v2_huff_encode.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v2/ngx_http_v2_huff_encode.o \
		src/http/v2/ngx_http_v2_huff_encode.c


objs/src/http/v2/ngx_http_v2_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/v2/ngx_http_v2_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/v2/ngx_http_v2_module.o \
		src/http/v2/ngx_http_v2_module.c


objs/src/http/modules/ngx_http_static_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_static_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_static_module.o \
		src/http/modules/ngx_http_static_module.c


objs/src/http/modules/ngx_http_gzip_static_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_gzip_static_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_gzip_static_module.o \
		src/http/modules/ngx_http_gzip_static_module.c


objs/src/http/modules/ngx_http_dav_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_dav_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_dav_module.o \
		src/http/modules/ngx_http_dav_module.c


objs/src/http/modules/ngx_http_autoindex_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_autoindex_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_autoindex_module.o \
		src/http/modules/ngx_http_autoindex_module.c


objs/src/http/modules/ngx_http_index_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_index_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_index_module.o \
		src/http/modules/ngx_http_index_module.c


objs/src/http/modules/ngx_http_mirror_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_mirror_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_mirror_module.o \
		src/http/modules/ngx_http_mirror_module.c


objs/src/http/modules/ngx_http_try_files_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_try_files_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_try_files_module.o \
		src/http/modules/ngx_http_try_files_module.c


objs/src/http/modules/ngx_http_auth_request_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_auth_request_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_auth_request_module.o \
		src/http/modules/ngx_http_auth_request_module.c


objs/src/http/modules/ngx_http_auth_basic_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_auth_basic_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_auth_basic_module.o \
		src/http/modules/ngx_http_auth_basic_module.c


objs/src/http/modules/ngx_http_access_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_access_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_access_module.o \
		src/http/modules/ngx_http_access_module.c


objs/src/http/modules/ngx_http_limit_conn_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_limit_conn_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_limit_conn_module.o \
		src/http/modules/ngx_http_limit_conn_module.c


objs/src/http/modules/ngx_http_limit_req_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_limit_req_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_limit_req_module.o \
		src/http/modules/ngx_http_limit_req_module.c


objs/src/http/modules/ngx_http_realip_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_realip_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_realip_module.o \
		src/http/modules/ngx_http_realip_module.c


objs/src/http/modules/ngx_http_geo_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_geo_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_geo_module.o \
		src/http/modules/ngx_http_geo_module.c


objs/src/http/modules/ngx_http_map_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_map_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_map_module.o \
		src/http/modules/ngx_http_map_module.c


objs/src/http/modules/ngx_http_split_clients_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_split_clients_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_split_clients_module.o \
		src/http/modules/ngx_http_split_clients_module.c


objs/src/http/modules/ngx_http_referer_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_referer_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_referer_module.o \
		src/http/modules/ngx_http_referer_module.c


objs/src/http/modules/ngx_http_rewrite_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_rewrite_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_rewrite_module.o \
		src/http/modules/ngx_http_rewrite_module.c


objs/src/http/modules/ngx_http_ssl_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_ssl_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_ssl_module.o \
		src/http/modules/ngx_http_ssl_module.c


objs/src/http/modules/ngx_http_proxy_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_proxy_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_proxy_module.o \
		src/http/modules/ngx_http_proxy_module.c


objs/src/http/modules/ngx_http_fastcgi_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_fastcgi_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_fastcgi_module.o \
		src/http/modules/ngx_http_fastcgi_module.c


objs/src/http/modules/ngx_http_uwsgi_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_uwsgi_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_uwsgi_module.o \
		src/http/modules/ngx_http_uwsgi_module.c


objs/src/http/modules/ngx_http_scgi_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_scgi_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_scgi_module.o \
		src/http/modules/ngx_http_scgi_module.c


objs/src/http/modules/ngx_http_grpc_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_grpc_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_grpc_module.o \
		src/http/modules/ngx_http_grpc_module.c


objs/src/http/modules/ngx_http_memcached_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_memcached_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_memcached_module.o \
		src/http/modules/ngx_http_memcached_module.c


objs/src/http/modules/ngx_http_empty_gif_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_empty_gif_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_empty_gif_module.o \
		src/http/modules/ngx_http_empty_gif_module.c


objs/src/http/modules/ngx_http_browser_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_browser_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_browser_module.o \
		src/http/modules/ngx_http_browser_module.c


objs/src/http/modules/ngx_http_upstream_hash_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_hash_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_upstream_hash_module.o \
		src/http/modules/ngx_http_upstream_hash_module.c


objs/src/http/modules/ngx_http_upstream_ip_hash_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_ip_hash_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_upstream_ip_hash_module.o \
		src/http/modules/ngx_http_upstream_ip_hash_module.c


objs/src/http/modules/ngx_http_upstream_least_conn_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_least_conn_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_upstream_least_conn_module.o \
		src/http/modules/ngx_http_upstream_least_conn_module.c


objs/src/http/modules/ngx_http_upstream_random_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_random_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_upstream_random_module.o \
		src/http/modules/ngx_http_upstream_random_module.c


objs/src/http/modules/ngx_http_upstream_keepalive_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_keepalive_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_upstream_keepalive_module.o \
		src/http/modules/ngx_http_upstream_keepalive_module.c


objs/src/http/modules/ngx_http_upstream_zone_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_zone_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_upstream_zone_module.o \
		src/http/modules/ngx_http_upstream_zone_module.c


objs/src/http/modules/ngx_http_stub_status_module.o:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_stub_status_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) $(HTTP_INCS) \
		-o objs/src/http/modules/ngx_http_stub_status_module.o \
		src/http/modules/ngx_http_stub_status_module.c


objs/addon/ngx_http_geoip2_module/ngx_http_geoip2_module.o:	$(ADDON_DEPS) \
	../ngx_http_geoip2_module/ngx_http_geoip2_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/ngx_http_geoip2_module/ngx_http_geoip2_module.o \
		../ngx_http_geoip2_module/ngx_http_geoip2_module.c


objs/addon/ngx_cache_purge-2.3/ngx_cache_purge_module.o:	$(ADDON_DEPS) \
	../ngx_cache_purge-2.3/ngx_cache_purge_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/ngx_cache_purge-2.3/ngx_cache_purge_module.o \
		../ngx_cache_purge-2.3/ngx_cache_purge_module.c


objs/addon/src/ngx_http_headers_more_filter_module.o:	$(ADDON_DEPS) \
	../headers-more-nginx-module-0.29/src/ngx_http_headers_more_filter_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_headers_more_filter_module.o \
		../headers-more-nginx-module-0.29/src/ngx_http_headers_more_filter_module.c


objs/addon/src/ngx_http_headers_more_headers_out.o:	$(ADDON_DEPS) \
	../headers-more-nginx-module-0.29/src/ngx_http_headers_more_headers_out.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_headers_more_headers_out.o \
		../headers-more-nginx-module-0.29/src/ngx_http_headers_more_headers_out.c


objs/addon/src/ngx_http_headers_more_headers_in.o:	$(ADDON_DEPS) \
	../headers-more-nginx-module-0.29/src/ngx_http_headers_more_headers_in.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_headers_more_headers_in.o \
		../headers-more-nginx-module-0.29/src/ngx_http_headers_more_headers_in.c


objs/addon/src/ngx_http_headers_more_util.o:	$(ADDON_DEPS) \
	../headers-more-nginx-module-0.29/src/ngx_http_headers_more_util.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_headers_more_util.o \
		../headers-more-nginx-module-0.29/src/ngx_http_headers_more_util.c


objs/addon/src/log_message_handler.o:	$(ADDON_DEPS) \
	../incubator-pagespeed-ngx-latest-stable/src/log_message_handler.cc
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/log_message_handler.o \
		../incubator-pagespeed-ngx-latest-stable/src/log_message_handler.cc


objs/addon/src/ngx_base_fetch.o:	$(ADDON_DEPS) \
	../incubator-pagespeed-ngx-latest-stable/src/ngx_base_fetch.cc
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_base_fetch.o \
		../incubator-pagespeed-ngx-latest-stable/src/ngx_base_fetch.cc


objs/addon/src/ngx_caching_headers.o:	$(ADDON_DEPS) \
	../incubator-pagespeed-ngx-latest-stable/src/ngx_caching_headers.cc
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_caching_headers.o \
		../incubator-pagespeed-ngx-latest-stable/src/ngx_caching_headers.cc


objs/addon/src/ngx_event_connection.o:	$(ADDON_DEPS) \
	../incubator-pagespeed-ngx-latest-stable/src/ngx_event_connection.cc
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_event_connection.o \
		../incubator-pagespeed-ngx-latest-stable/src/ngx_event_connection.cc


objs/addon/src/ngx_fetch.o:	$(ADDON_DEPS) \
	../incubator-pagespeed-ngx-latest-stable/src/ngx_fetch.cc
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_fetch.o \
		../incubator-pagespeed-ngx-latest-stable/src/ngx_fetch.cc


objs/addon/src/ngx_gzip_setter.o:	$(ADDON_DEPS) \
	../incubator-pagespeed-ngx-latest-stable/src/ngx_gzip_setter.cc
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_gzip_setter.o \
		../incubator-pagespeed-ngx-latest-stable/src/ngx_gzip_setter.cc


objs/addon/src/ngx_list_iterator.o:	$(ADDON_DEPS) \
	../incubator-pagespeed-ngx-latest-stable/src/ngx_list_iterator.cc
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_list_iterator.o \
		../incubator-pagespeed-ngx-latest-stable/src/ngx_list_iterator.cc


objs/addon/src/ngx_message_handler.o:	$(ADDON_DEPS) \
	../incubator-pagespeed-ngx-latest-stable/src/ngx_message_handler.cc
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_message_handler.o \
		../incubator-pagespeed-ngx-latest-stable/src/ngx_message_handler.cc


objs/addon/src/ngx_pagespeed.o:	$(ADDON_DEPS) \
	../incubator-pagespeed-ngx-latest-stable/src/ngx_pagespeed.cc
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_pagespeed.o \
		../incubator-pagespeed-ngx-latest-stable/src/ngx_pagespeed.cc


objs/addon/src/ngx_rewrite_driver_factory.o:	$(ADDON_DEPS) \
	../incubator-pagespeed-ngx-latest-stable/src/ngx_rewrite_driver_factory.cc
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_rewrite_driver_factory.o \
		../incubator-pagespeed-ngx-latest-stable/src/ngx_rewrite_driver_factory.cc


objs/addon/src/ngx_rewrite_options.o:	$(ADDON_DEPS) \
	../incubator-pagespeed-ngx-latest-stable/src/ngx_rewrite_options.cc
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_rewrite_options.o \
		../incubator-pagespeed-ngx-latest-stable/src/ngx_rewrite_options.cc


objs/addon/src/ngx_server_context.o:	$(ADDON_DEPS) \
	../incubator-pagespeed-ngx-latest-stable/src/ngx_server_context.cc
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_server_context.o \
		../incubator-pagespeed-ngx-latest-stable/src/ngx_server_context.cc


objs/addon/src/ngx_url_async_fetcher.o:	$(ADDON_DEPS) \
	../incubator-pagespeed-ngx-latest-stable/src/ngx_url_async_fetcher.cc
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_url_async_fetcher.o \
		../incubator-pagespeed-ngx-latest-stable/src/ngx_url_async_fetcher.cc


objs/addon/src/nchan_defs.o:	$(ADDON_DEPS) \
	../nchan/src/nchan_defs.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/nchan_defs.o \
		../nchan/src/nchan_defs.c


objs/addon/src/nchan_variables.o:	$(ADDON_DEPS) \
	../nchan/src/nchan_variables.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/nchan_variables.o \
		../nchan/src/nchan_variables.c


objs/addon/src/nchan_module.o:	$(ADDON_DEPS) \
	../nchan/src/nchan_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/nchan_module.o \
		../nchan/src/nchan_module.c


objs/addon/util/nchan_debug.o:	$(ADDON_DEPS) \
	../nchan/src/util/nchan_debug.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/util/nchan_debug.o \
		../nchan/src/util/nchan_debug.c


objs/addon/util/nchan_list.o:	$(ADDON_DEPS) \
	../nchan/src/util/nchan_list.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/util/nchan_list.o \
		../nchan/src/util/nchan_list.c


objs/addon/util/nchan_slist.o:	$(ADDON_DEPS) \
	../nchan/src/util/nchan_slist.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/util/nchan_slist.o \
		../nchan/src/util/nchan_slist.c


objs/addon/util/ngx_nchan_hacked_slab.o:	$(ADDON_DEPS) \
	../nchan/src/util/ngx_nchan_hacked_slab.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/util/ngx_nchan_hacked_slab.o \
		../nchan/src/util/ngx_nchan_hacked_slab.c


objs/addon/util/shmem.o:	$(ADDON_DEPS) \
	../nchan/src/util/shmem.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/util/shmem.o \
		../nchan/src/util/shmem.c


objs/addon/util/nchan_rbtree.o:	$(ADDON_DEPS) \
	../nchan/src/util/nchan_rbtree.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/util/nchan_rbtree.o \
		../nchan/src/util/nchan_rbtree.c


objs/addon/util/nchan_reuse_queue.o:	$(ADDON_DEPS) \
	../nchan/src/util/nchan_reuse_queue.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/util/nchan_reuse_queue.o \
		../nchan/src/util/nchan_reuse_queue.c


objs/addon/util/nchan_output.o:	$(ADDON_DEPS) \
	../nchan/src/util/nchan_output.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/util/nchan_output.o \
		../nchan/src/util/nchan_output.c


objs/addon/util/nchan_util.o:	$(ADDON_DEPS) \
	../nchan/src/util/nchan_util.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/util/nchan_util.o \
		../nchan/src/util/nchan_util.c


objs/addon/util/nchan_fake_request.o:	$(ADDON_DEPS) \
	../nchan/src/util/nchan_fake_request.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/util/nchan_fake_request.o \
		../nchan/src/util/nchan_fake_request.c


objs/addon/util/nchan_bufchainpool.o:	$(ADDON_DEPS) \
	../nchan/src/util/nchan_bufchainpool.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/util/nchan_bufchainpool.o \
		../nchan/src/util/nchan_bufchainpool.c


objs/addon/util/nchan_channel_id.o:	$(ADDON_DEPS) \
	../nchan/src/util/nchan_channel_id.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/util/nchan_channel_id.o \
		../nchan/src/util/nchan_channel_id.c


objs/addon/util/nchan_output_info.o:	$(ADDON_DEPS) \
	../nchan/src/util/nchan_output_info.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/util/nchan_output_info.o \
		../nchan/src/util/nchan_output_info.c


objs/addon/util/nchan_msg.o:	$(ADDON_DEPS) \
	../nchan/src/util/nchan_msg.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/util/nchan_msg.o \
		../nchan/src/util/nchan_msg.c


objs/addon/util/nchan_thingcache.o:	$(ADDON_DEPS) \
	../nchan/src/util/nchan_thingcache.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/util/nchan_thingcache.o \
		../nchan/src/util/nchan_thingcache.c


objs/addon/util/nchan_reaper.o:	$(ADDON_DEPS) \
	../nchan/src/util/nchan_reaper.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/util/nchan_reaper.o \
		../nchan/src/util/nchan_reaper.c


objs/addon/util/nchan_subrequest.o:	$(ADDON_DEPS) \
	../nchan/src/util/nchan_subrequest.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/util/nchan_subrequest.o \
		../nchan/src/util/nchan_subrequest.c


objs/addon/util/nchan_benchmark.o:	$(ADDON_DEPS) \
	../nchan/src/util/nchan_benchmark.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/util/nchan_benchmark.o \
		../nchan/src/util/nchan_benchmark.c


objs/addon/util/hdr_histogram.o:	$(ADDON_DEPS) \
	../nchan/src/util/hdr_histogram.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/util/hdr_histogram.o \
		../nchan/src/util/hdr_histogram.c


objs/addon/subscribers/common.o:	$(ADDON_DEPS) \
	../nchan/src/subscribers/common.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/subscribers/common.o \
		../nchan/src/subscribers/common.c


objs/addon/subscribers/longpoll.o:	$(ADDON_DEPS) \
	../nchan/src/subscribers/longpoll.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/subscribers/longpoll.o \
		../nchan/src/subscribers/longpoll.c


objs/addon/subscribers/intervalpoll.o:	$(ADDON_DEPS) \
	../nchan/src/subscribers/intervalpoll.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/subscribers/intervalpoll.o \
		../nchan/src/subscribers/intervalpoll.c


objs/addon/subscribers/eventsource.o:	$(ADDON_DEPS) \
	../nchan/src/subscribers/eventsource.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/subscribers/eventsource.o \
		../nchan/src/subscribers/eventsource.c


objs/addon/subscribers/http-chunked.o:	$(ADDON_DEPS) \
	../nchan/src/subscribers/http-chunked.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/subscribers/http-chunked.o \
		../nchan/src/subscribers/http-chunked.c


objs/addon/subscribers/http-multipart-mixed.o:	$(ADDON_DEPS) \
	../nchan/src/subscribers/http-multipart-mixed.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/subscribers/http-multipart-mixed.o \
		../nchan/src/subscribers/http-multipart-mixed.c


objs/addon/subscribers/http-raw-stream.o:	$(ADDON_DEPS) \
	../nchan/src/subscribers/http-raw-stream.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/subscribers/http-raw-stream.o \
		../nchan/src/subscribers/http-raw-stream.c


objs/addon/subscribers/websocket.o:	$(ADDON_DEPS) \
	../nchan/src/subscribers/websocket.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/subscribers/websocket.o \
		../nchan/src/subscribers/websocket.c


objs/addon/src/nchan_websocket_publisher.o:	$(ADDON_DEPS) \
	../nchan/src/nchan_websocket_publisher.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/nchan_websocket_publisher.o \
		../nchan/src/nchan_websocket_publisher.c


objs/addon/subscribers/internal.o:	$(ADDON_DEPS) \
	../nchan/src/subscribers/internal.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/subscribers/internal.o \
		../nchan/src/subscribers/internal.c


objs/addon/subscribers/memstore_ipc.o:	$(ADDON_DEPS) \
	../nchan/src/subscribers/memstore_ipc.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/subscribers/memstore_ipc.o \
		../nchan/src/subscribers/memstore_ipc.c


objs/addon/subscribers/memstore_multi.o:	$(ADDON_DEPS) \
	../nchan/src/subscribers/memstore_multi.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/subscribers/memstore_multi.o \
		../nchan/src/subscribers/memstore_multi.c


objs/addon/subscribers/memstore_redis.o:	$(ADDON_DEPS) \
	../nchan/src/subscribers/memstore_redis.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/subscribers/memstore_redis.o \
		../nchan/src/subscribers/memstore_redis.c


objs/addon/subscribers/getmsg_proxy.o:	$(ADDON_DEPS) \
	../nchan/src/subscribers/getmsg_proxy.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/subscribers/getmsg_proxy.o \
		../nchan/src/subscribers/getmsg_proxy.c


objs/addon/subscribers/benchmark.o:	$(ADDON_DEPS) \
	../nchan/src/subscribers/benchmark.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/subscribers/benchmark.o \
		../nchan/src/subscribers/benchmark.c


objs/addon/store/spool.o:	$(ADDON_DEPS) \
	../nchan/src/store/spool.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/store/spool.o \
		../nchan/src/store/spool.c


objs/addon/store/ngx_rwlock.o:	$(ADDON_DEPS) \
	../nchan/src/store/ngx_rwlock.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/store/ngx_rwlock.o \
		../nchan/src/store/ngx_rwlock.c


objs/addon/store/store_common.o:	$(ADDON_DEPS) \
	../nchan/src/store/store_common.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/store/store_common.o \
		../nchan/src/store/store_common.c


objs/addon/memory/ipc.o:	$(ADDON_DEPS) \
	../nchan/src/store/memory/ipc.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/memory/ipc.o \
		../nchan/src/store/memory/ipc.c


objs/addon/memory/ipc-handlers.o:	$(ADDON_DEPS) \
	../nchan/src/store/memory/ipc-handlers.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/memory/ipc-handlers.o \
		../nchan/src/store/memory/ipc-handlers.c


objs/addon/memory/groups.o:	$(ADDON_DEPS) \
	../nchan/src/store/memory/groups.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/memory/groups.o \
		../nchan/src/store/memory/groups.c


objs/addon/memory/memstore.o:	$(ADDON_DEPS) \
	../nchan/src/store/memory/memstore.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/memory/memstore.o \
		../nchan/src/store/memory/memstore.c


objs/addon/hiredis/alloc.o:	$(ADDON_DEPS) \
	../nchan/src/store/redis/hiredis/alloc.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/hiredis/alloc.o \
		../nchan/src/store/redis/hiredis/alloc.c


objs/addon/hiredis/async.o:	$(ADDON_DEPS) \
	../nchan/src/store/redis/hiredis/async.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/hiredis/async.o \
		../nchan/src/store/redis/hiredis/async.c


objs/addon/hiredis/dict.o:	$(ADDON_DEPS) \
	../nchan/src/store/redis/hiredis/dict.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/hiredis/dict.o \
		../nchan/src/store/redis/hiredis/dict.c


objs/addon/hiredis/hiredis.o:	$(ADDON_DEPS) \
	../nchan/src/store/redis/hiredis/hiredis.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/hiredis/hiredis.o \
		../nchan/src/store/redis/hiredis/hiredis.c


objs/addon/hiredis/net.o:	$(ADDON_DEPS) \
	../nchan/src/store/redis/hiredis/net.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/hiredis/net.o \
		../nchan/src/store/redis/hiredis/net.c


objs/addon/hiredis/read.o:	$(ADDON_DEPS) \
	../nchan/src/store/redis/hiredis/read.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/hiredis/read.o \
		../nchan/src/store/redis/hiredis/read.c


objs/addon/hiredis/sds.o:	$(ADDON_DEPS) \
	../nchan/src/store/redis/hiredis/sds.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/hiredis/sds.o \
		../nchan/src/store/redis/hiredis/sds.c


objs/addon/hiredis/sockcompat.o:	$(ADDON_DEPS) \
	../nchan/src/store/redis/hiredis/sockcompat.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/hiredis/sockcompat.o \
		../nchan/src/store/redis/hiredis/sockcompat.c


objs/addon/hiredis/ssl.o:	$(ADDON_DEPS) \
	../nchan/src/store/redis/hiredis/ssl.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/hiredis/ssl.o \
		../nchan/src/store/redis/hiredis/ssl.c


objs/addon/redis/cmp.o:	$(ADDON_DEPS) \
	../nchan/src/store/redis/cmp.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/redis/cmp.o \
		../nchan/src/store/redis/cmp.c


objs/addon/redis/redis_lua_commands.o:	$(ADDON_DEPS) \
	../nchan/src/store/redis/redis_lua_commands.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/redis/redis_lua_commands.o \
		../nchan/src/store/redis/redis_lua_commands.c


objs/addon/redis/redis_nodeset_parser.o:	$(ADDON_DEPS) \
	../nchan/src/store/redis/redis_nodeset_parser.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/redis/redis_nodeset_parser.o \
		../nchan/src/store/redis/redis_nodeset_parser.c


objs/addon/redis/redis_nodeset.o:	$(ADDON_DEPS) \
	../nchan/src/store/redis/redis_nodeset.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/redis/redis_nodeset.o \
		../nchan/src/store/redis/redis_nodeset.c


objs/addon/redis/rdsstore.o:	$(ADDON_DEPS) \
	../nchan/src/store/redis/rdsstore.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/redis/rdsstore.o \
		../nchan/src/store/redis/rdsstore.c


objs/addon/redis/redis_nginx_adapter.o:	$(ADDON_DEPS) \
	../nchan/src/store/redis/redis_nginx_adapter.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/redis/redis_nginx_adapter.o \
		../nchan/src/store/redis/redis_nginx_adapter.c


objs/addon/nginx-upload-progress-module-0.9.1/ngx_http_uploadprogress_module.o:	$(ADDON_DEPS) \
	../nginx-upload-progress-module-0.9.1/ngx_http_uploadprogress_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/nginx-upload-progress-module-0.9.1/ngx_http_uploadprogress_module.o \
		../nginx-upload-progress-module-0.9.1/ngx_http_uploadprogress_module.c


objs/addon/src/ndk.o:	$(ADDON_DEPS) \
	../ngx_devel_kit-0.2.19/src/ndk.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ndk.o \
		../ngx_devel_kit-0.2.19/src/ndk.c


objs/addon/ngx_http_substitutions_filter_module-0.6.4/ngx_http_subs_filter_module.o:	$(ADDON_DEPS) \
	../ngx_http_substitutions_filter_module-0.6.4/ngx_http_subs_filter_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/ngx_http_substitutions_filter_module-0.6.4/ngx_http_subs_filter_module.o \
		../ngx_http_substitutions_filter_module-0.6.4/ngx_http_subs_filter_module.c


objs/addon/src/ngx_http_google_filter_module.o:	$(ADDON_DEPS) \
	../ngx_http_google_filter_module-0.2.0/src/ngx_http_google_filter_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_google_filter_module.o \
		../ngx_http_google_filter_module-0.2.0/src/ngx_http_google_filter_module.c


objs/addon/src/ngx_http_google_inject.o:	$(ADDON_DEPS) \
	../ngx_http_google_filter_module-0.2.0/src/ngx_http_google_inject.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_google_inject.o \
		../ngx_http_google_filter_module-0.2.0/src/ngx_http_google_inject.c


objs/addon/src/ngx_http_google_request.o:	$(ADDON_DEPS) \
	../ngx_http_google_filter_module-0.2.0/src/ngx_http_google_request.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_google_request.o \
		../ngx_http_google_filter_module-0.2.0/src/ngx_http_google_request.c


objs/addon/src/ngx_http_google_response.o:	$(ADDON_DEPS) \
	../ngx_http_google_filter_module-0.2.0/src/ngx_http_google_response.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_google_response.o \
		../ngx_http_google_filter_module-0.2.0/src/ngx_http_google_response.c


objs/addon/src/ngx_http_google_util.o:	$(ADDON_DEPS) \
	../ngx_http_google_filter_module-0.2.0/src/ngx_http_google_util.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/src/ngx_http_google_util.o \
		../ngx_http_google_filter_module-0.2.0/src/ngx_http_google_util.c


objs/addon/ngx_http_auth_pam_module-1.4/ngx_http_auth_pam_module.o:	$(ADDON_DEPS) \
	../ngx_http_auth_pam_module-1.4/ngx_http_auth_pam_module.c
	$(CC) -c $(CFLAGS)  $(ALL_INCS) \
		-o objs/addon/ngx_http_auth_pam_module-1.4/ngx_http_auth_pam_module.o \
		../ngx_http_auth_pam_module-1.4/ngx_http_auth_pam_module.c

objs/addon/src/ngx_http_geoip2_module.c.o : CFLAGS += --std=c++11
objs/addon/src/ngx_cache_purge_module.c.o : CFLAGS += --std=c++11
objs/addon/src/ngx_http_headers_more_filter_module.c.o : CFLAGS += --std=c++11
objs/addon/src/ngx_http_headers_more_headers_out.c.o : CFLAGS += --std=c++11
objs/addon/src/ngx_http_headers_more_headers_in.c.o : CFLAGS += --std=c++11
objs/addon/src/ngx_http_headers_more_util.c.o : CFLAGS += --std=c++11
objs/addon/src/log_message_handler.o : CFLAGS += --std=c++11
objs/addon/src/ngx_base_fetch.o : CFLAGS += --std=c++11
objs/addon/src/ngx_caching_headers.o : CFLAGS += --std=c++11
objs/addon/src/ngx_event_connection.o : CFLAGS += --std=c++11
objs/addon/src/ngx_fetch.o : CFLAGS += --std=c++11
objs/addon/src/ngx_gzip_setter.o : CFLAGS += --std=c++11
objs/addon/src/ngx_list_iterator.o : CFLAGS += --std=c++11
objs/addon/src/ngx_message_handler.o : CFLAGS += --std=c++11
objs/addon/src/ngx_pagespeed.o : CFLAGS += --std=c++11
objs/addon/src/ngx_rewrite_driver_factory.o : CFLAGS += --std=c++11
objs/addon/src/ngx_rewrite_options.o : CFLAGS += --std=c++11
objs/addon/src/ngx_server_context.o : CFLAGS += --std=c++11
objs/addon/src/ngx_url_async_fetcher.o : CFLAGS += --std=c++11

manpage:	objs/nginx.8

objs/nginx.8:	man/nginx.8 objs/ngx_auto_config.h
	sed -e "s|%%PREFIX%%|/usr/share/nginx|" \
		-e "s|%%PID_PATH%%|/run/nginx.pid|" \
		-e "s|%%CONF_PATH%%|/etc/nginx/nginx.conf|" \
		-e "s|%%ERROR_LOG_PATH%%|/var/log/nginx/error.log|" \
		< man/nginx.8 > $@

install:	build 
	test -d '$(DESTDIR)/usr/share/nginx' || mkdir -p '$(DESTDIR)/usr/share/nginx'

	test -d '$(DESTDIR)/usr/share/nginx/sbin' \
		|| mkdir -p '$(DESTDIR)/usr/share/nginx/sbin'
	test ! -f '$(DESTDIR)/usr/share/nginx/sbin/nginx' \
		|| mv '$(DESTDIR)/usr/share/nginx/sbin/nginx' \
			'$(DESTDIR)/usr/share/nginx/sbin/nginx.old'
	cp objs/nginx '$(DESTDIR)/usr/share/nginx/sbin/nginx'

	test -d '$(DESTDIR)/etc/nginx' \
		|| mkdir -p '$(DESTDIR)/etc/nginx'

	cp conf/koi-win '$(DESTDIR)/etc/nginx'
	cp conf/koi-utf '$(DESTDIR)/etc/nginx'
	cp conf/win-utf '$(DESTDIR)/etc/nginx'

	test -f '$(DESTDIR)/etc/nginx/mime.types' \
		|| cp conf/mime.types '$(DESTDIR)/etc/nginx'
	cp conf/mime.types '$(DESTDIR)/etc/nginx/mime.types.default'

	test -f '$(DESTDIR)/etc/nginx/fastcgi_params' \
		|| cp conf/fastcgi_params '$(DESTDIR)/etc/nginx'
	cp conf/fastcgi_params \
		'$(DESTDIR)/etc/nginx/fastcgi_params.default'

	test -f '$(DESTDIR)/etc/nginx/fastcgi.conf' \
		|| cp conf/fastcgi.conf '$(DESTDIR)/etc/nginx'
	cp conf/fastcgi.conf '$(DESTDIR)/etc/nginx/fastcgi.conf.default'

	test -f '$(DESTDIR)/etc/nginx/uwsgi_params' \
		|| cp conf/uwsgi_params '$(DESTDIR)/etc/nginx'
	cp conf/uwsgi_params \
		'$(DESTDIR)/etc/nginx/uwsgi_params.default'

	test -f '$(DESTDIR)/etc/nginx/scgi_params' \
		|| cp conf/scgi_params '$(DESTDIR)/etc/nginx'
	cp conf/scgi_params \
		'$(DESTDIR)/etc/nginx/scgi_params.default'

	test -f '$(DESTDIR)/etc/nginx/nginx.conf' \
		|| cp conf/nginx.conf '$(DESTDIR)/etc/nginx/nginx.conf'
	cp conf/nginx.conf '$(DESTDIR)/etc/nginx/nginx.conf.default'

	test -d '$(DESTDIR)/run' \
		|| mkdir -p '$(DESTDIR)/run'

	test -d '$(DESTDIR)/var/log/nginx' \
		|| mkdir -p '$(DESTDIR)/var/log/nginx'

	test -d '$(DESTDIR)/usr/share/nginx/html' \
		|| cp -R html '$(DESTDIR)/usr/share/nginx'

	test -d '$(DESTDIR)/var/log/nginx' \
		|| mkdir -p '$(DESTDIR)/var/log/nginx'
