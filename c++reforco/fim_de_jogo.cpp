#include <iostream>
#include "fim_de_jogo.hpp"
#include "nao_acertou.hpp"

extern std::string palavra_secreta;

void fim_de_jogo(){
    std::cout << "Fim de Jogo!" << std::endl;
    std::cout << "A palavra secreta era " << palavra_secreta << std::endl;

    if(nao_acertou()) {
        std::cout <<"Voce perdeu.Tente novamente!" << std::endl;
    } else {
        std::cout << "Parabens! Voce ganhou, vamos ver se acerta a proxima :D " << std::endl;
    }
}