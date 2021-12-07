#pragma once
#include "Field2D.h"
#include <functional>
class Entity
{
public:
	std::function<bool(Entity&, Entity&)> GetLineOfSight(); // Возвращают функцию обзора
private:
};

