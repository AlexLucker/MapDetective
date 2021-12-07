#include <iostream>
#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>

#include "Entity.h"
#include "Field2D.h"

using namespace std;

struct MyVec
{
    double x;
    double y;
};
double LengthVec(double a, double b) {
    return sqrt(a * a + b * b);
}
double LengthVec(MyVec a) {
    return LengthVec(a.x, a.y);
}

double DegreeVec(MyVec a, MyVec b){
    double chis = a.x * b.x + a.y * b.y;
    double znam = LengthVec(a) * LengthVec(b);
    double ans = acos(chis / znam);
    return ans;
}

bool CheckVisible(Entity& A, Entity& B) {
    return true;
}



int main()
{
    MyVec a{ 1,3 }, b{4,2};

    std::cout << 180 * (DegreeVec(a, b) / M_PI) << endl;
}