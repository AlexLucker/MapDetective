#include "Field2D.h"
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

Field2D::Field2D() {

}
