#pragma once
#include "Circuit.h"
#include <algorithm>
class CircuitBuilder
{

public:

	std::unique_ptr<Circuit>m_Circuit;

	CircuitBuilder();
	CircuitBuilder& addComponenet( std::unique_ptr<Component>component);

	std::unique_ptr<Circuit> buildCircuit();
	

};

