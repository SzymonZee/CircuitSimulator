#include "InputSignal.h"
InputSignal::InputSignal(double frequency, double voltage_amplitude, double dc_component) :m_Frequency{ frequency }, m_VoltageAmplitude{ voltage_amplitude }, m_DC_component{ dc_component }
{

}

/*
double InputSignal::getFraquency() const
{
	return this->m_Frequency;
}

double InputSignal::getVoltageAmplitude() const
{
	return this->m_VoltageAmplitude;
}

double InputSignal::getDCcomponent()const
{
	return this->m_DC_component;
}

double InputSignal::setFraquency(double frequency)
{
	this->m_Frequency = frequency;
}

double InputSignal::setVoltageAmplitude(double voltage_amplitude)
{
	this->m_VoltageAmplitude = voltage_amplitude;
}

double InputSignal::getDCcomponent(double dc_component)
{
	return this->m_DC_component = dc_component;
}
*/