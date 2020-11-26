#pragma once
#include "Figure.h"
class Cone: public Figure
{
private:
	

public:
	//c-tors:
//	Cone(Cone& other);
	Cone();
	Cone(const float& n_radius, const float& n_height, const float& n_X_coordinate=0, const float& n_Y_coordinate=0);

	//usefull methods implementations:

	virtual double sideSpace() override;
	virtual double volume() override;

};

