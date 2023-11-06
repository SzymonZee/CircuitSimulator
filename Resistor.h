#pragma once
#include <vector>
#include"Component.h"

class Resistor :
	public Component

{
private:
	typedef long resistance;
	resistance m_Resistance;
	static int m_ResistorCount;
	std::string m_ResistorID;
public:

	
	Resistor(resistance resistance);
	resistance getResistance() const;
	void setResistance(resistance resistance);
	std::string getResistorID()const;
	void linarize(double operating_current) override;
	void getComponentID() const override;

	
	



};

