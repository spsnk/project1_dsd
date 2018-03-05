#include <iostream>
#include "fraction.h"

using namespace std;

int
main ( int argc, char* argv[] )
{
  if (argc < 3)
  {
    cout << "\033[1;37mmain:\033[0m \033[1;31mfatal error:\033[0m not enough arguments\nUsage:\n\tmain \e[4mnumerator\e[0m \e[4mdenominator\e[0m"<< endl;
    return 1;
  }
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  Fraction f;
  try 
  {
    f.setNumerator ( a );
    f.setDenominator ( b );
  }
  catch (const std::exception &exc)
  {
    cout << exc.what() << endl;
    return 2;
  }
  
  cout << "Fraction: " << a << "/" << b << '\n';
  cout << "Decimal Value: " << f.getDecimal() << "\n";
  cout << "Reduced form: " << f.getReduced() << endl;
  
  return 0;
}
