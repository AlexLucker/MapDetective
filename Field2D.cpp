#include "Field2D.h"
#include "LineOfSight.h"
Field2D* Field2D::Field = nullptr;

Field2D& Field2D::GetMap()
{
	// ���� ����������� ��������� ��� � ����� ������������������
	if (Field != nullptr){
		return *Field;
	}
	else {
		Field = new Field2D();
		return *Field;
	}
	// TODO: �������� ����� �������� return
}

int Field2D::CalcVisibleFor(Entity& A)
{
	int countVis{ 0 };
	for (auto &it : AllEntityOnMap)
	{
		if (it.GetID() != A.GetID())
			if (A.line->VisibleEntity(A, it))
				++countVis;
	}
	return countVis;
}

Field2D::Field2D() {

}
