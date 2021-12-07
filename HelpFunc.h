#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
struct MyVec
{
    double x;
    double y;
};
double LengthVec(double a, double b);
double LengthVec(MyVec a);
double DegreeVec(MyVec a, MyVec b);
double VectorToDegree(MyVec v);
MyVec VectorD(MyVec A, MyVec B);
double RadToDegree(double x);
double DegreeToRad(double x);
