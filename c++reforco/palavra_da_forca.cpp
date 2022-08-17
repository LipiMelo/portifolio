
#include <string>
#include <iostream>
#include <map>
#include "palavra_da_forca.hpp"

extern std::string palavra_secreta;
std::map<char, bool> chutou;

void palavra_da_forca() {
    for(char letra : palavra_secreta) {
        if(chutou[letra]){
            std::cout << letra << " ";
        } else{
            std::cout << "_ ";
        }
    } 
    std::cout << std::endl;
}