/*
6. Calcular o desconto de acordo com os itens comprados em uma padaria. Se o
cliente comprar 10 pães franceses e mais um queijo, ele ganha 10% de desconto. Se
o cliente comprar uma bisnaga ou um pão de forma, ele tem um desconto de 15%.
Agora se o cliente comprar leite e pão doce ou suspiro, ele ganha 5% de desconto.
Os preços dos produtos devem ser definidos por você. O desconto não é
acumulativo e será aplicado o maior percentual, de acordo com as regras, uma
única vez no final da compra. 
*/

#include <iostream>

using namespace std;

int main(){

    cout << endl << "Bem vindo a Panificadora da Ju !" << endl;

    cout << endl << "Insira a quantidade de produtos a qual deseja comprar..." << endl;

    cout << endl << "TABELA DE PREÇOS:" << endl;
    cout << "-PÃO: R$4,17" << endl;
    cout << "-QUEIJO: R$21,99" << endl;
    cout << "-BISNAGA: R$8,99" << endl;
    cout << "-PÃO DE FORMA: R$8,39" << endl;
    cout << "-LEITE: R$4,19" << endl;
    cout << "-PÃO DOCE: R$5,79" << endl;
    cout << "-SUSPIRO: R$5,49" << endl;

    int pao;
    cout << endl << "Pães: ";
    cin >> pao;

    int queijo;
    cout << endl << "Queijo: ";
    cin >> queijo;

    int bisnaga;
    cout << endl << "Bisnaga: ";
    cin >> bisnaga;

    int paoForma;
    cout << endl << "Pão de Forma: ";
    cin >> paoForma;

    int leite;
    cout << endl << "Leite: ";
    cin >> leite;

    int paoDoce;
    cout << endl << "Pão Doce: ";
    cin >> paoDoce;

    int suspiro;
    cout << endl << "Suspiro: ";
    cin >> suspiro;

    return 0;
}