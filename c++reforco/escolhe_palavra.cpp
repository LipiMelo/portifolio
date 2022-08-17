
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "escolha_palavra.hpp"

extern std::string palavra_secreta;

std::vector<std::string> le_arquivo(){

    std::ifstream arquivo;
    arquivo.open("palavras.txt");

    if(arquivo.is_open()){

        int quantidade_palavras;
        arquivo >> quantidade_palavras;

        extern std::vector<std::string> palavra_do_arquivo;

        for(int i=0;i < quantidade_palavras;i++){

            std::string palavra_lida;
            arquivo >> palavra_lida;
            palavra_do_arquivo.push_back(palavra_lida);
        }

        return palavra_do_arquivo;

    } else {

        std::cout <<"O arquivo nao foi encontrado, tente novamente depois.";
        exit(0);

    }
}

void sorteia_palavra(){
    std::vector<std::string> palavras = le_arquivo();

    srand(time(NULL));
    int indice_sorteado = rand() % palavras.size();

    palavra_secreta = palavras[indice_sorteado];
}