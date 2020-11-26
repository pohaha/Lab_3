#include "Cone.h"
#include "sphere.h"
#include <iostream>
#ifdef __cplusplus__
#include <cstdlib>
#else
#include <stdlib.h>
#endif
int main()
{
	//doing some tests:
//cone tests!
	Cone* testCones;
	int conesTotal;
	std::cout << "Input the amount of cones: " << std::endl;
	std::cin >> conesTotal;
	testCones = new Cone[conesTotal]();
	std::cin.clear();
	while (std::cin.get() != '\n')
	{
		continue;
	}
	std::cin.get();
	if (system("CLS")) system("clear");
	int needCoordinates;
	float n_Height, n_Base_Radius,n_X_coordinate,n_Y_Coordinate;

	for (int i = 0; i < conesTotal; i++)
	{
		std::cout << "Initiating Cone # " << i + 1 << "  definition:" << std::endl;
		n_X_coordinate = n_Y_Coordinate = 0;
		std::cout << "input 1 if you would like to set coordinates, 0 iy you won't" << std::endl;
		std::cin >> needCoordinates;
		std::cout << "input height: ";
			std::cin >> n_Height;
			std::cout << "Input base radius: ";
			std::cin >> n_Base_Radius;
		if (needCoordinates)
		{
			std::cout << "input X coordinate: ";
			std::cin >> n_X_coordinate;
			std::cout<< "input Y coordinate: ";
			std::cin >> n_Y_Coordinate;
		}
		testCones[i]=Cone(n_Base_Radius,n_Height,n_X_coordinate,n_Y_Coordinate);
		std::cin.clear();
		while (std::cin.get() != '\n')
		{
			continue;
		}
		std::cin.get();
		if (system("CLS")) system("clear");
	}
// sphere tests!!
	Sphere* testSpheres;
	int spheresTotal;
	std::cout << "Input the amount of spheres: " << std::endl;
	std::cin >> spheresTotal;
	testSpheres = new Sphere[spheresTotal]();
	std::cin.clear();
	while (std::cin.get() != '\n')
	{
		continue;
	}
	std::cin.get();
	if (system("CLS")) system("clear");
	for (int i = 0; i < spheresTotal; i++)
	{
		std::cout << "Initiating Sphere # "<< i+1<<"  definition:" << std::endl;
		n_X_coordinate = n_Y_Coordinate = 0;
		std::cout << "input 1 if you would like to set coordinates, 0 iy you won't" << std::endl;
		std::cin >> needCoordinates;
		std::cout << "Input base radius: ";
		std::cin >> n_Base_Radius;
		if (needCoordinates)
		{
			std::cout << "input X coordinate: ";
			std::cin >> n_X_coordinate;
			std::cout << "input Y coordinate: ";
			std::cin >> n_Y_Coordinate;
		}
		testSpheres[i] = Sphere(n_Base_Radius, n_X_coordinate, n_Y_Coordinate);
		std::cin.clear();
		while (std::cin.get() != '\n')
		{
			continue;
		}
		std::cin.get();
		if (system("CLS")) system("clear");
	}

	for (int i = 0; i < conesTotal; i++)
	{
		std::cout << "# "<<i+1 << std::endl;
		testCones[i].info();
		std::cin.clear();
		while (std::cin.get() != '\n')
		{
			continue;
		}
		std::cin.get();
		if (system("CLS")) system("clear");
	}
	
	for (int i = 0; i < spheresTotal; i++)
	{
		std::cout << "# " << i + 1 << std::endl;
		testSpheres[i].info();
		std::cin.clear();
		while (std::cin.get() != '\n')
		{
			continue;
		}
		std::cin.get();
		if (system("CLS")) system("clear");
	}
	return 0;
}