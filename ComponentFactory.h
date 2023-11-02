#pragma once
#include <memory>
#include "Component.h"
#include<iostream>
#include "Resistor.h"
#include "Capacitor.h"
#include "Transistor.h"
class ComponentFactory
{


	std::unique_ptr<Component> makeComponent(const std::string choice);
};

