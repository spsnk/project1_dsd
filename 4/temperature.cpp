#include "temperature.h"

void 
Temperature::setTempKelvin( double k )
{
  kelvin = k;
}

void 
Temperature::setTempCelsius( double c )
{
  kelvin = c + 273.15;
}

void 
Temperature::setTempFarenheit( double f )
{
  kelvin = (f + 459.67) * ( 5.0 / 9.0 );
}

double
Temperature::getTempKelvin( void )
{
  return kelvin;
}

double
Temperature::getTempCelsius( void )
{
  return kelvin - 273.15;
}

double
Temperature::getTempFarenheit( void )
{
  return ( kelvin * ( 9.0/ 5.0 ) ) - 459.67;
}