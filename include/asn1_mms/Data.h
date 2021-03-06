/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "mms.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_Data_H_
#define	_Data_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BOOLEAN.h"
#include "BIT_STRING.h"
#include "NativeInteger.h"
#include "FloatingPoint.h"
#include "OCTET_STRING.h"
#include "VisibleString.h"
#include "TimeOfDay.h"
#include "MMSString.h"
#include "UtcTime.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Data_PR {
	Data_PR_NOTHING,	/* No components present */
	Data_PR_array,
	Data_PR_structure,
	Data_PR_boolean_new,
	Data_PR_bit_string,
	Data_PR_integer,
	Data_PR_unsigned,
	Data_PR_floating_point,
	Data_PR_octet_string,
	Data_PR_visible_string,
	Data_PR_binary_time,
	Data_PR_mms_string,
	Data_PR_utc_time
} Data_PR;

/* Forward declarations */
struct DataSequence;

/* Data */
typedef struct Data {
	Data_PR present;
	union Data_u {
		struct DataSequence	*array;
		struct DataSequence	*structure;
		BOOLEAN_t	 boolean_new;
		BIT_STRING_t	 bit_string;
		long	 integer;
		long	 Unsigned;
		FloatingPoint_t	 floating_point;
		OCTET_STRING_t	 octet_string;
		VisibleString_t	 visible_string;
		TimeOfDay_t	 binary_time;
		MMSString_t	 mms_string;
		UtcTime_t	 utc_time;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Data_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Data;
extern asn_CHOICE_specifics_t asn_SPC_Data_specs_1;
extern asn_TYPE_member_t asn_MBR_Data_1[12];
extern asn_per_constraints_t asn_PER_type_Data_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DataSequence.h"

#endif	/* _Data_H_ */
#include "asn_internal.h"
