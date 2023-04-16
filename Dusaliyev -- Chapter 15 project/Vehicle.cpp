#include "Vehicle.h"
#include <string>
#include <iostream>

using namespace std;

void Vehicle::setManufacturer(string vehicleMan) {
	manufacturer = vehicleMan;
}

void Vehicle::setYear(int vehicleYears) {
	year = vehicleYears;
}

void Vehicle::displayInfo() {
	cout << "Vehicle Info\n";
	cout << "-------------------\n\n";
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << year << endl;
}