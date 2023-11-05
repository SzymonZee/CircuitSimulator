#include "ComponentFactory.h"


std::unique_ptr<Component> ComponentFactory::makeComponent(const std::string choice)
{

	if (choice == "Resitor")
	{
		std::cout << "Pass inizalization values for Resitor \t" << std::endl;
		std::cout << "1.resitance:" << std::endl;
		long Resitance{};
		std::cin >> Resitance;
		std::cout << "2.vector nodes numbers:" << std::endl;
		std::cout << "2.1 First node number:" << std::endl;
		int FirstNode{};
		std::cin >> FirstNode;
		std::cout << "2.2 Second node number:"<<std::endl;
		int SecondNode{};
		std::cin >> SecondNode;
		std::vector<int> NodeNumbers{ FirstNode, SecondNode };
		return std::make_unique<Resistor>(Resitance, NodeNumbers);
	}

	if (choice == "Capacitor")
	{
		std::cout << "Pass inizalization values for Capacitor \t";
		std::cout << "1.Capitance:";
		long Capitance{};
		std::cin >> Capitance;
		std::cout << "2.vector nodes numbers:";
		std::cout << "2.1 First node number:";
		int FirstNode{};
		std::cin >> FirstNode;
		std::cout << "2.2 Second node number:";
		int SecondNode{};
		std::cin >> SecondNode;
		std::vector<int> NodeNumbers{ FirstNode, SecondNode };

		return std::make_unique<Capacitor>(Capitance, NodeNumbers);
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
