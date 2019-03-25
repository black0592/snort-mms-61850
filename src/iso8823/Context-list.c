/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO8823-PRESENTATION"
 * 	found in "ISO8823_NEW.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "Context-list.h"

static asn_oer_constraints_t asn_OER_type_Context_list_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..7)) */};
asn_per_constraints_t asn_PER_type_Context_list_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (SIZE(0..7)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_transfer_syntax_name_list_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (6 << 2)),
		0,
		&asn_DEF_Transfer_syntax_name,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_transfer_syntax_name_list_tags_5[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_transfer_syntax_name_list_specs_5 = {
	sizeof(struct Context_list__Member__transfer_syntax_name_list),
	offsetof(struct Context_list__Member__transfer_syntax_name_list, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_transfer_syntax_name_list_5 = {
	"transfer-syntax-name-list",
	"transfer-syntax-name-list",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_transfer_syntax_name_list_tags_5,
	sizeof(asn_DEF_transfer_syntax_name_list_tags_5)
		/sizeof(asn_DEF_transfer_syntax_name_list_tags_5[0]), /* 1 */
	asn_DEF_transfer_syntax_name_list_tags_5,	/* Same as above */
	sizeof(asn_DEF_transfer_syntax_name_list_tags_5)
		/sizeof(asn_DEF_transfer_syntax_name_list_tags_5[0]), /* 1 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_transfer_syntax_name_list_5,
	1,	/* Single element */
	&asn_SPC_transfer_syntax_name_list_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Member_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Context_list__Member, presentation_context_identifier),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_Presentation_context_identifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"presentation-context-identifier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Context_list__Member, abstract_syntax_name),
		(ASN_TAG_CLASS_UNIVERSAL | (6 << 2)),
		0,
		&asn_DEF_Abstract_syntax_name,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"abstract-syntax-name"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Context_list__Member, transfer_syntax_name_list),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_transfer_syntax_name_list_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transfer-syntax-name-list"
		},
};
static const ber_tlv_tag_t asn_DEF_Member_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* presentation-context-identifier */
    { (ASN_TAG_CLASS_UNIVERSAL | (6 << 2)), 1, 0, 0 }, /* abstract-syntax-name */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, 0, 0 } /* transfer-syntax-name-list */
};
static asn_SEQUENCE_specifics_t asn_SPC_Member_specs_2 = {
	sizeof(struct Context_list__Member),
	offsetof(struct Context_list__Member, _asn_ctx),
	asn_MAP_Member_tag2el_2,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_2 = {
	"SEQUENCE",
	"SEQUENCE",
	&asn_OP_SEQUENCE,
	asn_DEF_Member_tags_2,
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	asn_DEF_Member_tags_2,	/* Same as above */
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Member_2,
	3,	/* Elements count */
	&asn_SPC_Member_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_Context_list_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Member_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_Context_list_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_Context_list_specs_1 = {
	sizeof(struct Context_list),
	offsetof(struct Context_list, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_Context_list = {
	"Context-list",
	"Context-list",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_Context_list_tags_1,
	sizeof(asn_DEF_Context_list_tags_1)
		/sizeof(asn_DEF_Context_list_tags_1[0]), /* 1 */
	asn_DEF_Context_list_tags_1,	/* Same as above */
	sizeof(asn_DEF_Context_list_tags_1)
		/sizeof(asn_DEF_Context_list_tags_1[0]), /* 1 */
	{ &asn_OER_type_Context_list_constr_1, &asn_PER_type_Context_list_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_Context_list_1,
	1,	/* Single element */
	&asn_SPC_Context_list_specs_1	/* Additional specs */
};

