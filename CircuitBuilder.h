#pragma once
#include "Circuit.h"
class CircuitBuilder
{



	std::unique_ptr<Circuit>m_Circuit;


	CircuitBuilder& addComponenet(std::unique_ptr<Component>component);

	std::unique_ptr<Circuit> buildCircuit();

};

