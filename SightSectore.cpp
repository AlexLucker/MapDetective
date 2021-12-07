#include "SightSectore.h"

SightSector::SightSector(double degrees, double distant) :degrees{ degrees }, distant{ distant }
{
}

bool SightSector::VisibleEntity(Entity& A, Entity& B)
{
	return false;
}

bool SightSector::CalcVisible(Entity& A, Entity& B)
{

	return false;
}
