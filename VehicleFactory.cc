#include "VehicleFactory.h"

Vehicle* VehicleFactory::create(string ma, string mo, string c, int y, int mi)
{
	return new Car(ma, mo, c, y, mi);	//create car
}

Vehicle* VehicleFactory::create(string ma, string mo, string c, int y, int mi, int a)
{
	return new Truck(ma, mo, c, y, mi, a);		//create truck
}

Vehicle* VehicleFactory::create(string ma, string mo, string c, int y, int mi, bool s)
{
	return new Motorcycle(ma, mo, c, y, mi, s);	//create motorcycle
}
