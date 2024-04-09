/*
2. Determinar se o resultado de uma partida de futebol é um empate, vitória do
time A ou vitória do time B.
*/

#include <iostream>

using namespace std;

int main(){

    cout << "Quem será o Time A ?" << endl;

    string timeA;
    cout << "Time A: ";
    cin >> timeA;

    cout << endl << "E o Time B ?" << endl;

    string timeB;
    cout << "Time B: ";
    cin >> timeB;

    cout << endl << "Beeem amigooosss da Rede Globooo! Hoje se enfretando " << timeA << " e " << timeB << endl;

    cout << endl << "Final da Partida ! Qual foi o placar do jogo ?" << endl;
    
    int placarA;
    cout << endl << "Quantos gols fez o " << timeA << " ? "; 
    cin >> placarA;

    int placarB;
    cout << endl << "Quantos gols fez o " << timeB << " ? ";
    cin >> placarB;

    if(placarA == placarB){
        cout << "Final de jogo !! " << placarA << " a "  << placarB << endl;
        cout << "Empate dos dois time que jogo pegado !" << endl;
    }else if(placarA > placarB){
        cout << "Final de jogo !! " << placarA << " a "  << placarB << endl;
        cout << "Grande vitória do time " << timeA << " sobre o " << timeB << endl;
    }else if(placarB > placarA){
        cout << endl << "Final de jogo !! " << placarA << " a "  << placarB << endl;
        cout << "Grande vitória do " << timeB << " sobre o " << timeA << endl;
    }

    return 0;
}