// A 3-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __POINT_H
#define __POINT_H

class Point {
    
private:
    double x, y, z;

public:
    // Constructors
    Point();                      // default constructor
    Point(double x, double y, double z);    // three-argument constructor

    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);


    // Accessor methods
    double getX() const;
    double getY() const;
    double getZ() const;

    // Approximates the distance between the two points
    double distanceTo(const Point & p) const;

    
};

#endif // __POINT_H
