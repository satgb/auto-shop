#ifndef SHOP_H
#define SHOP_H

#include "Mechanic.h"
#include "Customer.h"
#include "LinkedList.h"

class Shop
{
	public:
		Shop& operator+=(Customer*);  
		Shop& operator-=(Customer*);      
		Customer* getCustomer(int);
		LinkedList<Customer*>& getCustomers();
		Shop& operator+=(Mechanic*);
		LinkedList<Mechanic*>& getMechanics();

	private:
		LinkedList<Customer*> customers;
		LinkedList<Mechanic*> mechanics;
};

#endif
