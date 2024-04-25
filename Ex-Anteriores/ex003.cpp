/*
c) Determinar se uma pessoa tem o benefício de desconto em uma farmácia. Para
isto, a pessoa deve ser idosa ou ter uma doença que dá acesso a esse benefício.
*/

#include <iostream>

using namespace std;

int main()
{
    int idade;
    cout << "Qual a sua idade ?" << endl;
    cin >> idade;
    
    string temDoenca;
    cout << "Você tem alguma doença ?" << endl;
    cin >> temDoenca;
    
    if(idade >= 60 || temDoenca == "sim"){
        cout << "Você tem acesso ao benefício !" << endl;
    }else{
        cout << "Você não tem acesso ao benefício !" << endl;
    }

    return 0;
}
