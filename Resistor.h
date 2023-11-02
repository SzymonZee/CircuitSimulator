#pragma once
#include <vector>
#include"Component.h"
#include "Eigen/src/Core/ArrayBase.h"

class Resistor:
	public Component 

{
private:
	typedef long reistance;
	reistance m_Reistance;

public:

	Resistor(reistance resitance, std::vector<int> component_nodes);
	reistance getResitance();
	void setResitance(reistance resitance);
	void linarize(double operating_current) override;
	



};

