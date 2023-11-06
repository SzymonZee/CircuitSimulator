#include "Resistor.h"


int Resistor::m_ResistorCount = 0;

void Resistor::linarize(double operating_current)
{

}

Resistor::Resistor(resistance resitance) :Component(), m_Resistance{resitance}
{
	++m_ResistorCount;
	this->m_ResistorID = "Resistor R" + std::to_string(m_ResistorCount);
}

Resistor::resistance Resistor::getResistance()const
{
	return this->m_Resistance;

}

void Resistor::setResistance(resistance resistance)
{
	this->m_Resistance = resistance;
}


std::string Resistor::getResistorID()const
{
	return this->m_ResistorID;
}
void Resistor::getComponentID() const
{
	std::cout << this->getResistorID()<<std::endl;
	std::vector<int>vecNodes=this->getComponentNodes();
	std::cout << "Nodes:" << vecNodes[0] <<" " << vecNodes[1] << std::endl;
	std::cout << "Resitance:" << this->getResistance();
}
