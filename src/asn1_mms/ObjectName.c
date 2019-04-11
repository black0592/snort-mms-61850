/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "mms.asn"
 * 	`asn1c -fcompound-names`
 */

#include "ObjectName.h"

static asn_oer_constraints_t asn_OER_type_ObjectName_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ObjectName_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_domain_specific_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ObjectName__domain_specific, domainId),
		(ASN_TAG_CLASS_UNIVERSAL | (26 << 2)),
		0,
		&asn_DEF_Identifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"domainId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ObjectName__domain_specific, itemId),
		(ASN_TAG_CLASS_UNIVERSAL | (26 << 2)),
		0,
		&asn_DEF_Identifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"itemId"
		},
};
static const ber_tlv_tag_t asn_DEF_domain_specific_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_domain_specific_tag2el_3[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (26 << 2)), 0, 0, 1 }, /* domainId */
    { (ASN_TAG_CLASS_UNIVERSAL | (26 << 2)), 1, -1, 0 } /* itemId */
};
static asn_SEQUENCE_specifics_t asn_SPC_domain_specific_specs_3 = {
	sizeof(struct ObjectName__domain_specific),
	offsetof(struct ObjectName__domain_specific, _asn_ctx),
	asn_MAP_domain_specific_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_domain_specific_3 = {
	"domain-specific",
	"domain-specific",
	&asn_OP_SEQUENCE,
	asn_DEF_domain_specific_tags_3,
	sizeof(asn_DEF_domain_specific_tags_3)
		/sizeof(asn_DEF_domain_specific_tags_3[0]) - 1, /* 1 */
	asn_DEF_domain_specific_tags_3,	/* Same as above */
	sizeof(asn_DEF_domain_specific_tags_3)
		/sizeof(asn_DEF_domain_specific_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_domain_specific_3,
	2,	/* Elements count */
	&asn_SPC_domain_specific_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ObjectName_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ObjectName, choice.vmd_specific),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Identifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"vmd-specific"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ObjectName, choice.domain_specific),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_domain_specific_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"domain-specific"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ObjectName, choice.aa_specific),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Identifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"aa-specific"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ObjectName_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* vmd-specific */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* domain-specific */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* aa-specific */
};
asn_CHOICE_specifics_t asn_SPC_ObjectName_specs_1 = {
	sizeof(struct ObjectName),
	offsetof(struct ObjectName, _asn_ctx),
	offsetof(struct ObjectName, present),
	sizeof(((struct ObjectName *)0)->present),
	asn_MAP_ObjectName_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ObjectName = {
	"ObjectName",
	"ObjectName",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ObjectName_constr_1, &asn_PER_type_ObjectName_constr_1, CHOICE_constraint },
	asn_MBR_ObjectName_1,
	3,	/* Elements count */
	&asn_SPC_ObjectName_specs_1	/* Additional specs */
};
