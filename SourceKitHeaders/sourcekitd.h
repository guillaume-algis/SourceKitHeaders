//
//  sourcekitd.h
//  SourceKitHeaders
//
//  Created by Guillaume Algis on 31/07/2014.
//  Copyright (c) 2014 Guillaume Algis. All rights reserved.
//

#pragma once

#define SKH_UNKNOW_TYPE void

/**
 Note that some sourcekitd functions are merely wrappers around XPC functions. They have been documented as such, and
 the official Apple documentation for the wrapped function have been copied here.
 When in doubt, consult the official and up to date documentation for XPC, either at developer.apple.com[1] or directly
 in the `xpc.h` header file installed on your system.
 
 [1]: https://developer.apple.com/library/mac/documentation/System/Reference/xpc_header_reference/Reference/reference.html
 */

/**
 Does nothing ?
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
 Creates an XPC object representing an array of XPC objects.

 @param objects An array of XPC objects which is to be boxed. The order of this array is preserved in the object. If
        this array contains a NULL value, the behavior is undefined. This parameter may be NULL only if the
        count is 0.
 @param count The number of objects in the given array. If the number passed is less than the actual number of values
        in the array, only the specified number of items are inserted into the resulting array. If the number
        passed is more than the the actual number of values, the behavior is undefined.
 @return A new array object.

 This array must be contiguous and cannot contain any NULL values. If you wish to insert the equivalent of a NULL
 value, you may use the result of xpc_null_create.

 SKH notes: This is a logicless wrapper around xpc_array_create.
 */
xpc_object_t sourcekitd_request_array_create(const xpc_object_t *objects, size_t count);

/**
 Inserts an int64_t (primitive) value into an array.
 
 @param xarray The array object which is to be manipulated.
 @param index The index at which to insert the value. This value must lie within the index space of the array
        (0 to N-1 inclusive, where N is the count of the array) or be XPC_ARRAY_APPEND. If the index is outside that
        range, the behavior is undefined.
 @param value The int64_t value to insert. After calling this method, the XPC object corresponding to the primitive
        value inserted may be safely retrieved with xpc_array_get_value().
 
 SKH notes: This is a logicless wrapper around xpc_array_set_int64.
 */
void sourcekitd_request_array_set_int64(xpc_object_t xarray, size_t index, int64_t value);

/**
 Inserts a C string into an array.
 
 @param xarray The array object which is to be manipulated.
 @param index The index at which to insert the value. This value must lie within the index space of the array
        (0 to N-1 inclusive, where N is the count of the array) or be XPC_ARRAY_APPEND. If the index is outside that
        range, the behavior is undefined.
 @param string The C string to insert. After calling this method, the XPC object corresponding to the primitive value
        inserted may be safely retrieved with xpc_array_get_value().

 SKH notes: This is a logicless wrapper around xpc_array_set_string.
 */
void sourcekitd_request_array_set_string(xpc_object_t xarray, size_t index, const char *string);

SKH_UNKNOW_TYPE sourcekitd_request_array_set_stringbuf(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_request_array_set_uid(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_request_array_set_value(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_request_create_from_yaml(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_request_description_copy(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_request_description_dump(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_request_dictionary_create(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_request_dictionary_set_int64(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_request_dictionary_set_string(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_request_dictionary_set_stringbuf(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_request_dictionary_set_uid(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_request_dictionary_set_value(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_request_int64_create(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_request_release(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_request_retain(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_request_string_create(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_request_uid_create(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_response_description_copy(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_response_description_dump(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_response_description_dump_filedesc(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_response_dispose(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_response_error_get_description(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_response_error_get_kind(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_response_get_value(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_response_is_error(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_send_request(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_send_request_sync(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_set_interrupted_connection_handler(SKH_UNKNOW_TYPE);
SKH_UNKNOW_TYPE sourcekitd_set_notification_handler(SKH_UNKNOW_TYPE);
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
