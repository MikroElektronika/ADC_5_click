![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# ADC_5 Click

- **CIC Prefix**  : ADC5
- **Author**      : Katarina Perendic

---

### Software Support

We provide a library for the ADC_5 Click on our [LibStock](http://libstock.mikroe.com/projects/view/2256/adc-5-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

Library carries two functions for reading ADC value from the click board.

Key functions :

- ``` adc5_getData ``` - Returns raw 10 bit data
- ``` adc5_getVoltage ``` - Returns measured voltage in milivolts

**Examples Description**

Demo application presents how to use ADC 5 click driver. Demo application is
composed of 3 sections :

- System Initialization - CS GPIO as output pin, initializes SPI and UART for logging
- Application Initialization - Intializes ADC 5 driver
- Application Task - (code snippet) - Sequential reading of voltage. Information about 
current voltage is logged to UART. Operation is repeated each one second.

```.c
void applicationTask()
{
    ADC_Value = adc5_getVoltage();

    WordToStr( ADC_Value, text );
    mikrobus_logWrite( "Voltage:", _LOG_TEXT );
    mikrobus_logWrite( text, _LOG_TEXT );
    mikrobus_logWrite( "  mV", _LOG_LINE );
    Delay_1sec();
}
```

The full application code, and ready to use projects can be found on our 
[LibStock](http://libstock.mikroe.com/projects/view/2256/adc-5-click) page.

Other mikroE Libraries used in the example:

- UART 
- Conversions
- String

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
---
