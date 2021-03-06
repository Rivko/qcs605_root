/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.6 at Mon Mar 19 17:23:58 2018. */

#include "sns_std_type.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t sns_std_suid_fields[3] = {
    PB_FIELD(  1, FIXED64 , REQUIRED, STATIC  , FIRST, sns_std_suid, suid_low, suid_low, 0),
    PB_FIELD(  2, FIXED64 , REQUIRED, STATIC  , OTHER, sns_std_suid, suid_high, suid_low, 0),
    PB_LAST_FIELD
};

const pb_field_t sns_std_attr_value_fields[2] = {
    PB_FIELD(  1, MESSAGE , REPEATED, CALLBACK, FIRST, sns_std_attr_value, values, values, &sns_std_attr_value_data_fields),
    PB_LAST_FIELD
};

const pb_field_t sns_std_attr_value_data_fields[6] = {
    PB_FIELD(  1, MESSAGE , OPTIONAL, STATIC  , FIRST, sns_std_attr_value_data, subtype, subtype, &sns_std_attr_value_fields),
    PB_FIELD(  2, STRING  , OPTIONAL, CALLBACK, OTHER, sns_std_attr_value_data, str, subtype, 0),
    PB_FIELD(  3, FLOAT   , OPTIONAL, STATIC  , OTHER, sns_std_attr_value_data, flt, str, 0),
    PB_FIELD(  4, SFIXED64, OPTIONAL, STATIC  , OTHER, sns_std_attr_value_data, sint, flt, 0),
    PB_FIELD(  5, BOOL    , OPTIONAL, STATIC  , OTHER, sns_std_attr_value_data, boolean, sint, 0),
    PB_LAST_FIELD
};

const pb_field_t sns_std_attr_fields[3] = {
    PB_FIELD(  1, INT32   , REQUIRED, STATIC  , FIRST, sns_std_attr, attr_id, attr_id, 0),
    PB_FIELD(  2, MESSAGE , REQUIRED, STATIC  , OTHER, sns_std_attr, value, attr_id, &sns_std_attr_value_fields),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(sns_std_attr_value, values) < 65536 && pb_membersize(sns_std_attr_value_data, subtype) < 65536 && pb_membersize(sns_std_attr, value) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_sns_std_suid_sns_std_attr_value_sns_std_attr_value_data_sns_std_attr)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(sns_std_attr_value, values) < 256 && pb_membersize(sns_std_attr_value_data, subtype) < 256 && pb_membersize(sns_std_attr, value) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_sns_std_suid_sns_std_attr_value_sns_std_attr_value_data_sns_std_attr)
#endif


/* @@protoc_insertion_point(eof) */
