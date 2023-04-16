#include "Car.h"

#include <iostream>

using namespace std;

void Car::setDoors(int door) {
	doors = door;
}

void Car::displayInfo()
{
	Vehicle::displayInfo();

	cout << "Doors : " << doors << endl;
}