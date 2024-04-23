// Escreva um programa que solicita ao usuário que insira um número e imprime todos os números pares entre 1 e o número inserido.

#include <iostream>

using namespace std;

int main(){
    int numero, i = 1;

    cout << "Entre com um numero: ";
    cin >> numero;

    while(i <= numero){
        if(i % 2 == 0){
            cout << i << endl;
        }
        i++;
    }
    cout << "Fim!" << endl;
    return false;
}