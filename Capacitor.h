#pragma once
#include "Component.h"
class Capacitor :
    public Component
{
private:
    typedef long Capitance;
    Capitance m_Capitance;

public:

    Capacitor(long capitance, std::vector<int>component_nodes);
    void linarize(double operating_current) override;
    

};

