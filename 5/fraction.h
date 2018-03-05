#ifndef __FRACTION_H__
#define __FRACTION_H__

#include <stdexcept>
#include <string>

class Fraction
{
  private:
    int numerator;
    int denominator;
    bool valid;
    static bool check_zero( int );
    int gcd (void);
  public:
    Fraction ( void ): numerator (0), denominator (1), valid (true) { }
    Fraction ( int a, int b) : numerator(a), denominator(b), valid(check_zero(b)) {  }
    bool setNumerator (int);
    bool setDenominator (int);
    double getDecimal (void);
    std::string getReduced (void);
};

#endif
