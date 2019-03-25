/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO8823-PRESENTATION"
 * 	found in "ISO8823_NEW.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_CPA_PPDU_H_
#define	_CPA_PPDU_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Mode-selector.h"
#include "Protocol-version.h"
#include "Responding-presentation-selector.h"
#include "Presentation-requirements.h"
#include "User-session-requirements.h"
#include "Protocol-options.h"
#include "Presentation-context-identifier.h"
#include <constr_SEQUENCE.h>
#include <constr_SET.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */

/*
 * Method of determining the components presence
 */
typedef enum CPA_PPDU_PR {
	CPA_PPDU_PR_mode_selector,	/* Member mode_selector is present */
	CPA_PPDU_PR_normal_mode_parameters,	/* Member normal_mode_parameters is present */
} CPA_PPDU_PR;

/* Forward declarations */
struct Presentation_context_definition_result_list;
struct User_data;

/* CPA-PPDU */
typedef struct CPA_PPDU {
	Mode_selector_t	 mode_selector;
	struct CPA_PPDU__normal_mode_parameters {
		Protocol_version_t	*protocol_version	/* DEFAULT {version-1} */;
		Responding_presentation_selector_t	*responding_presentation_selector	/* OPTIONAL */;
		struct Presentation_context_definition_result_list	*presentation_context_definition_result_list	/* OPTIONAL */;
		Presentation_requirements_t	*presentation_requirements	/* OPTIONAL */;
		User_session_requirements_t	*user_session_requirements	/* OPTIONAL */;
		Protocol_options_t	*protocol_options	/* DEFAULT {} */;
		Presentation_context_identifier_t	*responders_nominated_context	/* OPTIONAL */;
		struct User_data	*user_data	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *normal_mode_parameters;
	
	/* Presence bitmask: ASN_SET_ISPRESENT(pCPA_PPDU, CPA_PPDU_PR_x) */
	unsigned int _presence_map
		[((2+(8*sizeof(unsigned int))-1)/(8*sizeof(unsigned int)))];
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CPA_PPDU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CPA_PPDU;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Presentation-context-definition-result-list.h"
#include "User-data.h"

#endif	/* _CPA_PPDU_H_ */
#include <asn_internal.h>
