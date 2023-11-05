#include "Transistor.h"


void Transistor::linarize(double operating_current)
{

}

Transistor::Transistor(std::vector<int> component_nodes, double beta, double Is, double m, double cbe, double cbc, double Vt) :Component(component_nodes), beta{ beta }, Is{ Is }, m{ m }, CBE(cbe), CBC(cbc), Vt{Vt}
{

}
