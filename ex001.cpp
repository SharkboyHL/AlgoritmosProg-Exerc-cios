/* Determinar o tipo de voto de um indivíduo de acordo com o sistema de votação
brasileiro. Ele é realizado de acordo com a idade das pessoas. As regras de votação
são:  a) Menores de 16 anos não podem votar; b) De 16 anos até 17 anos, o voto é
facultativo; c) De 18 anos até 69 anos, o voto é obrigatório; d) Maiores que 70 anos, o
voto é facultativo. */ 

#include <iostream>

using namespace std;

int main(){

    cout << "Bem vindo ! Este é o sistema eleitoral." << endl;

    int idade;
    cout << "Insira a sua idade para classificarmos você: ";
    cin >> idade;

    if(idade < 16){
        cout << "Você não tem direito ao voto !";
    }else if(idade >= 16 && idade <= 17){
        cout << "O seu voto é facultativo." << endl;
    }else if(idade >= 18 && idade <= 69){
        cout << "O seu voto é obrigatório." << endl;
    }else{
        cout << "O seu voto é facultativo." << endl;
    }

    return 0;
}