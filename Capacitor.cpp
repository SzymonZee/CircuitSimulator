#include "Capacitor.h"

int Capacitor::m_CapacitorCount = 0;

Capacitor::Capacitor(long capitance) :Component( ), m_Capitance{ capitance }
{
	++m_CapacitorCount;
	this->m_CapacitorID = "Capacitor C" + std::to_string(m_CapacitorCount);
}

void Capacitor::linarize(double operating_current)
{

}

std::string Capacitor::getCapacitorID()const
{
	return this->m_CapacitorID;
}

Capacitor::Capitance Capacitor::getCapitance()const
{
	return this->m_Capitance;
}

void Capacitor::getComponentID() const
{
	std::cout << this->getCapacitorID() << std::endl;
	std::vector<int>vecNodes = this->getComponentNodes();
	std::cout << "Nodes:" << vecNodes[0] << " " << vecNodes[1] << std::endl;
	std::cout <<"Capitance" <<this->getCapitance();
}