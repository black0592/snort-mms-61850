/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO8823-PRESENTATION"
 * 	found in "ISO8823_NEW.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "Calling-presentation-selector.h"

int
Calling_presentation_selector_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const Presentation_selector_t *st = (const Presentation_selector_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using Presentation_selector,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_Calling_presentation_selector_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
asn_per_constraints_t asn_PER_type_Calling_presentation_selector_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED | APC_EXTENSIBLE, -1, -1,  1,  0 }	/* (SIZE(1..MAX,...)) */,
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_Calling_presentation_selector_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Calling_presentation_selector = {
	"Calling-presentation-selector",
	"Calling-presentation-selector",
	&asn_OP_OCTET_STRING,
	asn_DEF_Calling_presentation_selector_tags_1,
	sizeof(asn_DEF_Calling_presentation_selector_tags_1)
		/sizeof(asn_DEF_Calling_presentation_selector_tags_1[0]), /* 1 */
	asn_DEF_Calling_presentation_selector_tags_1,	/* Same as above */
	sizeof(asn_DEF_Calling_presentation_selector_tags_1)
		/sizeof(asn_DEF_Calling_presentation_selector_tags_1[0]), /* 1 */
	{ &asn_OER_type_Calling_presentation_selector_constr_1, &asn_PER_type_Calling_presentation_selector_constr_1, Calling_presentation_selector_constraint },
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};

