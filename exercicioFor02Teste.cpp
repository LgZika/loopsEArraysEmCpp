// Escreva um programa que verifica se um número inserido pelo usuário é primo ou não.

#include <iostream>

using namespace std;

int main() {
    int numero, cont = 0;

    cout << "Entre com um numero: ";
    cin >> numero;

    for(int i = 1; i <= numero; i++){
        cont = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){ 
                cont++;
            }
        }
        if(cont == 2){
            cout << i << " primo" << endl;
        }else{
            cout << i << endl;
        }
    }
    return 0;
}