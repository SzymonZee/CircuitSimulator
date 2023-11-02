#pragma once
#include "Circuit.h"
class SimulationBehaviour
{
   
public:
    virtual void parseNetlist(std::unique_ptr<Circuit>cirucit) ;

    virtual ~SimulationBehaviour() = default;
    virtual void setupEquations() = 0;
    void reportResults() const;
    virtual void simulation() = 0;

private:

    std::unique_ptr<Circuit>cirucit;
    std::vector <double>nodeVoltage;
    std::vector<double>branchCurrent;
};

