//
//  sourcekitd.h
//
// All rights reserved to Apple I guess?
//

#pragma once

#include <xpc/xpc.h>

#define SKH_UNKNOW_TYPE void*

/**
 Starts a new SourceKit session.

 - Starts LLVM
 - Enables logging
 - Creates an XPC connection to com.apple.SourceKitService
 - Registers an XPC event handler
 - Resumes the XPC connection
 */
void sourcekitd_initialize(void);

/**
 Logicless wrapper around xpc_array_create.
 */
xpc_object_t sourcekitd_request_array_create(const xpc_object_t *objects, size_t count);

/**
 Logicless wrapper around xpc_array_set_int64.
 */
void sourcekitd_request_array_set_int64(xpc_object_t xarray, size_t index, int64_t value);

/**
 Logicless wrapper around xpc_array_set_string.
 */
void sourcekitd_request_array_set_string(xpc_object_t xarray, size_t index, const char *string);

/**
 Incomplete header. Do not use.
 */
void sourcekitd_request_array_set_stringbuf(xpc_object_t xarray, size_t index, SKH_UNKNOW_TYPE);

/**
 Logicless wrapper around xpc_array_set_uint64.
 */
void sourcekitd_request_array_set_uid(xpc_object_t xarray, size_t index, uint64_t value);

/**
 Logicless wrapper around xpc_array_set_value.
 */
void sourcekitd_request_array_set_value(xpc_object_t xarray, size_t index, xpc_object_t value);


SKH_UNKNOW_TYPE sourcekitd_request_create_from_yaml(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_request_description_copy(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_request_description_dump(SKH_UNKNOW_TYPE);

SKH_UNKNOW_TYPE sourcekitd_request_dictionary_create(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_request_dictionary_set_int64(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_request_dictionary_set_string(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_request_dictionary_set_stringbuf(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_request_dictionary_set_uid(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_request_dictionary_set_value(SKH_UNKNOW_TYPE);

/**
 Logicless wrapper around xpc_int64_create.
 */
xpc_object_t sourcekitd_request_int64_create(int64_t value);

/**
 Logicless wrapper around xpc_release.
 */
void sourcekitd_request_release(xpc_object_t object);

/**
 Logicless wrapper around xpc_retain.
 */
void sourcekitd_request_retain(xpc_object_t object);

/**
 Logicless wrapper around xpc_string_create.
 */
xpc_object_t sourcekitd_request_string_create(const char *string);

/**
 Logicless wrapper around xpc_uint64_create.
 */
xpc_object_t sourcekitd_request_uid_create(uint64_t value);


SKH_UNKNOW_TYPE sourcekitd_response_description_copy(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_response_description_dump(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_response_description_dump_filedesc(SKH_UNKNOW_TYPE);

/**
 Logicless wrapper around xpc_release.
 */
void sourcekitd_response_dispose(xpc_object_t object);

SKH_UNKNOW_TYPE sourcekitd_response_error_get_description(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_response_error_get_kind(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_response_get_value(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_response_is_error(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_shutdown(SKH_UNKNOW_TYPE);

SKH_UNKNOW_TYPE sourcekitd_uid_get_from_buf(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_uid_get_from_cstr(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_uid_get_length(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_uid_get_string_ptr(SKH_UNKNOW_TYPE);

SKH_UNKNOW_TYPE sourcekitd_variant_array_apply(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_variant_array_apply_f(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_variant_array_get_bool(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_variant_array_get_count(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_variant_array_get_int64(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_variant_array_get_string(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_variant_array_get_uid(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_variant_array_get_value(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_variant_bool_get_value(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_variant_description_copy(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_variant_description_dump(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_variant_description_dump_filedesc(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_variant_dictionary_apply(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_variant_dictionary_apply_f(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_variant_dictionary_get_bool(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_variant_dictionary_get_int64(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_variant_dictionary_get_string(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_variant_dictionary_get_uid(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_variant_dictionary_get_value(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_variant_get_type(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_variant_int64_get_value(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_variant_string_get_length(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_variant_string_get_ptr(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_variant_uid_get_value(SKH_UNKNOW_TYPE);
