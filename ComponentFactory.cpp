#include "ComponentFactory.h"


std::unique_ptr<Component> ComponentFactory::makeComponent(const std::string choice)
{

	if (choice == "Resistor")
	{
		std::cout << "Pass inizalization values for Resistor \t" << std::endl;
		std::cout << "1.resitance:" << std::endl;
		long resitance{};
		std::cin >> resitance;
		
		return std::make_unique<Resistor>(resitance);
	}

	if (choice == "Capacitor")
	{
		std::cout << "Pass inizalization values for Capacitor \t";
		std::cout << "1.Capitance:";
		long capitance{};
		std::cin >> capitance;

		return std::make_unique<Capacitor>(capitance);
	}


	/*
	if (choice == "Transitor")
	{
		std::cout << "Pass inizalization values for Tranistor\t";
		std::cout << "";
		std::cout << "2.vector nodes number";

		//std::make_unique<Transistor>();  dodac watosc gdy transitor ma duzo param

		}*/
	//jak sie nie wpisze odpoiwednio to nie zwróci ziom
}
