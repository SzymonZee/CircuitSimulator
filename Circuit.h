#pragma once
#include "Component.h"
#include <vector>
#include <memory>
#include <iostream>




/*
	struct EdgeProperties
	{
		std::unique_ptr<Component>s_Component; // Pointer to the component this edge represents
	};
	
	typedef boost::adjacency_list<boost::vecS, boost::vecS, boost::undirectedS, boost::no_property, EdgeProperties> CircuitGraph;
	typedef boost::graph_traits<CircuitGraph>::vertex_descriptor Vertex;
	typedef boost::graph_traits<CircuitGraph>::edge_descriptor Edge;

	CircuitGraph graph;
	
	std::map < std::pair<int, int>, Component>components;
	std::map<int, graph::vertex_descriptor> vertexMap;
	*/

class Circuit
{




public:
 

		void addComponent( std::unique_ptr<Component> component);

		//void  DisplayNetlist() const;

	//	void performSimualtion( std::unique_ptr<SimulationBehaviour> m_simulation);
		//std::ostream &operator<< (std::ostream& os, const Circuit& circuit);
		//std::vector < std::unique_ptr<Component>> getComponentVector()const;

	
	std::vector < std::unique_ptr<Component>> m_Components;
	
	

};

