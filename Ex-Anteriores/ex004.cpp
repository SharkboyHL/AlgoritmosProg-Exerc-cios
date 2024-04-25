/*
d) Determinar se um dado aluno está aprovado em uma dada disciplina. Se o aluno
tiver a média maior ou igual a 7.0 e menos que 10 faltas, ele estará aprovado. Se o
aluno tiver média entre 5.0 e 6.9 e menos que 10 faltas, ele estará em recuperação.
Se o aluno tiver média menor que 5.0 ou mais que 10 faltas, ele estará reprovado.
*/

#include <iostream>

using namespace std;

int main(){

    cout << "Bem vindo ao sistema de notas da Univali !" << endl;
    
    float nota1, nota2, nota3, media;
    cout << endl << "Para começarmos insira as suas notas..." << endl;
    
    cout << "Nota 1: ";
    cin  >> nota1;

    cout << "Nota 2: ";
    cin >> nota2;

    cout << "Nota 3: ";
    cin >> nota3;

    media = (nota1 + nota2 + nota3) / 3;

    int faltas;
    cout << "Agora insira o número de faltas." << endl;
    cout << "Faltas: ";
    cin >> faltas;

    if(media >= 7 && media <= 10){
        cout << "Você foi aprovado com média " << media << " e " << faltas << " faltas!" << endl;
    }else if(media >= 5 && media <= 7 && faltas < 10){
        cout << endl << "Você está em recuperação." << endl;
    }else{
        cout << endl << "Reprovado !" << endl;
    }
}