#ifndef VEHICLEFACTORY_H
#define VEHICLEFACTORY_H

#include "Vehicle.h"

#include "Car.h"
#include "Truck.h"
#include "Motorcycle.h"

using namespace std;

class VehicleFactory
{
	public:
		Vehicle* create(string, string, string, int, int);
		Vehicle* create(string, string, string, int, int, int);
		Vehicle* create(string, string, string, int, int, bool);
};

#endif
