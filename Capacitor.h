#pragma once
#include "Component.h"
class Capacitor :
    public Component
{
private:
    typedef long Capitance;
    Capitance m_Capitance;
    static int m_CapacitorCount;
    std::string m_CapacitorID;
public:

    Capacitor(long capitance);
    void linarize(double operating_current) override;
    std::string getCapacitorID()const;
    void getComponentID() const override;
    Capitance getCapitance()const;
};

