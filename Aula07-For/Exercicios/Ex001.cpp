/*
Crie funções em C++ usando o laço for para os seguintes problemas, onde os
valores são definidos pelo usuário:
1. Imprima os números divisíveis por 5 de 1 a 137.
*/

#include <iostream>

using namespace std;

int main(){

    for(int i = 1; i <= 137; i++){
        if(i % 5 == 0){
            cout << i << endl;
        }
    }

    return 0;
}