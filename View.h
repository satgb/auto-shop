#ifndef VIEW_H
#define VIEW_H

#include <sstream>
#include <iomanip>
#include <iostream>

#include "Mechanic.h"
#include "LinkedList.h"
#include "Customer.h"
#include "Vehicle.h"

class View 
{
	public:
		void mainMenu(int&);
		void pause() const;
		void promptUserInfo(string&, string&, string&, string&);
		void promptUserId(int&);
		void promptVehicleType(int&);
		void displayInvalid();
		void promptCarInfo(string&, string&, string&, int&, int&);
		void promptTruckInfo(string&, string&, string&, int&, int&, int&);
		void promptMotorcycleInfo(string&, string&, string&, int&, int&, string&);
		void promptVehicle(int, int&);
		void printCustomers(LinkedList<Customer*>&) const;
		void printMechanics(LinkedList<Mechanic*>&, int) const;
		
	private:
		int readInt() const;
};

#endif
