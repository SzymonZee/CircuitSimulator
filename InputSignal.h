#pragma once
class InputSignal
{

public:
	InputSignal(double frequency,double voltage_amplitude, double dc_component );

	/*
	double getFraquency() const;
	double getVoltageAmplitude() const;
	double getDCcomponent()const;

	double setFraquency(double frequency);
	double setVoltageAmplitude(double voltage_amplitude);
	double getDCcomponent(double dc_component);

	*/
private:
	double m_Frequency;
	double m_VoltageAmplitude;
	double m_DC_component;
};

