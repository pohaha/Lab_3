#pragma once
#include "Figure.h"
class Sphere: public Figure
{
public:
	//c-tors
	Sphere();
	Sphere(const float& radius, const float& n_X_coordinate = 0, const float& n_Y_coordinate = 0);

	//overriden methods
	virtual double sideSpace() override;
	virtual double volume() override;

};

