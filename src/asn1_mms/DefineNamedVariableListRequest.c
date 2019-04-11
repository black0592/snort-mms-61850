/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "mms.asn"
 * 	`asn1c -fcompound-names`
 */

#include "DefineNamedVariableListRequest.h"

static asn_TYPE_member_t asn_MBR_listOfVariable_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_VariableDef,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_listOfVariable_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_listOfVariable_specs_3 = {
	sizeof(struct DefineNamedVariableListRequest__listOfVariable),
	offsetof(struct DefineNamedVariableListRequest__listOfVariable, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_listOfVariable_3 = {
	"listOfVariable",
	"listOfVariable",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_listOfVariable_tags_3,
	sizeof(asn_DEF_listOfVariable_tags_3)
		/sizeof(asn_DEF_listOfVariable_tags_3[0]) - 1, /* 1 */
	asn_DEF_listOfVariable_tags_3,	/* Same as above */
	sizeof(asn_DEF_listOfVariable_tags_3)
		/sizeof(asn_DEF_listOfVariable_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_listOfVariable_3,
	1,	/* Single element */
	&asn_SPC_listOfVariable_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DefineNamedVariableListRequest_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DefineNamedVariableListRequest, variableListName),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_ObjectName,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"variableListName"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DefineNamedVariableListRequest, listOfVariable),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_listOfVariable_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"listOfVariable"
		},
};
static const ber_tlv_tag_t asn_DEF_DefineNamedVariableListRequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DefineNamedVariableListRequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 1 }, /* vmd-specific */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, -1, 0 }, /* listOfVariable */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* domain-specific */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 0, 0, 0 } /* aa-specific */
};
asn_SEQUENCE_specifics_t asn_SPC_DefineNamedVariableListRequest_specs_1 = {
	sizeof(struct DefineNamedVariableListRequest),
	offsetof(struct DefineNamedVariableListRequest, _asn_ctx),
	asn_MAP_DefineNamedVariableListRequest_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DefineNamedVariableListRequest = {
	"DefineNamedVariableListRequest",
	"DefineNamedVariableListRequest",
	&asn_OP_SEQUENCE,
	asn_DEF_DefineNamedVariableListRequest_tags_1,
	sizeof(asn_DEF_DefineNamedVariableListRequest_tags_1)
		/sizeof(asn_DEF_DefineNamedVariableListRequest_tags_1[0]), /* 1 */
	asn_DEF_DefineNamedVariableListRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_DefineNamedVariableListRequest_tags_1)
		/sizeof(asn_DEF_DefineNamedVariableListRequest_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DefineNamedVariableListRequest_1,
	2,	/* Elements count */
	&asn_SPC_DefineNamedVariableListRequest_specs_1	/* Additional specs */
};
