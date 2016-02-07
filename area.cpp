//Byron Peretsky
//STUDENT ID: 105789918



#include <cmath>
#include "Point.h"

//Function: using Herons's formula this function determines the area of a triangle.
double computeArea(const Point &a, const Point &b, const Point &c){

    //Calls the distanceTo function in Point.h and assigns the value of a side to a variable.
    double distanceAtoB = a.distanceTo(b);
    double distanceBtoC = b.distanceTo(c);
    double distanceCtoA = c.distanceTo(a);

    //Calculates the semiperimeter of our triangle and assings the value to semiper.
    double semiper = (distanceAtoB + distanceBtoC + distanceCtoA) / 2;

    //Final calculates the area of the triangle to the Area.
    double theArea = sqrt(semiper*(semiper - distanceAtoB)*(semiper - distanceBtoC)*(semiper - distanceCtoA));

    return theArea;

}