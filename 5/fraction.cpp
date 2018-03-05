#include "fraction.h"

bool
Fraction::check_zero ( int d )
{
  if ( d == 0 )
  {
    throw std::logic_error ( "Denominator can't be '0'" );
    return false;
  }
  return true;
}

int
Fraction::gcd ( void )
{
  int a = numerator;
  int b = denominator;
  int t;
  while ( b != 0 )
  {
    t = b;
    b = a % b;
    a = t;
  }
  return a;
}

bool
Fraction::setNumerator ( int a )
{
  numerator = a;
  return true;
}

bool
Fraction::setDenominator ( int b )
{
  if ( check_zero ( b ) )
  {
   denominator = b;
  }
}

double
Fraction::getDecimal ( void )
{
  if ( valid )
  {
    return static_cast<double>(numerator)/denominator;
  }
  else
  {
    return 0;
  }
}

std::string
Fraction::getReduced( void )
{
  if ( valid )
  {
    std::string result;
    result = std::to_string( numerator/gcd() ) + "/" + std::to_string( denominator/gcd() );
    return result;
  }
  else
  {
    return "error";
  }
}

