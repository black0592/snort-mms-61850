/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "mms.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_InitResponseDetail_H_
#define	_InitResponseDetail_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Integer16.h"
#include "ParameterSupportOptions.h"
#include "ServiceSupportOptions.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* InitResponseDetail */
typedef struct InitResponseDetail {
	Integer16_t	 negotiatedVersionNumber;
	ParameterSupportOptions_t	 negotiatedParameterCBB;
	ServiceSupportOptions_t	 servicesSupportedCalled;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InitResponseDetail_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InitResponseDetail;
extern asn_SEQUENCE_specifics_t asn_SPC_InitResponseDetail_specs_1;
extern asn_TYPE_member_t asn_MBR_InitResponseDetail_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _InitResponseDetail_H_ */
#include "asn_internal.h"
