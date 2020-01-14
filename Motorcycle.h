#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"

using namespace std;

class Motorcycle:public Vehicle
{
	public:
		string toString();
		Motorcycle(string ma, string mo, string c, int y, int mi, bool s);	
	
	private:
		bool sidecar;
};

#endif