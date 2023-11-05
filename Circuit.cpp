#include "Circuit.h"




void  Circuit::addComponent( std::unique_ptr<Component> component)
{ 
    
    
    m_Components.push_back(std::move(component));
    
    
    
    
    
    
    /*
    // Check if vertices for node1 and node2 already exist or create them
    Vertex v1 = add_vertex_if_not_exists(node1);
    Vertex v2 = add_vertex_if_not_exists(node2);

    // Add the edge (component) to the graph and directly move the unique_ptr to the edge properties
    Edge e;
    bool inserted;
    boost::tie(e, inserted) = boost::add_edge(v1, v2, graph);

    if (!inserted) {
        throw std::runtime_error("Edge already exists!");
    }

    // Use std::move to transfer ownership of the component to the edge properties
    graph[e].s_Component = std::move(component);

    */
}
/*
void Circuit::performSimualtion(std::unique_ptr<SimulationBehaviour> m_simulation)
{
    m_simulation->simulation();
}

void Circuit::DisplayNetlist() const
{
    auto map_iterator = components.begin();
    for (map_iterator; map_iterator!= components.end();++map_iterator)
    {
       
    }
}

std::ostream& Circuit::operator<<(std::ostream& os, const Circuit& circuit)
{
    os << circuit.DisplayNetlist();


}
*/