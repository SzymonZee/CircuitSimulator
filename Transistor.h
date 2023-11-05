#pragma once
#include "Component.h"
class Transistor :
    public Component
{

    void linarize(double operating_current) override;
    Transistor(std::vector<int> component_nodes, double beta, double Is, double m, double cbe, double cbc, double Vt = 0.026);
private:


    const double beta; // Forward common-emitter current gain (β)
    const double Is;   // Saturation current for both junctions (Is)
    const double m;    // Emission coefficient (ideality factor)
    const double CBE;  // Base-Emitter junction capacitance (CBE)
    const double CBC;  // Base-Collector junction capacitance (CBC)
    const double Vt;   // Thermal voltage
	

};

