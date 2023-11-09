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
 

	std::unique_ptr<Component> addComponent( std::unique_ptr<Component> component);
		bool  compareNodes(std::unique_ptr<Component>& component)const;

		//delete after  overloading << operator in  Component class 
		void nodesDisplay() const;

		 
		//void mapComponents();


		

	
		std::vector < std::unique_ptr<Component>> m_Components{};
		//std::map<std::vector<int>, std::unique_ptr<Component>,> m_Components_map;


		


};

