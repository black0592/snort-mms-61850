/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "mms.asn"
 * 	`asn1c -fcompound-names`
 */

#include "GetNamedVariableListAttributesRequest.h"

/*
 * This type is implemented using ObjectName,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_GetNamedVariableListAttributesRequest_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_GetNamedVariableListAttributesRequest_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_descriptor_t asn_DEF_GetNamedVariableListAttributesRequest = {
	"GetNamedVariableListAttributesRequest",
	"GetNamedVariableListAttributesRequest",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, 0, CHOICE_constraint },
	asn_MBR_ObjectName_1,
	3,	/* Elements count */
	&asn_SPC_ObjectName_specs_1	/* Additional specs */
};

