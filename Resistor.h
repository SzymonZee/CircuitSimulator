#pragma once
#include <vector>
#include"Component.h"

class Resistor :
	public Component

{
private:
	typedef long reistance;
	reistance m_Reistance;

public:

	Resistor(reistance resitance);
	reistance getResitance();
	void setResitance(reistance resitance);
	void linarize(double operating_current) override;
	



};

