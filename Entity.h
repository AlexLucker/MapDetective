#pragma once
#include <tuple>

#include "Field2D.h"
struct ILineOfSight;
class Entity
{
public:

	std::tuple<double, double> pos();
	std::tuple<double, double> vecRad();
	ILineOfSight *LineOfSight; // Возвращают объект обзора
private:
	double _pos[2];
	double _vecRad[2];
};

