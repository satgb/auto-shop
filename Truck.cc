#include "Truck.h"

Truck::Truck(string ma, string mo, string c, int y, int mi, int a):Vehicle(ma, mo, c, y, mi), axles(a)
{}

string Truck::toString()
{
	ostringstream make_model;
	make_model << getMake() << " " << getModel();

	ostringstream output;
	output << "\tTRUCK:" << setw(12) << getColour() << " " << getYear() << " " << setw(18);
	output << make_model.str() << " (" << getMilage() << "km), ";
	output << axles << " axles" << endl;
		
	return output.str();
}