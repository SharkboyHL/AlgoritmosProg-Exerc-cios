/*
a) Crie um algoritmo para imprimir números de 1 a n, onde n é um inteiro
definido pelo usuário.
*/


#include <iostream>

using namespace std;

int main(){

    int count = 1;

    int limite;
    cout << "Insira um número limite para o contador..." << endl;
    cout << "Limite: ";
    cin >> limite;

    while(count <= limite){

        cout << count << endl;
        count++;
    }

    return 0;
}