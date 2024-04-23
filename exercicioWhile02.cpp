// Escreva um programa que calcula a soma dos dígitos até o numero inteiro inserido pelo usuário.

#include <iostream>

using namespace std;

int main(){
    int numero, i = 1, somatorio = 0;

    cout << "Entre com um numero: ";
    cin >> numero;

    while(i <= numero){
        somatorio = somatorio + i;
        i++;
    }
    cout << "Somatorio: " << somatorio << endl;
    return false;
}