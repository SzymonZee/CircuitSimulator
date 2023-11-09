// ASPE_FIN.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "ComponentFactory.h"
#include "CircuitBuilder.h"
//#include "armadillo_bits/access.hpp"
#include<functional>
void sum(auto glambda, auto x)
{
    glambda(x);
};
struct VectorCompare 
{
    bool operator()(const std::vector<int>& a, const std::vector<int>& b) const 
    {
        if (a.size() == 2 && b.size() == 2) 
        {
            return a[0] < b[0] || (!(b[0] < a[0]) && a[1] < b[1]);
        }
        return false;
    }
};

// Declaration of the map with the custom comparator
std::map<std::vector<int>, std::unique_ptr<Component>, VectorCompare> m_componentsMap;

// Function that inserts components into the map
void insertComponent(std::unique_ptr<Component> compPtr) 
{
    m_componentsMap.insert(std::make_pair(compPtr->getComponentNodes(), std::move(compPtr)));
}
std::map<std::vector<int>, std::unique_ptr<Component>, VectorCompare>m_componntsMap{};

auto lambda = [](auto x)
{

    auto m = x;
    for (int i = x.end(); i > x.begin(); --i)
    {
        m[i] = x[i];
    }
    return m;
};

void displayNodes(std::map<std::vector<int>, std::unique_ptr<Component>, VectorCompare>components_map)
{
    for (const auto&[nodes,components] : components_map)
    {
        
        components->getComponentID();
        
    }
}

int main()
{
    ComponentFactory C1{};
    std::string choice{};
    std::cout << "Wybierz Komponent:";
    std::cin >> choice;
    auto component = std::move(C1.makeComponent(choice));
    std::string choice_{};
    //insertComponent(std::move(component));///// zrefaktorować kod 
    std::cout << "Wybierz Komponent:";
    std::cin >> choice_;
    auto component_ = std::move(C1.makeComponent(choice_));
    std::string choice__{};
    std::cout << "Wybierz Komponent:";
    std::cin >> choice__;
    CircuitBuilder circuitbuilder;
    auto component__ = std::move(C1.makeComponent(choice__));

    auto circuit = circuitbuilder.addComponenet(std::move(component)).addComponenet(std::move(component_)).addComponenet(std::move(component__)).buildCircuit();
    std::cout << "Node list:" << std::endl;
    for (const auto& compPtr : circuit->m_Components)
    {
        compPtr->getComponentID();
        std::cout << std::endl;
    }

  

    
};



      



// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
