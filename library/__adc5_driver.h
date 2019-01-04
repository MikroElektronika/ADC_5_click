/*
    __adc5_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __adc5_driver.h
@brief    ADC_5 Driver
@mainpage ADC_5 Click
@{

@image html sch.jpg

@}

@defgroup   ADC5
@brief      ADC_5 Click Driver
@{

| Global Library Prefix | **ADC5** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **Dec 2017.**      |
| Developer             | **MikroE Team**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _ADC5_H_
#define _ADC5_H_

/** 
 * @macro T_ADC5_P
 * @brief Driver Abstract type 
 */
#define T_ADC5_P    const uint8_t*

/** @defgroup ADC5_COMPILE Compilation Config */                       /** @{ */

   #define   __ADC5_DRV_SPI__                            /**<     @macro __ADC5_DRV_SPI__  @brief SPI driver selector */
//  #define   __ADC5_DRV_I2C__                            /**<     @macro __ADC5_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __ADC5_DRV_UART__                           /**<     @macro __ADC5_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup ADC5_VAR Variables */                                    /** @{ */

extern const uint16_t _ADC5_VREF;        /**< Reference Voltage */
extern const uint16_t _ADC5_RESOLUTION;  /**< ADC Resolution */
                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup ADC5_INIT Driver Initialization */              /** @{ */

#ifdef   __ADC5_DRV_SPI__
void adc5_spiDriverInit(T_ADC5_P gpioObj, T_ADC5_P spiObj);
#endif
#ifdef   __ADC5_DRV_I2C__
void adc5_i2cDriverInit(T_ADC5_P gpioObj, T_ADC5_P i2cObj, uint8_t slave);
#endif
#ifdef   __ADC5_DRV_UART__
void adc5_uartDriverInit(T_ADC5_P gpioObj, T_ADC5_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void adc5_gpioDriverInit(T_ADC5_P gpioObj);
                                                                       /** @} */
/** @defgroup ADC5_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Read Voltage
 *
 * @retval Voltage in minivolts
 */

uint16_t adc5_getVoltage();

/**
 * @brief Read Raw ADC Value
 *
 * @retval RAW ADC Output
 */
uint16_t adc5_getData();
                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_ADC_5_STM.c
    @example Click_ADC_5_TIVA.c
    @example Click_ADC_5_CEC.c
    @example Click_ADC_5_KINETIS.c
    @example Click_ADC_5_MSP.c
    @example Click_ADC_5_PIC.c
    @example Click_ADC_5_PIC32.c
    @example Click_ADC_5_DSPIC.c
    @example Click_ADC_5_AVR.c
    @example Click_ADC_5_FT90x.c
    @example Click_ADC_5_STM.mbas
    @example Click_ADC_5_TIVA.mbas
    @example Click_ADC_5_CEC.mbas
    @example Click_ADC_5_KINETIS.mbas
    @example Click_ADC_5_MSP.mbas
    @example Click_ADC_5_PIC.mbas
    @example Click_ADC_5_PIC32.mbas
    @example Click_ADC_5_DSPIC.mbas
    @example Click_ADC_5_AVR.mbas
    @example Click_ADC_5_FT90x.mbas
    @example Click_ADC_5_STM.mpas
    @example Click_ADC_5_TIVA.mpas
    @example Click_ADC_5_CEC.mpas
    @example Click_ADC_5_KINETIS.mpas
    @example Click_ADC_5_MSP.mpas
    @example Click_ADC_5_PIC.mpas
    @example Click_ADC_5_PIC32.mpas
    @example Click_ADC_5_DSPIC.mpas
    @example Click_ADC_5_AVR.mpas
    @example Click_ADC_5_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __adc5_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */

