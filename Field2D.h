#pragma once
#include <vector>
class Entity;
#include "Entity.h"
#include <vector>
class Field2D
{
public:
    static Field2D& GetMap();
    int CalcVisibleFor(Entity& A);
    void CreateEntity(double Px, double Py, double Vx, double Vy,
        double degrees, double distant);
    std::vector<int> GetCountVis();
private:
    Field2D();
    static Field2D* Field;
    std::vector<Entity*> AllEntityOnMap;

};

