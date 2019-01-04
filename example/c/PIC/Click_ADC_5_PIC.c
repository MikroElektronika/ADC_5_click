/*
Example for ADC_5 Click

    Date          : Dec 2017.
    Author        : MikroE Team

Test configuration PIC :
    
    MCU             : P18F87K22
    Dev. Board      : EasyPIC PRO v7
    PIC Compiler ver : v7.1.0.0

---

Description :

The application is composed of three sections :

- System Initialization - CS GPIO as output pin, initializes SPI and UART for logging
- Application Initialization - Intializes ADC 5 driver
- Application Task - Sequential reading of voltage. Information about current voltage is 
logged to UART.

*/

#include "Click_ADC_5_types.h"
#include "Click_ADC_5_config.h"

uint16_t ADC_Value;
char text[100];

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
    mikrobus_spiInit( _MIKROBUS1, &_ADC5_SPI_CFG[0] );
    mikrobus_logInit( _MIKROBUS2, 9600 );
    Delay_ms( 100 );
}

void applicationInit()
{
    adc5_spiDriverInit( (T_ADC5_P)&_MIKROBUS1_GPIO, (T_ADC5_P)&_MIKROBUS1_SPI );
}

void applicationTask()
{
    ADC_Value = adc5_getVoltage();

    WordToStr( ADC_Value, text );
    mikrobus_logWrite( "Voltage:", _LOG_TEXT );
    mikrobus_logWrite( text, _LOG_TEXT );
    mikrobus_logWrite( "  mV", _LOG_LINE );
    Delay_1sec();
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
        applicationTask();
    }
}
