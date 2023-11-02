#pragma once
#include "Component.h"
class Transistor:
	public Component
{

	void linarize(double operating_current) override;

private:

	double IS;   // Saturation current
	double VT;   // Thermal voltage
	double VBE;  // Base-emitter voltage (Q-point value)
	double VBC;  // Base-collector voltage (Q-point value)
	

};

