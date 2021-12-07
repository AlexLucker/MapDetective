#include "Field2D.h"
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

Field2D::Field2D() {

}
