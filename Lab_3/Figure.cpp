#include "Figure.h"
#include <iostream>

Figure::Figure(const float& n_x_coord, const float& n_y_coord):
	number_of_fields(2)
{
	m_data = new Float_data[number_of_fields];
	m_data[0] = { "x coordinate",n_x_coord };
	m_data[1] = { "y coordinate",n_y_coord };
	std::cout << "Unknown universe!" << std::endl;
}

Figure::Figure(bool is_figure,unsigned int n_number_of_fields, const char* n_name, const float& n_X_coordinate, const float& n_Y_coordinate):
	number_of_fields(n_number_of_fields),m_class_name(n_name)
{
	m_data = new Float_data[number_of_fields];
	m_data[0] = { "x coordinate",n_X_coordinate };
	m_data[1] = { "y coordinate",n_Y_coordinate };
	if (is_figure) std::cout << "Figure created" << std::endl;
}

Figure::Figure(const Figure& other)
{
	m_class_name = other.m_class_name;
	number_of_fields = other.number_of_fields;
	m_data = new Float_data[number_of_fields];
	memcpy(m_data, other.m_data, sizeof(Float_data) * number_of_fields);
}

Figure::~Figure()
{
	delete[] m_data;
	std::cout << m_class_name << " has been deleted\n";
}


void Figure::info()
{
	std::cout << m_class_name << " data:\n";
	for (int i = 0; i < number_of_fields; i++) m_data[i].show();		
	std::cout << "the summ of it's side spaces is: " << sideSpace() << std::endl;
	std::cout << "it's volume is: " << volume() << std::endl;
}

void Figure::setPos(const float& n_x_coord, const float& n_y_coord)
{
	m_data[0] = n_x_coord;
	m_data[1] = n_y_coord;

	std::cout << "The position of a " << m_class_name << " has been changed" << std::endl;
}

Figure& Figure::operator=(const Figure& other)
{	
	m_class_name = other.m_class_name;
	number_of_fields = other.number_of_fields;
	delete[] m_data;
	m_data = new Float_data[number_of_fields];
	memcpy(m_data, other.m_data, sizeof(Float_data) * number_of_fields);
	return *this;
}

Float_data::Float_data()
{
}

Float_data::Float_data(const char* n_name, const float& n_value):
	m_data_name(n_name),m_value(n_value)
{
}

Float_data::Float_data(const float& n_value):
	m_value(n_value)
{
}

Float_data::~Float_data()
{
}

void Float_data::show()
{
	std::cout << m_data_name;
	std::cout<<": " << m_value << std::endl;
}
