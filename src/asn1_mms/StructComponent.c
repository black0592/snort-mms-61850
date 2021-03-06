/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "mms.asn"
 * 	`asn1c -fcompound-names`
 */

#include "StructComponent.h"

asn_TYPE_member_t asn_MBR_StructComponent_1[] = {
	{ ATF_POINTER, 1, offsetof(struct StructComponent, componentName),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Identifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"componentName"
		},
	{ ATF_POINTER, 0, offsetof(struct StructComponent, componentType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TypeSpecification,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"componentType"
		},
};
static const int asn_MAP_StructComponent_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_StructComponent_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_StructComponent_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* componentName */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* componentType */
};
asn_SEQUENCE_specifics_t asn_SPC_StructComponent_specs_1 = {
	sizeof(struct StructComponent),
	offsetof(struct StructComponent, _asn_ctx),
	asn_MAP_StructComponent_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_StructComponent_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_StructComponent = {
	"StructComponent",
	"StructComponent",
	&asn_OP_SEQUENCE,
	asn_DEF_StructComponent_tags_1,
	sizeof(asn_DEF_StructComponent_tags_1)
		/sizeof(asn_DEF_StructComponent_tags_1[0]), /* 1 */
	asn_DEF_StructComponent_tags_1,	/* Same as above */
	sizeof(asn_DEF_StructComponent_tags_1)
		/sizeof(asn_DEF_StructComponent_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_StructComponent_1,
	2,	/* Elements count */
	&asn_SPC_StructComponent_specs_1	/* Additional specs */
};

