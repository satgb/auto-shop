#include "Car.h"

Car::Car(string ma, string mo, string c, int y, int mi):Vehicle(ma, mo, c, y, mi)
{}

string Car::toString()
{
	ostringstream make_model;
	make_model << getMake() << " " << getModel();

	ostringstream output;
	output << "\tCAR:" << setw(14) << getColour() << " " << getYear() << " " << setw(18);
	output << make_model.str() << " (" << getMilage() << "km)" << endl;
		
	return output.str();
}