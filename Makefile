OBJ = main.o ShopController.o View.o Shop.o Customer.o Vehicle.o Mechanic.o Person.o Car.o Truck.o Motorcycle.o VehicleFactory.o

mechanicshop:	$(OBJ)
	g++ -o mechanicshop $(OBJ) LinkedList.h -g

main.o:	main.cc 
	g++ -c main.cc -g

ShopController.o:	ShopController.cc ShopController.h Shop.h View.h
	g++ -c ShopController.cc -g

View.o:	View.cc View.h 
	g++ -c View.cc -g

Shop.o:	Shop.cc Shop.h Mechanic.h
	g++ -c Shop.cc -g

Customer.o:	Customer.cc Customer.h Person.h Vehicle.h
	g++ -c Customer.cc -g

Vehicle.o: Vehicle.cc Vehicle.h
	g++ -c Vehicle.cc -g

Mechanic.o: Mechanic.cc Mechanic.h Person.h
	g++ -c Mechanic.cc -g

Person.o: Person.h Person.cc
	g++ -c Person.cc -g

Car.o: Car.h Car.cc
	g++ -c Car.cc -g

Truck.o: Truck.h Truck.cc
	g++ -c Truck.cc -g

Motorcycle.o: Motorcycle.h Motorcycle.cc
	g++ -c Motorcycle.cc -g

VehicleFactory.o: VehicleFactory.h VehicleFactory.cc
	g++ -c VehicleFactory.cc -g
	
clean:
	rm -f $(OBJ) mechanicshop
