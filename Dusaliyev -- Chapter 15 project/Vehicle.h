#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

using namespace std;

class Vehicle {
protected:
	
	string manufacturer;
	int year;

public:
	
	Vehicle(){};
	
	void setManufacturer(string);
	void setYear(int);
	
	string getManufacturer() const{
		return manufacturer;
	}
	
	int getYear() const{
		return year;
	}

	void displayInfo();
};

#endif
