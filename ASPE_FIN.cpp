// ASPE_FIN.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "ComponentFactory.h"
#include "CircuitBuilder.h"
int main()
{
    ComponentFactory C1{};
    std::string choice{};
    std::cout << "Wybierz Komponent:";
    std::cin >> choice;
   auto component= std::move(C1.makeComponent(choice));
   std::string choice_{};
   std::cout << "Wybierz Komponent:";
   std::cin >> choice_;
   auto component_ = std::move(C1.makeComponent(choice_));
   std::string choice__{};
   std::cout << "Wybierz Komponent:";
   std::cin >> choice__;
   CircuitBuilder circuitbuilder;
   auto component__ = std::move(C1.makeComponent(choice__));

   auto circuit = circuitbuilder.addComponenet(std::move(component)).addComponenet(std::move(component_)).addComponenet(std::move(component__)).buildCircuit();
   std::cout << "Node list:" << std ::endl;
   for (const auto& compPtr : circuit->m_Components)
   {
       compPtr->getComponentID();
       std::cout << std::endl;
   }
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
