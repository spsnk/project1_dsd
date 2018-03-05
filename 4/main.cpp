#include <iostream>
#include <cstdlib>
#include "temperature.h"

using namespace std;

int main (int argc, char* argv[])
{
  if (argc < 2)
  {
    cout << "\033[1;37mmain:\033[0m \033[1;31mfatal error:\033[0m not enough arguments\nUsage:\n\tmain \e[4mtemperature\e[0m \e[4m[k,c,f]\e[0m\n\tAssumed k for second argument if empty."<< endl;
    return 1;
  }
  double temperature = atof(argv[1]);
  char o;
  if(argc < 3)
  {
    o = 'k';
  }
  else
  {
    o = argv[2][0];
  }
  Temperature t;
  switch (o)
  {
    default:
    case 'k':
      t.setTempKelvin(temperature);
      break;
    case 'c':
      t.setTempCelsius(temperature);
      break;
    case 'f':
      t.setTempFarenheit(temperature);
      break;
  }
  cout << "Temperature in Kelvin: " << t.getTempKelvin() << '\n';
  cout << "Temperature in Celsius: " << t.getTempCelsius() << '\n';
  cout << "Temperature in Farenheit: " << t.getTempFarenheit() << endl;
  
  return 0;
}