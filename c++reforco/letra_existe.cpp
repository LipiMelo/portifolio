
#include <string>
#include <map>
#include "letra_existe.hpp"

extern std::string palavra_secreta;
extern std::map<char, bool> chutou;

bool letra_existe(char chute){
    for(char letra : palavra_secreta){
        if(chute == letra){
            return true;
        }
    }
    return false;
}