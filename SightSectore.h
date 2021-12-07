#pragma once
#include "LineOfSight.h"
class SightSector : public ILineOfSight
{
public:
    SightSector(double degrees, double distant);
    virtual ~SightSector() {};

    bool VisibleEntity(Entity& A, Entity& B);

private:
    double degrees;
    double distant;
    static bool CalcVisible(Entity& A, Entity& B);
};