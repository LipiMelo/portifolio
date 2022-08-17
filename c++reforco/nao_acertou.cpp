#include <string>
#include <map>
#include <vector>
#include "nao_acertou.hpp"

extern std::string palavra_secreta;
extern std::vector<char> chutes_errados;
extern std::map<char, bool> chutou;
extern int tentativas;

bool nao_acertou(){
    for(char letra : palavra_secreta){
        if(!chutou[letra]){
            return true;
        }
    }
    return false;
}

bool nao_enforcou(){
    return chutes_errados.size() < tentativas;
}