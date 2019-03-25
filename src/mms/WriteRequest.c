/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "mms.asn"
 * 	`asn1c -fcompound-names`
 */

#include "WriteRequest.h"

static asn_TYPE_member_t asn_MBR_listOfData_3[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Data,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_listOfData_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_listOfData_specs_3 = {
	sizeof(struct WriteRequest__listOfData),
	offsetof(struct WriteRequest__listOfData, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_listOfData_3 = {
	"listOfData",
	"listOfData",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_listOfData_tags_3,
	sizeof(asn_DEF_listOfData_tags_3)
		/sizeof(asn_DEF_listOfData_tags_3[0]) - 1, /* 1 */
	asn_DEF_listOfData_tags_3,	/* Same as above */
	sizeof(asn_DEF_listOfData_tags_3)
		/sizeof(asn_DEF_listOfData_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_listOfData_3,
	1,	/* Single element */
	&asn_SPC_listOfData_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_WriteRequest_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct WriteRequest, variableAccessSpecification),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_VariableAccessSpecification,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"variableAccessSpecification"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct WriteRequest, listOfData),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_listOfData_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"listOfData"
		},
};
static const ber_tlv_tag_t asn_DEF_WriteRequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_WriteRequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 1 }, /* listOfVariable */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, -1, 0 }, /* listOfData */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 } /* variableListName */
};
asn_SEQUENCE_specifics_t asn_SPC_WriteRequest_specs_1 = {
	sizeof(struct WriteRequest),
	offsetof(struct WriteRequest, _asn_ctx),
	asn_MAP_WriteRequest_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_WriteRequest = {
	"WriteRequest",
	"WriteRequest",
	&asn_OP_SEQUENCE,
	asn_DEF_WriteRequest_tags_1,
	sizeof(asn_DEF_WriteRequest_tags_1)
		/sizeof(asn_DEF_WriteRequest_tags_1[0]), /* 1 */
	asn_DEF_WriteRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_WriteRequest_tags_1)
		/sizeof(asn_DEF_WriteRequest_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_WriteRequest_1,
	2,	/* Elements count */
	&asn_SPC_WriteRequest_specs_1	/* Additional specs */
};

