/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ACSE-1"
 * 	found in "ACSE.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "Mechanism-name.h"

/*
 * This type is implemented using OBJECT_IDENTIFIER,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_Mechanism_name_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (6 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Mechanism_name = {
	"Mechanism-name",
	"Mechanism-name",
	&asn_OP_OBJECT_IDENTIFIER,
	asn_DEF_Mechanism_name_tags_1,
	sizeof(asn_DEF_Mechanism_name_tags_1)
		/sizeof(asn_DEF_Mechanism_name_tags_1[0]), /* 1 */
	asn_DEF_Mechanism_name_tags_1,	/* Same as above */
	sizeof(asn_DEF_Mechanism_name_tags_1)
		/sizeof(asn_DEF_Mechanism_name_tags_1[0]), /* 1 */
	{ 0, 0, OBJECT_IDENTIFIER_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};

