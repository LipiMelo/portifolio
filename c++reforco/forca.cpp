#include <cstdlib>
#include <string>
#include <map>
#include <vector>
#include "letra_existe.hpp"
#include "Dificuldade.hpp"
#include "nao_acertou.hpp"
#include "mostra_cabecalho.hpp"
#include "mostra_chute_errado.hpp"
#include "palavra_da_forca.hpp"
#include "chutes.hpp"
#include "fim_de_jogo.hpp"
#include "escolha_palavra.hpp"
using namespace std;

string palavra_secreta;
map<char, bool> chutou;
vector<char> chutes_errados;
int tentativas;

int main () {
    mostra_cabecalho();
    Dificuldade();

    le_arquivo();
    sorteia_palavra();
    
    while(nao_enforcou() && nao_acertou()) {
        mostra_chute_errado();  

        palavra_da_forca();

        chutes();        
    }
    fim_de_jogo();
}
    