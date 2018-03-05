#ifndef __CUBOID_H__
#define __CUBOID_H__

#include <vector>

class Cuboid
{
  private:
    Rectangle back;
    Rectangle bottom;
    Rectangle left;

    Rectangle front;
    Rectangle top;
    Rectangle right;
  public:
    Cuboid ( Coordinate, Coordinate );
    Cuboid ( double, double, double, double, double, double );
    double getSurface ( void );
    double getVolume ( void );
    std::vector<Coordinate> getVertices ( void );
};

#endif
