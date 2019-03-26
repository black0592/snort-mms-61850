/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ACSE-1"
 * 	found in "ACSE.asn1"
 */

#include "MECHANISM-NAME.h"

int
MECHANISM_NAME_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_TYPE_IDENTIFIER.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using TYPE_IDENTIFIER,
 * so here we adjust the DEF accordingly.
 */
static void
MECHANISM_NAME_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_TYPE_IDENTIFIER.free_struct;
	td->print_struct   = asn_DEF_TYPE_IDENTIFIER.print_struct;
	td->check_constraints = asn_DEF_TYPE_IDENTIFIER.check_constraints;
	td->ber_decoder    = asn_DEF_TYPE_IDENTIFIER.ber_decoder;
	td->der_encoder    = asn_DEF_TYPE_IDENTIFIER.der_encoder;
	td->xer_decoder    = asn_DEF_TYPE_IDENTIFIER.xer_decoder;
	td->xer_encoder    = asn_DEF_TYPE_IDENTIFIER.xer_encoder;
	td->uper_decoder   = asn_DEF_TYPE_IDENTIFIER.uper_decoder;
	td->uper_encoder   = asn_DEF_TYPE_IDENTIFIER.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_TYPE_IDENTIFIER.per_constraints;
	td->elements       = asn_DEF_TYPE_IDENTIFIER.elements;
	td->elements_count = asn_DEF_TYPE_IDENTIFIER.elements_count;
	td->specifics      = asn_DEF_TYPE_IDENTIFIER.specifics;
}

void
MECHANISM_NAME_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	MECHANISM_NAME_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
MECHANISM_NAME_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	MECHANISM_NAME_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
MECHANISM_NAME_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	MECHANISM_NAME_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
MECHANISM_NAME_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	MECHANISM_NAME_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
MECHANISM_NAME_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	MECHANISM_NAME_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
MECHANISM_NAME_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	MECHANISM_NAME_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_TYPE_descriptor_t asn_DEF_MECHANISM_NAME = {
	"MECHANISM-NAME",
	"MECHANISM-NAME",
	MECHANISM_NAME_free,
	MECHANISM_NAME_print,
	MECHANISM_NAME_constraint,
	MECHANISM_NAME_decode_ber,
	MECHANISM_NAME_encode_der,
	MECHANISM_NAME_decode_xer,
	MECHANISM_NAME_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	0	/* No specifics */
};

