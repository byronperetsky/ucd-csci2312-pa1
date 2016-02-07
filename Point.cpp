//Byron Peretsky
//STUDENT ID: 105789918
//Point class implementation file.
//All functions for the pint class are here.


#include <iostream>
#include <cmath>
#include "Point.h"


using namespace std;

// Constructors

// default constructor
Point::Point(){

    x = 0;
    y = 0;
    z = 0;

}


// Three-argument constructor
Point::Point(double __x, double __y, double __z){

    x = __x;
    y = __y;
    z = __z;

}

// Mutator methods
void Point::setX(double newX){

    x = newX;
}

void Point::setY(double newY){

    y = newY;
}

void Point::setZ(double newZ){

    z = newZ;
}


// Accessor methods
double Point::getX() const{

    return x;
}

double Point::getY() const{

    return y;
}

double Point::getZ() const{

    return z;
}

// Returns the distance between two points.
double Point::distanceTo(const Point & p) const{

    //Calculates the distance between two points.
    double xDistance = (x - p.getX()) * (x - p.getX());
    double yDistance = (y - p.getY()) * (y - p.getY());
    double zDistance = (z - p.getZ()) * (z - p.getZ());


    double finalDistance = sqrt( xDistance + yDistance + zDistance );

    return finalDistance;

}


