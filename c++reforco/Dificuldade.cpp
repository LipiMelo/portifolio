
#include <iostream>
#include "Dificuldade.hpp"

extern int tentativas;


void Dificuldade() {
    char dificuldade;
    std::cout <<"Escolha sua dificuldade para jogar: " << std::endl;
    std::cout << "Facil (F), Medio (M), Dificil (D)" << std::endl;
    std::cin >> dificuldade;

    if(dificuldade == 'F'){
        tentativas = 15;
    } else if(dificuldade == 'M'){
        tentativas = 10;
    } else {
        tentativas = 5;
    }
}