#include "Resistor.h"




void Resistor::linarize(double operating_current)
{

}

Resistor::Resistor(reistance resitance) :Component(), m_Reistance{resitance}
{

}

Resistor::reistance Resistor::getResitance()
{
	return this->m_Reistance;

}

void Resistor::setResitance(reistance resitance)
{
	this->m_Reistance = resitance;
}