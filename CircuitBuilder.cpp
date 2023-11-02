#include "CircuitBuilder.h"



CircuitBuilder& CircuitBuilder::addComponenet(int node1, int node2, std::unique_ptr<Component>component)
{
	m_Circuit->addComponent((node1, node2, std::move(component)));

}

std::unique_ptr<Circuit> CircuitBuilder::buildCircuit()
{

	return std::move(m_Circuit);
}
