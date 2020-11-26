#include "Cone.h"
#include <math.h>
#include <iostream>

/*Cone::Cone(Cone& other)
{
    std::cout << "HEYA!" << std::endl;
}*/

Cone::Cone():Figure(false)
{
    std::cout << "Undefined cone created" << std::endl;
}

Cone::Cone(const float& n_radius, const float& n_height, const float& n_X_coordinate, const float& n_Y_coordinate):Figure(false,4,"Cone",n_X_coordinate,n_Y_coordinate)
{
    m_data[2] = { "radius of a base",n_radius };
    m_data[3] = { "height",n_height };
    std::cout << "Cone created" << std::endl;
}

double Cone::sideSpace()
{
    return (sqrt(pow(m_data[2].m_value,2)+ pow(m_data[3].m_value, 2))*2*3.14* m_data[2].m_value +3.14*pow(m_data[2].m_value,2));
}

double Cone::volume()
{
    return ((1.0/3.0)*3.14*pow(m_data[2].m_value,2)* m_data[3].m_value);
}
