/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ACSE-1"
 * 	found in "ACSE.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_Authentication_value_H_
#define	_Authentication_value_H_


#include <asn_application.h>

/* Including external dependencies */
#include <GraphicString.h>
#include <BIT_STRING.h>
#include "EXTERNAL.h"
#include <NativeInteger.h>
#include <ANY.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Authentication_value_PR {
	Authentication_value_PR_NOTHING,	/* No components present */
	Authentication_value_PR_charstring,
	Authentication_value_PR_bitstring,
	Authentication_value_PR_external,
	Authentication_value_PR_other
} Authentication_value_PR;

/* Authentication-value */
typedef struct Authentication_value {
	Authentication_value_PR present;
	union Authentication_value_u {
		GraphicString_t	 charstring;
		BIT_STRING_t	 bitstring;
		EXTERNAL_t	 external;
		struct Authentication_value__other {
			long	 other_mechanism_name;
			ANY_t	 other_mechanism_value;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} other;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Authentication_value_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Authentication_value;
extern asn_CHOICE_specifics_t asn_SPC_Authentication_value_specs_1;
extern asn_TYPE_member_t asn_MBR_Authentication_value_1[4];
extern asn_per_constraints_t asn_PER_type_Authentication_value_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Authentication_value_H_ */
#include <asn_internal.h>