#pragma once
#include <memory>
#include "Component.h"
#include<iostream>
#include "Resistor.h"
class ComponentFactory
{


	std::unique_ptr<Component> makeComponent(const std::string choice);
};

