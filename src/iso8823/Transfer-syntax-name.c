/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO8823-PRESENTATION"
 * 	found in "ISO8823_NEW.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "Transfer-syntax-name.h"

/*
 * This type is implemented using OBJECT_IDENTIFIER,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_Transfer_syntax_name_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (6 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Transfer_syntax_name = {
	"Transfer-syntax-name",
	"Transfer-syntax-name",
	&asn_OP_OBJECT_IDENTIFIER,
	asn_DEF_Transfer_syntax_name_tags_1,
	sizeof(asn_DEF_Transfer_syntax_name_tags_1)
		/sizeof(asn_DEF_Transfer_syntax_name_tags_1[0]), /* 1 */
	asn_DEF_Transfer_syntax_name_tags_1,	/* Same as above */
	sizeof(asn_DEF_Transfer_syntax_name_tags_1)
		/sizeof(asn_DEF_Transfer_syntax_name_tags_1[0]), /* 1 */
	{ 0, 0, OBJECT_IDENTIFIER_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};

