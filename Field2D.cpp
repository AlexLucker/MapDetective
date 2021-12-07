#include "Field2D.h"
#include "LineOfSight.h"
Field2D* Field2D::Field = nullptr;

Field2D& Field2D::GetMap()
{
	// Есть возможность упростить код в ущерб производительности
	if (Field != nullptr){
		return *Field;
	}
	else {
		Field = new Field2D();
		return *Field;
	}
	// TODO: вставьте здесь оператор return
}

int Field2D::CalcVisibleFor(Entity& A)
{
	int countVis{ 0 };
	for (auto it : AllEntityOnMap)
	{
		if (it->GetID() != A.GetID())
			if (A.line->VisibleEntity(A, *it))
				++countVis;
	}
	return countVis;
}

void Field2D::CreateEntity(double Px, double Py, double Vx, double Vy, double degrees, double distant)
{
	AllEntityOnMap.push_back(new Entity(Px, Py, Vx, Vy, degrees, distant));
}

std::vector<int> Field2D::GetCountVis()
{
	std::vector<int> vis;
	for (auto it : AllEntityOnMap)
		vis.push_back(CalcVisibleFor(*it));
	return vis;
}

Field2D::Field2D() {

}
