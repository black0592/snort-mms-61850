/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "mms.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_ObjectName_H_
#define	_ObjectName_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Identifier.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ObjectName_PR {
	ObjectName_PR_NOTHING,	/* No components present */
	ObjectName_PR_vmd_specific,
	ObjectName_PR_domain_specific,
	ObjectName_PR_aa_specific
} ObjectName_PR;

/* ObjectName */
typedef struct ObjectName {
	ObjectName_PR present;
	union ObjectName_u {
		Identifier_t	 vmd_specific;
		struct ObjectName__domain_specific {
			Identifier_t	 domainId;
			Identifier_t	 itemId;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} domain_specific;
		Identifier_t	 aa_specific;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ObjectName_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ObjectName;
extern asn_CHOICE_specifics_t asn_SPC_ObjectName_specs_1;
extern asn_TYPE_member_t asn_MBR_ObjectName_1[3];
extern asn_per_constraints_t asn_PER_type_ObjectName_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ObjectName_H_ */
#include "asn_internal.h"