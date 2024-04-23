// Escreva um programa que imprime um padrão de asteriscos (*), onde o número de linhas é inserido pelo usuário.

#include <iostream>

using namespace std;

int main() {
    int linhas;
    string asterisco = "*";

    cout << "Entre com o numero de linhas: ";
    cin >> linhas;

    for(int i = 1; i <= linhas; i++){
        cout << asterisco << endl;
        asterisco += "*";
    }

    cout << endl; 

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}