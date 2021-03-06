/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO8823-PRESENTATION"
 * 	found in "ISO8823_NEW.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "PDV-list.h"

static int
memb_single_ASN1_type_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_oer_constraints_t asn_OER_memb_single_ASN1_type_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_single_ASN1_type_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_presentation_data_values_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_presentation_data_values_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_presentation_data_values_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDV_list__presentation_data_values, choice.single_ASN1_type),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ANY,
		0,
		{ &asn_OER_memb_single_ASN1_type_constr_5, &asn_PER_memb_single_ASN1_type_constr_5,  memb_single_ASN1_type_constraint_4 },
		0, 0, /* No default value */
		"single-ASN1-type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDV_list__presentation_data_values, choice.octet_aligned),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"octet-aligned"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDV_list__presentation_data_values, choice.arbitrary),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"arbitrary"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_presentation_data_values_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* single-ASN1-type */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* octet-aligned */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* arbitrary */
};
static asn_CHOICE_specifics_t asn_SPC_presentation_data_values_specs_4 = {
	sizeof(struct PDV_list__presentation_data_values),
	offsetof(struct PDV_list__presentation_data_values, _asn_ctx),
	offsetof(struct PDV_list__presentation_data_values, present),
	sizeof(((struct PDV_list__presentation_data_values *)0)->present),
	asn_MAP_presentation_data_values_tag2el_4,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_presentation_data_values_4 = {
	"presentation-data-values",
	"presentation-data-values",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_presentation_data_values_constr_4, &asn_PER_type_presentation_data_values_constr_4, CHOICE_constraint },
	asn_MBR_presentation_data_values_4,
	3,	/* Elements count */
	&asn_SPC_presentation_data_values_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PDV_list_1[] = {
	{ ATF_POINTER, 1, offsetof(struct PDV_list, transfer_syntax_name),
		(ASN_TAG_CLASS_UNIVERSAL | (6 << 2)),
		0,
		&asn_DEF_Transfer_syntax_name,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transfer-syntax-name"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDV_list, presentation_context_identifier),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_Presentation_context_identifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"presentation-context-identifier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDV_list, presentation_data_values),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_presentation_data_values_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"presentation-data-values"
		},
};
static const int asn_MAP_PDV_list_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_PDV_list_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDV_list_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, 0, 0 }, /* presentation-context-identifier */
    { (ASN_TAG_CLASS_UNIVERSAL | (6 << 2)), 0, 0, 0 }, /* transfer-syntax-name */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 2, 0, 0 }, /* single-ASN1-type */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 2, 0, 0 }, /* octet-aligned */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* arbitrary */
};
asn_SEQUENCE_specifics_t asn_SPC_PDV_list_specs_1 = {
	sizeof(struct PDV_list),
	offsetof(struct PDV_list, _asn_ctx),
	asn_MAP_PDV_list_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_PDV_list_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDV_list = {
	"PDV-list",
	"PDV-list",
	&asn_OP_SEQUENCE,
	asn_DEF_PDV_list_tags_1,
	sizeof(asn_DEF_PDV_list_tags_1)
		/sizeof(asn_DEF_PDV_list_tags_1[0]), /* 1 */
	asn_DEF_PDV_list_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDV_list_tags_1)
		/sizeof(asn_DEF_PDV_list_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDV_list_1,
	3,	/* Elements count */
	&asn_SPC_PDV_list_specs_1	/* Additional specs */
};

