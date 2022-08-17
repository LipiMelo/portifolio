#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	cout << "* ************************************* " << endl;
	cout << "* Bem - vindo ao jogo da adivinhacao! * " << endl;
	cout << "* ************************************* " << endl; 

    
    //escolhendo e definindo a dificuldade
    cout << "Escolha o seu nivel de dificuldade: " <<endl;
    cout <<"Facil (F), Medio (M), Dificil(D)" << endl;

    char dificuldade;
    cin >> dificuldade;
    int numero_de_tentativas;

    if(dificuldade == 'F'){
        numero_de_tentativas = 15;
    }else if(dificuldade == 'M') {
        numero_de_tentativas = 10;
    }else{
        numero_de_tentativas = 5;
    }


    //escolhendo numer secreto
    srand(time(NULL));
    const int NUMERO_SECRETO = rand() %100;


    //preparativos para o jogo
    int chute;
    int tentativas;
    bool nao_acertou = true;
    double pontos = 1000.0;

    for(tentativas = 1; tentativas <= numero_de_tentativas; tentativas++){

        cout << " tentativa " << tentativas << endl;
        //recebe o chute do jogador
        cout <<"qual seu chute?"<< endl;
        cin >> chute;

        double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0;
        pontos = pontos - pontos_perdidos;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        //verifica se acertou ou nao o numero escolhido
        if(acertou) {
            cout << "parabens, voce acertou o numero secreto" << endl << endl;
            nao_acertou=false;
            break;
        } else if(maior){
            
            cout<<"Errou, o chute foi maior do que o numero secreto. Tente novamente." << endl;
        } else {
            cout <<"Errou, o chute e menor do que o numero secreto, tente novamente." << endl << endl;
        }
        
        // contador de tentativas
        if(tentativas==numero_de_tentativas){

            cout << "errou todas as tentativas? Nao se preocupe, sempre tem uma segunda chance" << endl;

        }
    }
    cout << "Fim de jogo!" << endl << endl;
    
    if(nao_acertou){
        cout << "Voce perdeu, tente novamente.";
    } else {
    cout << "Voce acertou em " << tentativas << " tentativas" <<endl;
    cout.precision(2);
    cout << fixed;
    cout << "Sua pontuacao foi de " << pontos <<" pontos." << endl;
    }


}