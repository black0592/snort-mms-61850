/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "mms.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_InitiateRequestPdu_H_
#define	_InitiateRequestPdu_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Integer32.h"
#include "Integer16.h"
#include "Integer8.h"
#include "InitRequestDetail.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* InitiateRequestPdu */
typedef struct InitiateRequestPdu {
	Integer32_t	*localDetailCalling	/* OPTIONAL */;
	Integer16_t	 proposedMaxServOutstandingCalling;
	Integer16_t	 proposedMaxServOutstandingCalled;
	Integer8_t	*proposedDataStructureNestingLevel	/* OPTIONAL */;
	InitRequestDetail_t	 mmsInitRequestDetail;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InitiateRequestPdu_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InitiateRequestPdu;
extern asn_SEQUENCE_specifics_t asn_SPC_InitiateRequestPdu_specs_1;
extern asn_TYPE_member_t asn_MBR_InitiateRequestPdu_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _InitiateRequestPdu_H_ */
#include "asn_internal.h"
