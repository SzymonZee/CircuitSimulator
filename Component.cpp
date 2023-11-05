#include "Component.h"



Component::Component(std::vector<int> component_nodes) :m_ComponentNodes{ component_nodes }
{

}


std::vector<int> Component::getComponentPostion()
{
return this->m_ComponentNodes;
}

std::vector<int> Component::setPostion(std::vector<int> node_numbers)
{   
	m_ComponentNodes = node_numbers;
	return this->m_ComponentNodes;

}

