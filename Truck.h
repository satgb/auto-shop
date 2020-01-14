#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"
#include <iostream>
#include <sstream>

using namespace std;

class Truck:public Vehicle
{
	public:
		string toString();
		Truck(string ma, string mo, string c, int y, int mi, int a);
		
	private:
		int axles;
};

#endif