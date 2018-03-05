#ifndef __FRACTION_H__
#define __FRACTION_H__

class Fraction
{
  private:
    int numerator;
    int denominator;
    bool valid;
    static bool check_bounds( int, int );
  public:
    Fraction ( void ): numerator (0), denominator (1) { }
    Fraction ( int a, int b) : check_bounds(a,b)  {   }

};

#endif
