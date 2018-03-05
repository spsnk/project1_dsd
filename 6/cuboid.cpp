#include "cuboid.h"

Cuboid::Cuboid ( Coordinate a, Coordinate b )
{
  double x1 = a.getX();
  double y1 = a.getY();
  double z1 = a.getZ();

  double x2 = b.getX();
  double y2 = b.getY();
  double z2 = b.getZ();
  
  back = Rectangle ( Coordinate(x1, y1, z2), Coordinate(x1,y2,z2) );
  front = Rectangle ( Coordinate(x2, y1, z1), Coordinate(x2,y2,z2) );

  bottom = Rectangle ( Coordinate(x1,y1,z1), Coordinate(x2,y2,z1) );
  top = Rectangle ( Coordinate(x1,y1,z2), Coordinate(
} 
