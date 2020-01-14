#include "View.h"

using namespace std;

void View::mainMenu(int& choice) {
    string str;

    choice = -1;

    cout<< "\n\n\n         **** Toby's Auto Mechanic Information Management System ****\n\n";
    cout<< "                                 MAIN MENU\n\n";
    cout<< "        1. Print Customer Database\n\n";
    cout<< "        2. Add Customer\n\n";
    cout<< "        3. Add Vehicle\n\n";
    cout<< "        4. Remove Customer\n\n";
    cout<< "        5. Remove Vehicle\n\n";
    cout<< "        6. Print Mechanics\n\n";
    cout<< "        0. Exit\n\n";

    while (choice < 0 || choice > 6) {
        cout << "Enter your selection:  ";
        choice = readInt();
    }

    if (choice == 0) { cout << endl; }
}

void View::printCustomers(LinkedList<Customer*>& list) const
{
	cout << endl << "CUSTOMERS: " << endl << endl << list << endl;
}

void View::printMechanics(LinkedList<Mechanic*>& m, int n) const
{
	cout << endl << "MECHANICS: " << endl << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(m[i]) << endl;
	}
	cout << endl;
}

void View::displayInvalid() { cout << "Invalid choice." << endl << endl; }

void View::promptUserInfo(string &fname, string &lname, string &address, string &phone) {
    cout << "\nFirst name: ";
    getline(cin, fname);
    cout << "Last name: ";
    getline(cin, lname);
    cout << "Address: ";
    getline(cin, address);
    cout << "Phone number: ";
    getline(cin, phone);
    cout<<endl;
}

void View::promptCarInfo(string &make, string &model, string &colour, int &year, int &mileage)
{
	cout << "\nMake: ";
	getline(cin, make);
	cout << "Model: ";
	getline(cin, model);
	cout << "Colour: ";
	getline(cin, colour);
	cout << "Year: ";
	year = readInt();
	cout << "Mileage: ";
	mileage = readInt();
	cout<<endl;
}

void View::promptTruckInfo(string &make, string &model, string &colour, int &year, int &mileage, int& axles)
{
	cout << "\nMake: ";
	getline(cin, make);
	cout << "Model: ";
	getline(cin, model);
	cout << "Colour: ";
	getline(cin, colour);
	cout << "Year: ";
	year = readInt();
	cout << "Mileage: ";
	mileage = readInt();
	cout << "Axles: ";
	axles = readInt();
	cout<<endl;
}

void View::promptMotorcycleInfo(string &make, string &model, string &colour, int &year, int &mileage, string& s)
{
	cout << "\nMake: ";
	getline(cin, make);
	cout << "Model: ";
	getline(cin, model);
	cout << "Colour: ";
	getline(cin, colour);
	cout << "Year: ";
	year = readInt();
	cout << "Mileage: ";
	mileage = readInt();
	cout << "Sidecar (y/n): ";
	getline(cin, s);
	cout<<endl;
}

void View::promptUserId(int &id) {
    cout << "Customer ID: ";
    id = readInt();
    cout<<endl;
}

void View::promptVehicleType(int& n)
{
	cout << "Vehicle Type (1: Car, 2: Truck, 3: Motorcycle): ";
	n = readInt();
	cout << endl;
}

void View::pause() const {
    string str;

    cout << "Press enter to continue...";
    getline(cin, str);
}

int View::readInt() const {
    string str;
    int    num;

    getline(cin, str);
    stringstream ss(str);
    ss >> num;

    return num;
}

void View::promptVehicle(int numVehicles, int &choice) {
    cout << "Vehicle (0 - " << numVehicles-1 << "): ";
    choice = readInt();
    cout << endl;
}
