
#include <ngx_config.h>
#include <ngx_core.h>

extern ngx_module_t  ngx_pagespeed;
extern ngx_module_t  ngx_pagespeed_etag_filter;

ngx_module_t *ngx_modules[] = {
    &ngx_pagespeed,
    &ngx_pagespeed_etag_filter,
    NULL
};

char *ngx_module_names[] = {
    "ngx_pagespeed",
    "ngx_pagespeed_etag_filter",
    NULL
};

char *ngx_module_order[] = {
    "ngx_http_range_header_filter_module",
    "ngx_pagespeed_etag_filter",
    "ngx_http_gzip_filter_module",
    "ngx_http_brotli_filter_module",
    "ngx_pagespeed",
    "ngx_http_postpone_filter_module",
    "ngx_http_ssi_filter_module",
    "ngx_http_charset_filter_module",
    "ngx_http_xslt_filter_module",
    "ngx_http_image_filter_module",
    "ngx_http_sub_filter_module",
    "ngx_http_addition_filter_module",
    "ngx_http_gunzip_filter_module",
    "ngx_http_userid_filter_module",
    "ngx_http_headers_filter_module",
    NULL
};

