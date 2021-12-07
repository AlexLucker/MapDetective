#include <iostream>
#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>

#include "Entity.h"
#include "Field2D.h"
#include "LineOfSight.h"
#include "SightSectore.h"
#include "HelpFunc.h"
using namespace std;

bool CheckVisible(Entity& A, Entity& B) {
    return A.line->VisibleEntity(A, B);
}

void foo1() {
    Field2D& e = Field2D::GetMap();
}


int main()
{
    
    
    return 0;
}