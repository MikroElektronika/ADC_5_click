#include "Click_ADC_5_types.h"

const uint32_t _ADC5_SPI_CFG[ 3 ] = 
{ 
	1000000,  
	_SPI_MSB_FIRST, 
	_SPI_CLK_IDLE_LOW | 
	_SPI_SAMPLE_DATA_FALLING_EDGE 
};

