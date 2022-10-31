// License       : License.txt
// Specifications: Spec-00000058.pdf
/*-- File Header Comment Start -----------------------------------------------*/
// File Name        : STLM20DD9F_00000058.cpp
// BSL              : 00000058
// Model number     : STMicroelectronics STLM20DD9F
// Spec               Component type       : ADC
//                    OS                   : Mbed
//                    Calculation          : Floating-point
//                    Conversion type      : Linear
//                    Moving average filter: Moving average filter select
//                    Diagnosis            : Range (Min to Max)
// Reason for change: 01.00.00 : 25/10/'22 : New Release
// Nickname         : Blue Dragon
/*-- File Header Comment End -------------------------------------------------*/

#include "STLM20DD9F.h"

AnalogIn STLM20DD9F_adc( iSTLM20DD9F_pin , iVref );     // AnalogIn object

// Main Function
pp2ap_adc_t STLM20DD9F_00000058( void )
{
        pp2ap_adc_t res = pp_00000058( STLM20DD9F_adc , tbl_STLM20DD9F );
        return( res );
}
