#include "Truck.h"
#include <iostream>

using namespace std;

void Truck::setTowing(int truckTow) {
	towing = truckTow;
}

void Truck::displayInfo()
{
	Vehicle::displayInfo();

	cout << "Towing : " << towing << endl;
}