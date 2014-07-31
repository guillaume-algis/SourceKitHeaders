//
//  Sourcekitd.m
//  SourceKitHeaders
//
//  Created by Guillaume Algis on 31/07/2014.
//  Copyright (c) 2014 Guillaume Algis. All rights reserved.
//

#import <XCTest/XCTest.h>

#import "sourcekitd.h"

@interface Sourcekitd : XCTestCase

@end

@implementation Sourcekitd

- (void)testSymbolExistsFor_sourcekitd_cancel_request
{
    sourcekitd_cancel_request();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_initialize
{
    sourcekitd_initialize();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_request_array_create
{
    sourcekitd_request_array_create();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_request_array_set_int64
{
    sourcekitd_request_array_set_int64();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_request_array_set_string
{
    sourcekitd_request_array_set_string();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_request_array_set_stringbuf
{
    sourcekitd_request_array_set_stringbuf();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_request_array_set_uid
{
    sourcekitd_request_array_set_uid();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_request_array_set_value
{
    sourcekitd_request_array_set_value();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_request_create_from_yaml
{
    sourcekitd_request_create_from_yaml();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_request_description_copy
{
    sourcekitd_request_description_copy();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_request_description_dump
{
    sourcekitd_request_description_dump();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_request_dictionary_create
{
    sourcekitd_request_dictionary_create();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_request_dictionary_set_int64
{
    sourcekitd_request_dictionary_set_int64();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_request_dictionary_set_string
{
    sourcekitd_request_dictionary_set_string();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_request_dictionary_set_stringbuf
{
    sourcekitd_request_dictionary_set_stringbuf();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_request_dictionary_set_uid
{
    sourcekitd_request_dictionary_set_uid();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_request_dictionary_set_value
{
    sourcekitd_request_dictionary_set_value();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_request_int64_create
{
    sourcekitd_request_int64_create();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_request_release
{
    sourcekitd_request_release();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_request_retain
{
    sourcekitd_request_retain();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_request_string_create
{
    sourcekitd_request_string_create();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_request_uid_create
{
    sourcekitd_request_uid_create();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_response_description_copy
{
    sourcekitd_response_description_copy();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_response_description_dump
{
    sourcekitd_response_description_dump();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_response_description_dump_filedesc
{
    sourcekitd_response_description_dump_filedesc();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_response_dispose
{
    sourcekitd_response_dispose();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_response_error_get_description
{
    sourcekitd_response_error_get_description();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_response_error_get_kind
{
    sourcekitd_response_error_get_kind();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_response_get_value
{
    sourcekitd_response_get_value();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_response_is_error
{
    sourcekitd_response_is_error();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_send_request
{
    sourcekitd_send_request();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_send_request_sync
{
    sourcekitd_send_request_sync();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_set_interrupted_connection_handler
{
    sourcekitd_set_interrupted_connection_handler();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_set_notification_handler
{
    sourcekitd_set_notification_handler();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_shutdown
{
    sourcekitd_shutdown();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_uid_get_from_buf
{
    sourcekitd_uid_get_from_buf();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_uid_get_from_cstr
{
    sourcekitd_uid_get_from_cstr();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_uid_get_length
{
    sourcekitd_uid_get_length();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_uid_get_string_ptr
{
    sourcekitd_uid_get_string_ptr();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_array_apply
{
    sourcekitd_variant_array_apply();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_array_apply_f
{
    sourcekitd_variant_array_apply_f();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_array_get_bool
{
    sourcekitd_variant_array_get_bool();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_array_get_count
{
    sourcekitd_variant_array_get_count();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_array_get_int64
{
    sourcekitd_variant_array_get_int64();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_array_get_string
{
    sourcekitd_variant_array_get_string();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_array_get_uid
{
    sourcekitd_variant_array_get_uid();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_array_get_value
{
    sourcekitd_variant_array_get_value();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_bool_get_value
{
    sourcekitd_variant_bool_get_value();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_description_copy
{
    sourcekitd_variant_description_copy();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_description_dump
{
    sourcekitd_variant_description_dump();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_description_dump_filedesc
{
    sourcekitd_variant_description_dump_filedesc();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_dictionary_apply
{
    sourcekitd_variant_dictionary_apply();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_dictionary_apply_f
{
    sourcekitd_variant_dictionary_apply_f();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_dictionary_get_bool
{
    sourcekitd_variant_dictionary_get_bool();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_dictionary_get_int64
{
    sourcekitd_variant_dictionary_get_int64();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_dictionary_get_string
{
    sourcekitd_variant_dictionary_get_string();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_dictionary_get_uid
{
    sourcekitd_variant_dictionary_get_uid();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_dictionary_get_value
{
    sourcekitd_variant_dictionary_get_value();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_get_type
{
    sourcekitd_variant_get_type();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_int64_get_value
{
    sourcekitd_variant_int64_get_value();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_string_get_length
{
    sourcekitd_variant_string_get_length();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_string_get_ptr
{
    sourcekitd_variant_string_get_ptr();
    XCTAssert(YES);
}

- (void)testSymbolExistsFor_sourcekitd_variant_uid_get_value
{
    sourcekitd_variant_uid_get_value();
    XCTAssert(YES);
}

@end
