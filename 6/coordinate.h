#ifndef __COORDINATE_H__
#define __COORDINATE_H__

class Coordinate
{
  private:
    double x;
    double y;
    double z;
  public:
    Coordinate ( void ): x(0), y(0), z(0) { }
    Coordinate ( double x, double y, double z): x(x), y(y), z(z) { }
    double getX ( void );
    double getY ( void );
    double getZ ( void );
};

#endif
