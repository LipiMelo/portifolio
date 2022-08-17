
#include <iostream>
#include <vector>
#include "mostra_chute_errado.hpp"

extern std::vector<char> chutes_errados;

void mostra_chute_errado(){
    std::cout << " Chutes errados: " ;
    for(char letra: chutes_errados){
        std::cout << letra << " ";
    }
    std::cout << std::endl;
}