#include "SightSectore.h"
#include "HelpFunc.h"
SightSector::SightSector(double degrees, double distant) :degrees{ degrees }, distant{ distant }
{
}

bool SightSector::VisibleEntity(Entity& A, Entity& B)
{
	MyVec f = VectorD(A.pos(), B.pos());// ������ "�������" ������� �������� �� ������
	if (LengthVec(f) > distant) // �������� ����, ��� �������� � �������� ���������
		return false;
	if (RadToDegree(DegreeVec(f, A.vecRad()))>this->degrees) // �������� ����, ��� ������ �������� ��������� ������ �������
		return false;
	return true;
}
