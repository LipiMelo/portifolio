
#include <iostream>
#include <vector>
#include <map>
#include "Chutes.hpp"
#include "letra_existe.hpp"

extern std::map<char, bool> chutou;
extern std::vector<char> chutes_errados;

void chutes(){
   
    std::cout << "Seu chute: ";
    char chute;
    std::cin >> chute;

    std::cout << std::endl;

    chutou[chute] = true;

    if(letra_existe(chute)) {
        std::cout << "Voce acertou! O chute esta na palavra." << std::endl << std::endl;
    } else {
        std::cout << "Voce errou! O chute nao esta na palavra." << std::endl << std::endl;
        chutes_errados.push_back(chute);
    }
    std::cout << std::endl;
}