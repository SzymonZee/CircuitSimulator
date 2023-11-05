#pragma once
#include <vector>
#include <iostream>
class Component
{
public:
	Component();
	virtual ~Component() = default;
	std::vector<int> getComponentPosition()const;
	void setPosition(const std::vector<int>& node_numbers);
	virtual void linarize(double operating_current) = 0;

	bool operator==(const Component&rhs)const
	{
	//overloaded operator checks if provided node number has the same  two numbers


		return this->m_ComponentNodes.at(0) == rhs.m_ComponentNodes[0] && this->m_ComponentNodes[1] == rhs.m_ComponentNodes[0];
		
	}

	std::vector<int> inputTwoIntegers();
	/// <summary>
	/// to do overload << operator 
	/// </summary> virtual   ofstream& operator<<(ofstream& out) = 0;
	/// <param name="out"></param>
	/// <returns></returns>
	

private:

	
	std::vector<int>m_ComponentNodes;

};


