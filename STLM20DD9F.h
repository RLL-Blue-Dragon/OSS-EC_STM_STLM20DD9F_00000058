// License       : License.txt
// Specifications: Spec-STLM20DD9F.pdf
/*-- File Header Comment Start -----------------------------------------------*/
// File Name        : STLM20DD9F.h
// Reason for change: 01.00.00 : 25/10/'22 : New Release
// Nickname         : Blue Dragon
/*-- File Header Comment End -------------------------------------------------*/

#ifndef __STLM20DD9F_H__
#define __STLM20DD9F_H__

#include "user_define.h"

// Components number
#define iSTLM20DD9F             123U                    // STMicroelectronics STLM20DD9F

// STLM20DD9F System Parts definitions
#define iSTLM20DD9F_xoff        1.8583F                 // X offset [V]
#define iSTLM20DD9F_yoff        0.0F                    // Y offset [degree celsius]
#define iSTLM20DD9F_gain        -0.01167F               // Gain [V/degree celsius]
#define iSTLM20DD9F_max         85.0F                   // Temperature Max [degree celsius]
#define iSTLM20DD9F_min         -40.0F                  // Temperature Min [degree celsius]

extern const tbl_adc_t tbl_STLM20DD9F;

#endif /*__STLM20DD9F_H__*/
