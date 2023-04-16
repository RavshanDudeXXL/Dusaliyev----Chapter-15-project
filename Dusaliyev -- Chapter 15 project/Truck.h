#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle{
private:
	int towing; // towing capacity
public:
	Truck(){};
	
	void setTowing(int);
	
	int getTowing() {
		return towing;
	}

	void displayInfo();

};

#endif
