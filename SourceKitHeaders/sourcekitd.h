//
//  sourcekitd.h
//
// All rights reserved by Apple I guess?
//

#pragma once

#include <xpc/xpc.h>

#define SKD_UNKNOW_TYPE void*

/**
 Does nothing... ?!
 */
void sourcekitd_cancel_request(void);

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
void sourcekitd_request_array_set_stringbuf(xpc_object_t xarray, size_t index, SKD_UNKNOW_TYPE);

/**
 Logicless wrapper around xpc_array_set_uint64.
 */
void sourcekitd_request_array_set_uid(xpc_object_t xarray, size_t index, uint64_t value);

/**
 Logicless wrapper around xpc_array_set_value.
 */
void sourcekitd_request_array_set_value(xpc_object_t xarray, size_t index, xpc_object_t value);


SKD_UNKNOW_TYPE sourcekitd_request_create_from_yaml(SKD_UNKNOW_TYPE);

SKD_UNKNOW_TYPE sourcekitd_request_description_copy(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_request_description_dump(SKD_UNKNOW_TYPE);

SKD_UNKNOW_TYPE sourcekitd_request_dictionary_create(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_request_dictionary_set_int64(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_request_dictionary_set_string(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_request_dictionary_set_stringbuf(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_request_dictionary_set_uid(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_request_dictionary_set_value(SKD_UNKNOW_TYPE);

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


SKD_UNKNOW_TYPE sourcekitd_response_description_copy(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_response_description_dump(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_response_description_dump_filedesc(SKD_UNKNOW_TYPE);

/**
 Logicless wrapper around xpc_release.
 */
void sourcekitd_response_dispose(xpc_object_t object);

SKD_UNKNOW_TYPE sourcekitd_response_error_get_description(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_response_error_get_kind(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_response_get_value(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_response_is_error(SKD_UNKNOW_TYPE);

SKD_UNKNOW_TYPE sourcekitd_send_request(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_send_request_sync(SKD_UNKNOW_TYPE);

SKD_UNKNOW_TYPE sourcekitd_set_interrupted_connection_handler(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_set_notification_handler(SKD_UNKNOW_TYPE);

/**
 Ends the current SourceKit session.

 - Ends logging
 - Stops LLVM
 - Cleanup memory
 
 @return 0 if llvm exited nicelly, else a non-zero value (to be determined).
 */
int sourcekitd_shutdown(void);

SKD_UNKNOW_TYPE sourcekitd_uid_get_from_buf(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_uid_get_from_cstr(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_uid_get_length(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_uid_get_string_ptr(SKD_UNKNOW_TYPE);

SKD_UNKNOW_TYPE sourcekitd_variant_array_apply(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_variant_array_apply_f(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_variant_array_get_bool(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_variant_array_get_count(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_variant_array_get_int64(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_variant_array_get_string(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_variant_array_get_uid(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_variant_array_get_value(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_variant_bool_get_value(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_variant_description_copy(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_variant_description_dump(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_variant_description_dump_filedesc(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_variant_dictionary_apply(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_variant_dictionary_apply_f(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_variant_dictionary_get_bool(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_variant_dictionary_get_int64(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_variant_dictionary_get_string(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_variant_dictionary_get_uid(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_variant_dictionary_get_value(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_variant_get_type(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_variant_int64_get_value(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_variant_string_get_length(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_variant_string_get_ptr(SKD_UNKNOW_TYPE);
SKD_UNKNOW_TYPE sourcekitd_variant_uid_get_value(SKD_UNKNOW_TYPE);
