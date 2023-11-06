#pragma once
#include "Circuit.h"
class MathematicalSolvers
{

public:
	typedef float OperatingPoint;
	

	MathematicalSolvers();
	
  OperatingPoint getDCpoint();

  OperatingPoint  NewtonRaphsonMethod(int max_iter, float inital_guess);

private:
	std::unique_ptr<Circuit> m_Circuit;
};

