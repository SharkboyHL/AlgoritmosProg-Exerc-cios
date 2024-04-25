/*
4. Verificar se um empregado está qualificado para a aposentadoria. Para isto, é necessário que o empregado tenha no mínimo 65 anos e tenha trabalhado por no
mínimo 25 anos. 
*/

#include <iostream>

using namespace std;

int main(){

    cout << "Bem vindo a Previdência Social Digital !" << endl;

    cout << endl << "Para começarmos quantos anos você tem ?" << endl;

    int idade;
    cout << "Idade: ";
    cin >> idade;

    int tempoTrab;
    cout << "Quantos anos de trabalho você tem em sua carteira ? " << endl;
    cin >> tempoTrab;

    if(idade >= 65 && tempoTrab >= 25){
        cout << endl << "Você tem direito a aposentadoria!" << endl;
    }else{
        cout << endl << "Infelizmente você não tem direito a aposentadoria." << endl;
    }

    return 0;
}