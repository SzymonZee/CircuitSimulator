#include "CircuitBuilder.h"

CircuitBuilder::CircuitBuilder() :m_Circuit{std::make_unique<Circuit>()}
{
}

CircuitBuilder& CircuitBuilder::addComponenet(std::unique_ptr<Component>component)
{

	
	/// this->m_Circuit->m_Components_map.insert(std::move(Component))
	this->m_Circuit->m_Components.push_back(m_Circuit->addComponent( std::move(component)));

	return *this;

}

std::unique_ptr<Circuit> CircuitBuilder::buildCircuit()
{
	

	std::sort(begin(m_Circuit->m_Components), end(m_Circuit->m_Components), [](const std::unique_ptr<Component>& comp1, const std::unique_ptr<Component>& comp2)
		{
			auto compNodes = comp1->getComponentNodes();
			auto compNodes_ = comp2->getComponentNodes();

			if (compNodes[0] != compNodes_[0]) {
				return compNodes[0] < compNodes_[0]; 
			}
			else {
				return compNodes[1] < compNodes_[1]; 
			}
				
	
		});
	

	return std::move(m_Circuit);
}
