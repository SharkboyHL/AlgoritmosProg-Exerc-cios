/*
1. Determinar o IMC do usuário.
*/

#include <iostream>

using namespace std;

int main(){

    cout << "Bem vindo a Calculadora de IMC." << endl;

    cout << endl << "Para começarmos digite a sua altura." << endl;

    float altura;
    cout << "Altura: ";
    cin >> altura;

    cout << "Agora digite o seu peso." << endl;

    float peso;
    cout << "Peso: ";
    cin >> peso;
    
    float imc = peso / (altura * altura);

    //cout << imc << " Kg/m²" << endl;

    if(imc < 18.5){
        cout << "Seu imc é " << imc << " Kg/m² e sua classificação é Abaixo do Peso." << endl;
    }else if(imc >= 18.5 && imc <= 24.9){
        cout << "Seu imc é " << imc << " Kg/m² e sua classificação é Peso Normal." << endl;
    }else if(imc >= 25 && imc <= 29.9){
        cout << "Seu imc é " << imc << " Kg/m² e sua classificação é Sobrepeso." << endl;
    }else if(imc >= 30 && imc <= 34.9){
        cout << "Seu imc é " << imc << " Kg/m² e sua classificação é Obesidade Grau I." << endl;
    }else if(imc >= 35 && imc <= 39.9){
        cout << "Seu imc é " << imc << " Kg/m² e sua classificação é Obesidade Grau II." << endl;
    }else if(imc >= 40 && imc <= 49.90){
        cout << "Seu imc é " << imc << " Kg/m² e sua classificação é Obesidade Grau III." << endl;
    }else if(imc >= 50 && imc <= 59.9){
        cout << "Seu imc é " << imc << " Kg/m² e sua clasificação é Obesidade Grau IV." << endl;
    }else{
        cout << "Seu imc é " << imc << " Kg/m² e sua classificação é Obesidade Grau V." << endl;
    }

    return 0;
}