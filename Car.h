#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

using namespace std;

class Car:public Vehicle
{
	public:
		string toString();
		Car(string, string, string, int, int);
};

#endif