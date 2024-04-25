/*
5. Verificar se um dado usuário pode acessar um dado recurso do sistema. Para
acessar um recurso do sistema, o usuário deve ser administrador ou ter login com
autorização para isso. 
*/

#include <iostream>

using namespace std;

int main(){

    cout << endl << "Bem vindo a Rabittino Database !" << endl;

    string passwordAdm = "14122022!Rh";

    cout << "Digite a senha de administrador para entrar..." << endl;

    string passwordUser;
    cout << "Senha : ";
    cin >> passwordUser;

    if(passwordUser == passwordAdm){
        cout << endl << "Bem vindo ao Banco de Dados da Rabittino Company." << endl;
    }else{
        cout << endl << "! SENHA INCORRETA !" << endl << "Você não tem permissão para acessar o Banco de Dados !" << endl;
    }

    return 0;
}