#pragma once
#include <tuple>
#include "HelpFunc.h"
#include "Field2D.h"
struct ILineOfSight;
class Entity
{
public:
	Entity(double Px, double Py, double Vx, double Vy, double degrees, double distant);
	~Entity();
	MyVec pos();
	MyVec vecRad();
	ILineOfSight *line; // Возвращают объект обзора
	int GetID();
	int CheckVisible();
private:
	MyVec _pos;
	MyVec _vecRad;
	int ID;
	static int lastID;
};

