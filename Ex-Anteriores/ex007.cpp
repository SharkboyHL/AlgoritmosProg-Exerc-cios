/*
3. Calcular o novo salário de um funcionário conforme a seguinte tabela de
reajuste. 
*/

#include <iostream>

using namespace std;

int main(){

    cout << "Bem vindo ao Sistema de Reajuste Salarial !" << endl;

    cout << endl << "Para comecarços informe o seu salário." << endl;

    float salario;
    cout << "Meu Salário: R$";
    cin >> salario;

    float novoSalario;

    if(salario < 500){
        novoSalario = salario + (salario * 0.15);
        cout << endl << "Você teve um aumento salarial de 15%. Seu novo salário é de R$" << novoSalario << endl;  
    }else if(salario >= 500 && salario <= 1000){
        novoSalario = salario + (salario * 0.10);
        cout << endl << "Você teve um aumento salarial de 10%. Seu novo salário é de R$" << novoSalario << endl;
    }else{
        novoSalario = salario + (salario * 0.05);
        cout << endl << "Você teve um aumento salarial de 5%. Seu novo salário é de R$" << novoSalario << endl;
    }

    return 0;
}