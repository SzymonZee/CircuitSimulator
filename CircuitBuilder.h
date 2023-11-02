#pragma once
#include "Circuit.h"
class CircuitBuilder
{



	std::unique_ptr<Circuit>m_Circuit;


	CircuitBuilder& addComponenet(int node1, int node2, std::unique_ptr<Component>component);

	std::unique_ptr<Circuit> buildCircuit();

};

