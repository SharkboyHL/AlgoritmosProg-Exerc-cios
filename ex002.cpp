/* b) Determinar se uma pessoa tem direito a fazer a CNH. 

REGRAS:
1. Ser maior de 18 anos;
2. Saber ler;
3. Saber escrever;
4. Ter CPF;
*/

#include <iostream>

using namespace std;

int main(){

    cout << "Bem vindo ao Sistema Digital CNH !" << endl;

    int idade;
    cout << endl << "Para começarmos digite sua idade: ";
    cin >> idade;

    string sabeLer;
    cout << "Você sabe ler ?" << endl << "R: ";
    cin >> sabeLer;

    string sabeEscrever;
    cout << "Você saber escrever ?" << endl << "R: ";
    cin >> sabeEscrever;

    string temCpf;
    cout << "Você tem CPF ?" << endl << "R: ";
    cin >> temCpf;

    if(idade >= 18 && sabeLer == "sim" && sabeEscrever == "sim" && temCpf == "sim"){
        cout << "Você pode tirar a sua CNH !" << endl;
    }else if(idade < 18 && sabeLer == "sim" && sabeEscrever == "não" && temCpf == "não"){
        cout << "Você não pode tirar a CNH por que você é menor de idade." << endl;
    }else if(idade < 18 && sabeLer == "não" && sabeEscrever == "não" && temCpf == "sim"){
        cout << "Você não pode tirar a CNH por que você é menor de idade, não sabe ler e não sabe escrever." << endl;
    }else if(idade < 18 && sabeLer == "não" && sabeEscrever == "sim" && temCpf == "não"){
        cout << "Você não pode tirar a CNH por que você é menor de idade não sabe ler e não tem CPF." << endl;
    }else if(idade < 18 && sabeLer == "sim" && sabeEscrever == "não" && temCpf == "não"){
        cout << "Você não pode tirar a CNH por que você é menor de idade, não sabe escrever e não tem CPF." << endl;
    }else if(idade < 18 && sabeLer == "não" && sabeEscrever == "sim" && temCpf == "sim"){
        cout << "Você não pode tirar a CNH por que você é menor de idade e não sabe ler." << endl;
    }else if(idade < 18 && sabeLer == "sim" && sabeEscrever == "não" && temCpf == "sim"){
        cout << "Você não pode tirar a CNH por que você é menor de idade e não sabe escrever." << endl;
    }else if(idade < 18 && sabeLer == "sim" && sabeEscrever == "sim" && temCpf == "não"){
        cout << "Você não pode tirar a CNH por que você é menor de idade e não tem CPF." << endl;
    }else if(idade >= 18 && sabeLer == "não" && sabeEscrever == "não" && temCpf == "não"){
        cout << "Você não pode tirar a CNH por que você não sabe ler, não sabe escrever e não tem CPF." << endl;
    }else if (idade >= 18 && sabeLer == "sim" && sabeEscrever == "não" && temCpf == "não"){
        cout << "Você não pode tirar a CNH por que você não sabe escrever e não tem CPF" << endl;
    }else if(idade >= 18 && sabeLer == "não" && sabeEscrever == "sim" && temCpf == "não"){
        cout << "Você não pode tirar a CNH por que você não sabe ler e não tem CPF." << endl;
    }else if(idade >= 18 && sabeLer == "não" && sabeEscrever == "não" && temCpf == "sim"){
        cout << "Você não pode tirar a CNH por que você não sabe ler e escrever." << endl;
    }else if(idade >= 18 && sabeLer == "não" && sabeEscrever == "sim" && temCpf == "sim"){
        cout << "Você não pode tirar a CNH por que você não sabe ler." << endl;
    }else if(idade >= 18 && sabeLer == "sim" && sabeEscrever == "não" && temCpf == "sim"){
        cout << "Você não pode tirar a CNH por que você não sabe escrever." << endl;
    }else if(idade >= 18 && sabeLer == "sim" && sabeEscrever == "sim" && temCpf == "não"){
        cout << "Você não pode tirar a CNH por que você não tem CPF." << endl;
    }else{
        cout << "Você não pode tirar a CNH por que você não se enquadra em nenhum dos requisitos !" << endl;
    }



    return 0;
}