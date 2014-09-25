//
//  sourcekitd.h
//
// All rights reserved by Apple I guess?
//

#pragma once

#include <xpc/xpc.h>

#pragma mark - Identifiers

/**
 Represent an sourcekit unique identifier used in requests.
 
 The struct content is determined from observing the memory of a Playground while running.
 This is *at best* very fragile.
 */
struct sourcekitd_uid_s {
    int32_t size;
    int32_t _reserved1; // junk ?
    int64_t _reserved2; // always 0x0 ?
    const char name[];
};
typedef struct sourcekitd_uid_s * sourcekitd_uid_t;

#define SKD_UID_DECL(identifier, value) \
struct sourcekitd_uid_s _skd_key ## identifier = {.size = strlen(value), .name = value}; \
sourcekitd_uid_t SKDKey ## identifier = &_skd_key ## identifier;

SKD_UID_DECL(Results, "key.results")
SKD_UID_DECL(Request, "key.request")
SKD_UID_DECL(CompilerArgs, "key.compilerargs")
SKD_UID_DECL(Offset, "key.offset")
SKD_UID_DECL(SourceFile, "key.sourcefile")
SKD_UID_DECL(SourceText, "key.sourcetext")
SKD_UID_DECL(ModuleName, "key.modulename")
SKD_UID_DECL(Notification, "key.notification")
SKD_UID_DECL(Keyword, "key.keyword")
SKD_UID_DECL(Name, "key.name")
SKD_UID_DECL(EnableSyntaxMap, "key.enablesyntaxmap")
SKD_UID_DECL(EnableDiagnostics, "key.enablediagnostics")
SKD_UID_DECL(Length, "key.length")
SKD_UID_DECL(Kind, "key.kind")
SKD_UID_DECL(USR, "key.usr")
SKD_UID_DECL(Line, "key.line")
SKD_UID_DECL(Column, "key.column")
SKD_UID_DECL(ReceiverUSR, "key.receiver_usr")
SKD_UID_DECL(IsDynamic, "key.is_dynamic")
SKD_UID_DECL(IsTestCandidate, "key.is_test_candidate")
SKD_UID_DECL(Description, "key.description")
SKD_UID_DECL(TypeName, "key.typename")
SKD_UID_DECL(RuntimeName, "key.runtime_name")
SKD_UID_DECL(SelectorName, "key.selector_name")
SKD_UID_DECL(Overrides, "key.overrides")
SKD_UID_DECL(DocBrief, "key.doc.brief")
SKD_UID_DECL(AssociatedUSRs, "key.associated_usrs")
SKD_UID_DECL(DocFullAsXML, "key.doc.full_as_xml")
SKD_UID_DECL(AnnotatedDecl, "key.annotated_decl")
SKD_UID_DECL(RelatedDecls, "key.related_decls")
SKD_UID_DECL(Context, "key.context")
SKD_UID_DECL(NumBytesToErase, "key.num_bytes_to_erase")
SKD_UID_DECL(NotRecommended, "key.not_recommended")
SKD_UID_DECL(FilePath, "key.filepath")
SKD_UID_DECL(ModuleInterfaceName, "key.module_interface_name")
SKD_UID_DECL(Hash, "key.hash")
SKD_UID_DECL(Related, "key.related")
SKD_UID_DECL(Inherits, "key.inherits")
SKD_UID_DECL(Conforms, "key.conforms")
SKD_UID_DECL(Extends, "key.extends")
SKD_UID_DECL(Dependencies, "key.dependencies")
SKD_UID_DECL(Entities, "key.entities")
SKD_UID_DECL(Diagnostics, "key.diagnostics")
SKD_UID_DECL(Severity, "key.severity")
SKD_UID_DECL(Ranges, "key.ranges")
SKD_UID_DECL(Fixits, "key.fixits")
SKD_UID_DECL(Annotations, "key.annotations")
SKD_UID_DECL(DiagnosticStage, "key.diagnostic_stage")
SKD_UID_DECL(SyntaxMap, "key.syntaxmap")
SKD_UID_DECL(IsSystem, "key.is_system")
SKD_UID_DECL(EnableStructure, "key.enablesubstructure")
SKD_UID_DECL(SubStructure, "key.substructure")
SKD_UID_DECL(NameOffset, "key.nameoffset")
SKD_UID_DECL(NameLength, "key.namelength")
SKD_UID_DECL(BodyOffset, "key.bodyoffset")
SKD_UID_DECL(BodyLength, "key.bodylength")
SKD_UID_DECL(Attributes, "key.attributes")
SKD_UID_DECL(Attribute, "key.attribute")
SKD_UID_DECL(InheritedTypes, "key.inheritedtypes")
SKD_UID_DECL(FormatOptions, "key.editor.format.options")
SKD_UID_DECL(IsUnavailable, "key.is_unavailable")
SKD_UID_DECL(Platform, "key.platform")
SKD_UID_DECL(Message, "key.message")
SKD_UID_DECL(Introduced, "key.introduced")
SKD_UID_DECL(Deprecated, "key.deprecated")
SKD_UID_DECL(Obsoleted, "key.obsoleted")

#pragma mark - C API

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

/**
 Creates a dictionary similarly to xpc_dictionary_create, but with sourcekit_uid_s structs as
 keys.
 The keys will then be converted to char*'s internally.
 */
xpc_object_t sourcekitd_request_dictionary_create(sourcekitd_uid_t *keys, const xpc_object_t *values, size_t count);

/**
 Inserts a int64_t primitive in a dictionary similarly to xpc_dictionary_set_int64, but
 using a sourcekit_uid_s struct as key.
 */
void sourcekitd_request_dictionary_set_int64(xpc_object_t xdict, sourcekitd_uid_t key, int64_t value);

/**
 Inserts a int64_t primitive in a dictionary similarly to xpc_dictionary_set_string, but
 using a sourcekit_uid_s struct as key.
 */
void sourcekitd_request_dictionary_set_string(xpc_object_t xdict, sourcekitd_uid_t key, const char *string);

SKD_UNKNOW_TYPE sourcekitd_request_dictionary_set_stringbuf(SKD_UNKNOW_TYPE);

/**
 Inserts a int64_t primitive in a dictionary similarly to xpc_dictionary_set_uint64, but
 using a sourcekit_uid_s struct as key.
 */
void sourcekitd_request_dictionary_set_uid(xpc_object_t xdict, sourcekitd_uid_t key, uint64_t value);

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
