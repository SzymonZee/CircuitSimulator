#include "CircuitBuilder.h"

CircuitBuilder::CircuitBuilder() :m_Circuit{std::make_unique<Circuit>()}
{
}

CircuitBuilder& CircuitBuilder::addComponenet(std::unique_ptr<Component>component)
{
	this->m_Circuit->m_Components.push_back(m_Circuit->addComponent( std::move(component)));

	return *this;

}

std::unique_ptr<Circuit> CircuitBuilder::buildCircuit()
{

	return std::move(m_Circuit);
}
