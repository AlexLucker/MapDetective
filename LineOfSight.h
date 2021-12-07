#pragma once
#include "Entity.h"


struct ILineOfSight
{
	virtual bool VisibleEntity(Entity& A, Entity& B) = 0;
	virtual ~ILineOfSight() {};
};

