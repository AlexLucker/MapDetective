#include "SightSectore.h"
#include "HelpFunc.h"
SightSector::SightSector(double degrees, double distant) :degrees{ degrees }, distant{ distant }
{
}

bool SightSector::VisibleEntity(Entity& A, Entity& B)
{
	MyVec f = VectorD(A.pos(), B.pos());// Вектор "взгляда" первого существа на второе
	if (LengthVec(f) > distant) // Проверка того, что сущности в пределах видимости
		return false;
	if (RadToDegree(DegreeVec(f, A.vecRad()))>this->degrees) // Проверка того, что вторая сущность находится внутри сектора
		return false;
	return true;
}
