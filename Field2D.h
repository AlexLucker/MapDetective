#pragma once
#include <vector>

#include "Entity.h"
class Field2D
{
public:
    static Field2D& GetMap();
private:
    Field2D();
    static Field2D* Field;
    std::vector<Entity> AllEntityOnMap;

};

