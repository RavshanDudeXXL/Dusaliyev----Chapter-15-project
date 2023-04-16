// Ravshan Dusaliyev
// 4/11/2023
// CIS 1202

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "plRZD.h"

void getVehicleInfo(string&, int&);
void getCarInfo(string&, int&, int&);
void getTruckInfo(string&, int&, int&);

int main() {
	Vehicle vehicle;
	Car car;
	Truck truck;
	string man;
	int year, towing, doors;
	
	cout << "Vehicle - \n\n";

	getVehicleInfo(man, year);
	
	vehicle.setManufacturer(man);
	vehicle.setYear(year);
	
	vehicle.displayInfo();

	cout << "Car - \n\n";

	getCarInfo(man, year, doors);

	car.setManufacturer(man);
	car.setYear(year);
	car.setDoors(doors);

	car.displayInfo();

	cout << "Truck - \n\n";

	getTruckInfo(man, year, towing);

	truck.setManufacturer(man);
	truck.setYear(year);
	truck.setTowing(towing);

	truck.displayInfo();

	endProgram();
}

void getVehicleInfo(string& man, int& year)
{
	cout << "Enter the manufacturer : ";
	getline(cin, man);
	year = validateIntegerR("Enter the year built (1900s - 2023): ", 1900, 2023);
}

void getCarInfo(string& man, int& year, int& doors)
{
	cin.ignore();
	getVehicleInfo(man, year);
	doors = validateIntegerR("Enter the amount of doors : ", 1, 4);
}

void getTruckInfo(string& man, int& year, int& towing)
{
	cin.ignore();
	getVehicleInfo(man, year);
	towing = validateIntegerM("Enter the towing strength : ", 0);
}