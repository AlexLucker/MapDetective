#pragma once
#include <vector>
class Entity;
#include "Entity.h"

class Field2D
{
public:
    static Field2D& GetMap();
    int CalcVisibleFor(Entity& A);
private:
    Field2D();
    static Field2D* Field;
    std::vector<Entity> AllEntityOnMap;

};

