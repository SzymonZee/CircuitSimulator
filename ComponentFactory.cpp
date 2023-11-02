#include "ComponentFactory.h"


std::unique_ptr<Component> ComponentFactory::makeComponent(const std::string choice)
{

	if (choice == "Resitor")
	{
		std::cout << "Pass inizalization values for Resitor \t";
		std::cout << "1.resitance";
		std::cout << "2.vector nodes number";
		std::make_unique<Resistor>();
	}

	if (choice == "Capacitor")
	{
		std::cout << "Pass inizalization values for Capacitor \t";
		std::cout << "1.Capitance";
		std::cout << "2.vector nodes number";
		std::make_unique<Capacitor>();
	}

	if (choice == "Transitor")
	{
		std::cout << "Pass inizalization values for Tranistor\t";
		std::cout << "";
		std::cout << "2.vector nodes number";

		std::make_unique<Transitor>();


	}
}