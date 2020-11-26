#pragma once
class Float_data
{
public:
//important data
	const char* m_data_name = "";
	float m_value = 0;

//c-tors,d-tors
	Float_data();
	Float_data(const char* n_name, const float& n_value);
	Float_data(const float& n_value);
	~Float_data();	


//data showcase
	void show();
};
class Figure
{
protected:
	//class name:
	const char* m_class_name = "Unknown";
	//figure coordinates

	//other data
	int number_of_fields=2;
	Float_data* m_data=nullptr;
public:
//C-TORS, D_TORS
	//figure costructors
	Figure(const float& n_x_coord, const float& n_y_coord);
	Figure(bool is_figure=true, unsigned int n_number_of_fields=2,const char* n_name="Unknown", const float& n_X_coordinate=0, const float& n_Y_coordinate=0);

		//figure deep copy c-tor
	Figure(const Figure& other);

	//figure d-tor
	virtual ~Figure();

//figure usefull methods
		//sides space
	virtual double sideSpace() = 0;
		//volume of a figure
	virtual double volume() = 0;

	//figure info method
	virtual void info();

	//data changes:
	void setPos(const float& n_x_coord, const float& n_y_coord);

//Figure operator overloading
	Figure& operator=(const Figure& other);

};


