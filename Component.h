#pragma once
#include <vector>
#include <iostream>
#include <string>
class Component
{
public:
	Component();
	virtual ~Component() = default;
	std::vector<int> getComponentPosition()const;
	void setPosition(const std::vector<int>& node_numbers);
	virtual void linarize(double operating_current) = 0;

	bool operator==(const Component&rhs)const
	{ //operator used to check  Component nodes beetwen two objects
		return this->m_ComponentNodes.at(0) == rhs.m_ComponentNodes[0] && this->m_ComponentNodes[1] == rhs.m_ComponentNodes[1];
	}

	std::vector<int> inputTwoIntegers();
	virtual void getComponentID() const = 0;
	std::vector<int> getComponentNodes()const ;
private:

	
	std::vector<int>m_ComponentNodes;

};


