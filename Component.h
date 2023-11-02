#pragma once
#include <vector>
class Component
{
public:
	Component(std::vector<int> component_nodes);

	std::vector<int> getComponentPostion();
	std::vector<int>setPostion(std::vector<int> node_numbers);
	virtual void linarize(double operating_current) = 0;
private:
	std::vector<int>m_ComponentNodes;

};


