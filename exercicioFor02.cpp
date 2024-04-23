// Escreva um programa que verifica se um número inserido pelo usuário é primo ou não.

#include <iostream>

using namespace std;

int main() {
    int numero, cont=0;

    cout << "Entre com um numero: ";
    cin >> numero;

    for(int i = 1; i <= numero; i++){
        if(numero % i == 0){ 
            cont++;
        }
    }
    if(cont == 2){
        cout << "O numero inserido eh primo" << endl;
    }else{
        cout << "O numero inserido NAO eh primo" << endl;
    }
    cout << endl;
    return 0;
}