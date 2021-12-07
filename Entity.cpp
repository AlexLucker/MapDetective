#include "Entity.h"
#include "SightSectore.h"
Entity::Entity(double Px, double Py, double Vx, double Vy,
	double degrees, double distant) :_pos{ MyVec{Px,Py} }, _vecRad{ MyVec{Vx,Vy} }, line{  new SightSector{degrees, distant} }, ID{ lastID++ }
{

}
int Entity::lastID = 0;
Entity::~Entity()
{
	delete line;
}

MyVec Entity::pos()
{
	return _pos;
}

MyVec Entity::vecRad()
{
	return _vecRad;
}

int Entity::GetID()
{
	return ID;
}

int Entity::CheckVisible()
{
	return Field2D::GetMap().CalcVisibleFor(*this);
}
