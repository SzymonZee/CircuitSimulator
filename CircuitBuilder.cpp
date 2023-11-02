#include "CircuitBuilder.h"



CircuitBuilder& CircuitBuilder::addComponenet(std::unique_ptr<Component>component)
{
	m_Circuit->addComponent((std::move(component)));

}

std::unique_ptr<Circuit> CircuitBuilder::buildCircuit()
{

	return std::move(m_Circuit);
}
