#include "babilon.h"

double babilon_root ( double x )
{
  double r = x;
  double t = 0;
  while (t != r)
  {
    t = r;
    r = 0.5*( x/r + r );
  }
  return r;
}
