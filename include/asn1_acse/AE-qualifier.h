/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ACSE-1"
 * 	found in "ACSE.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_AE_qualifier_H_
#define	_AE_qualifier_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AE-qualifier-form2.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AE_qualifier_PR {
	AE_qualifier_PR_NOTHING,	/* No components present */
	AE_qualifier_PR_ae_qualifier_form2
	/* Extensions may appear below */
	
} AE_qualifier_PR;

/* AE-qualifier */
typedef struct AE_qualifier {
	AE_qualifier_PR present;
	union AE_qualifier_u {
		AE_qualifier_form2_t	 ae_qualifier_form2;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AE_qualifier_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AE_qualifier;
extern asn_CHOICE_specifics_t asn_SPC_AE_qualifier_specs_1;
extern asn_TYPE_member_t asn_MBR_AE_qualifier_1[1];
extern asn_per_constraints_t asn_PER_type_AE_qualifier_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _AE_qualifier_H_ */
#include <asn_internal.h>