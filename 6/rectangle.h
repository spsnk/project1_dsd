#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "coordinate.h"

class Rectangle
{
  private:
    Coordinate topLeft;
    Coordinate bottomRight;
  public:
    Rectangle ( void ): topLeft( Coordinate(0,0,0) ), bottomRight( Coordinate(0,0,0) ) { }
    Rectangle ( Coordinate tl, Coordinate br ): topLeft(tl), bottomRight(br) { }
    Rectangle ( double a, double b, double c, double d, double e, double f): topLeft(Coordinate(a,b,c)), bottomRight(Coordinate(d,e,f)) { }
    double getArea ( void );
    Coordinate getTopLeft ( void );
    Coordinate getBottomRight ( void );
    
};

#endif
