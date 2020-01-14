#include "Motorcycle.h"

Motorcycle::Motorcycle(string ma, string mo, string c, int y, int mi, bool s):Vehicle(ma, mo, c, y, mi), sidecar(s)
{}

string Motorcycle::toString()
{
	ostringstream make_model;
	make_model << getMake() << " " << getModel();

	ostringstream output;
	output << "\tMOTORCYCLE:" << setw(7) << getColour() << " " << getYear() << " " << setw(18);
	output << make_model.str() << " (" << getMilage() << "km), ";
	
	if(sidecar == true)
		output << "sidecar" << endl;
	else
		output << "no sidecar" << endl;
		
	return output.str();
}