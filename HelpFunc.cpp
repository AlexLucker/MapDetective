#include "HelpFunc.h"




double LengthVec(double a, double b) {
    return sqrt(a * a + b * b);
}
double LengthVec(MyVec a) {
    return LengthVec(a.x, a.y);
}


double DegreeVec(MyVec a, MyVec b) {
    double chis = a.x * b.x + a.y * b.y;
    double znam = LengthVec(a) * LengthVec(b);
    double ans = acos(chis / znam);
    return ans;
}
double VectorToDegree(MyVec v) {
    return DegreeVec(v, MyVec{ 1,0 });
}

MyVec VectorD(MyVec A, MyVec B)
{
    return MyVec{ B.x - A.x,B.y - A.y };
}

double RadToDegree(double x) {
    return 180 * (x / M_PI);
}

double DegreeToRad(double x) {
    return  (x * M_PI) / 180;
}