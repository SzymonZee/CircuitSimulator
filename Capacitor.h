#pragma once
#include "Component.h"
class Capacitor :
    public Component
{
private:
    typedef long Capitance;
    Capitance m_Capitance;

public:

    Capacitor(long capitance);
    void linarize(double operating_current) override;
    

};

