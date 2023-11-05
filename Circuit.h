#pragma once
#include "Component.h"
#include <vector>
#include <memory>
#include <iostream>
#include <map>





class Circuit
{

	//to do use map to map components from crcuit m_COmponentvector


public:
 

		void addComponent( std::unique_ptr<Component> component);
		bool  compareNodes(std::unique_ptr<Component>& component)const;

		//delete after  overloading << operator in  Component class 
		void nodesDisplay() const;

		 
		void mapComponents(const std::vector<std::unique_ptr<Component>>& components);
	
		std::vector < std::unique_ptr<Component>> m_Components{};
	void createTopology(const std::vector < std::unique_ptr<Component>>&components);
	std::vector <std::vector<int >> m_Nodes;



};

