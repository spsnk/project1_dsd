#ifndef __TEMPERATURE_H__
#define __TEMPERATURE_H__

class Temperature
{
  private:
    double kelvin;
  public:
    Temperature( void ) : kelvin (0) { }
    Temperature( double k ) : kelvin(k) { }
    void setTempKelvin( double );
    void setTempCelsius( double );
    void setTempFarenheit( double );
    double getTempKelvin( void );
    double getTempCelsius( void );
    double getTempFarenheit( void );
};

#endif