#include "Circuit.h"




std::unique_ptr<Component>  Circuit::addComponent(std::unique_ptr<Component> component)
{//function which checks if  componet which we want to  pass to a vector  is valid meaining  it does not have same node cordinates
    while (compareNodes(component) != true)
    {
        this->nodesDisplay();
        component->setPosition(component->inputTwoIntegers());
    }

    return std::move(component);


}




bool Circuit::compareNodes(std::unique_ptr<Component>& component)const
{
    int count{};
    for (const auto& compPtr : this->m_Components)
    {
        if (component->getComponentPosition() == compPtr->getComponentPosition())
        {
            ++count;
        }
    }
    
    if (count != 0)
    {
        return false;
    }
    else return true;
}


// Displaying  nodes of componets aggrageted in cicrcuit
void Circuit::nodesDisplay() const
{
 
    for (const auto& compPtr : this->m_Components)
    {
        auto vec = compPtr->getComponentPosition();
        std::cout << vec[0];
        std::cout << vec[1];
    }
}



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


/*
void Circuit::createTopology(const std::vector<std::unique_ptr<Component>>& components) {
    // Assuming that m_Nodes is initially empty or correctly sized to match the number of components.
    m_Nodes.resize(components.size());  // Ensure we have enough vectors to match components

    for (size_t i = 0; i < components.size(); ++i) {
        // Check if the component at the current index has a valid position
        if (components[i]) {
            const auto& componentPosition = components[i]->getComponentPosition();
            // The position should correspond to an index in the m_Nodes vector
            for (int pos : componentPosition) {
                // Ensure the node index is within the bounds of m_Nodes
                if (pos < m_Nodes.size()) {
                    m_Nodes[pos].push_back(i); // Push the component index into the node's component list
                }
                else {
                    std::cerr << "Node position " << pos << " is out of bounds." << std::endl;
                }
            }
        }
        else {
            std::cerr << "Component " << i << " is a nullptr." << std::endl;
        }
    }
}

*/
void Circuit::mapComponents(const std::vector<std::unique_ptr<Component>>& components)
{
    /*
    auto iterator = components.begin();
    for (auto& )
    */
}
