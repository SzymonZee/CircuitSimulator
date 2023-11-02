#pragma once
#include "Component.h"
#include <vector>
#include <memory>
#include <iostream>
#include "boost/graph/adjacency_list.hpp"
#include "SimulationBehaviour.h"

class Circuit
{
	struct EdgeProperties
	{
		std::unique_ptr<Component>s_Component; // Pointer to the component this edge represents
	};
	
	typedef boost::adjacency_list<boost::vecS, boost::vecS, boost::undirectedS, boost::no_property, EdgeProperties> CircuitGraph;
	typedef boost::graph_traits<CircuitGraph>::vertex_descriptor Vertex;
	typedef boost::graph_traits<CircuitGraph>::edge_descriptor Edge;

	CircuitGraph graph;
	
	std::map < std::pair<int, int>, std::unique_ptr<Component>>components;
	std::map<int, graph::vertex_descriptor> vertexMap;
public:
 

		void addComponent(int node1, int node2, std::unique_ptr<Component> component);

		void  DisplayNetlist();

		void performSimualtion( std::unique_ptr<SimulationBehaviour> m_simulation);
		

private:
	
	std::vector < std::unique_ptr<Component>> m_Components;
	

};

