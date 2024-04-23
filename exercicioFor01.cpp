// Escreva um programa que imprime todos os números ímpares entre dois números inseridos pelo usuário.

#include <iostream>

using namespace std;

int main() {
    int indiceBegin, indiceEnd;

    cout << "Entre com o indice inicial: ";
    cin >> indiceBegin;
    cout << "Entre com o indice final: ";
    cin >> indiceEnd;

    for(int i = indiceBegin; i <= indiceEnd; i++){
        if(i % 2 != 0){ 
            cout << "-> " << i << endl;
        }
    }
    cout << endl;
    return 0;
}