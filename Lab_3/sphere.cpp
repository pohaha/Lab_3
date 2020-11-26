#include "sphere.h"
#include <math.h>
#include <iostream>

Sphere::Sphere():Figure(false)
{
	std::cout << "Undefined sphere created" << std::endl;
}

Sphere::Sphere(const float& n_radius, const float& n_X_coordinate, const float& n_Y_coordinate):
	Figure(false,3,"Sphere", n_X_coordinate, n_Y_coordinate)
{
	m_data[2] = { "radius",n_radius };
	std::cout << "Sphere created" << std::endl;
}

double Sphere::sideSpace()
{
	return 4*3.14*pow(m_data[2].m_value,2);
}

double Sphere::volume()
{
	return (4.0/3.0)*3.14*pow(m_data[2].m_value,3);
}
