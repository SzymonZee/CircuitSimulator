#include "Component.h"



Component::Component()
{
    std::vector<int> componentNodes = this->inputTwoIntegers();
       this-> setPosition(componentNodes);
}


std::vector<int> Component::getComponentPosition ()const
{
return this->m_ComponentNodes;
}


std::vector<int> Component::inputTwoIntegers() 
{
    int input;
    std::vector<int> tempVec;

    // Prompt the user to input two integers
    std::cout << "Enter two integers separated by space: ";

    for (int i = 0; i < 2; ++i) {
        // Read an integer from the user
        std::cin >> input;

        // Check if input is an integer
        if (std::cin.fail()) {
            std::cout << "Invalid input, please enter a valid integer." << std::endl;

            // Clear the error flag
            std::cin.clear();

            // Ignore the rest of the input buffer
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // Decrease the counter to repeat the iteration
            --i;
            continue;
        }

        tempVec.push_back(input);
    }

    // Clear any leftover data in the input buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return tempVec;
}

// Function to set the position of the component
void  Component::setPosition(const std::vector<int>& node_numbers) 
{
    if (node_numbers.size() == 2) {
        m_ComponentNodes = node_numbers;
    }
    else {
        std::cerr << "Error: Only two integers should be provided." << std::endl;
        throw std::invalid_argument("Two integers are required.");
    }

}

std::vector<int> Component::getComponentNodes()const
{

    return this->m_ComponentNodes;
}
