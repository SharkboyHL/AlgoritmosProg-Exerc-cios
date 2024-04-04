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
        cout << "Você tem acesso ao benefício !";
    }else{
        cout << "Você não tem acesso ao benefício !";
    }

    return 0;
}
