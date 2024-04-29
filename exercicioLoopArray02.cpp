// Crie um programa que solicite ao usuário que insira 5 números inteiros e
// armazene-os em um array. Em seguida, imprima esses números na ordem inversa.

#include <iostream>

using namespace std;

int main(){
    int arr[5];
    int len = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < len; i++){  
        cout << "Valor posicao " << i << ": ";
        cin >> arr[i];
    }
    cout << endl;
    for(int i = len-1; i > -1; i--){  
        cout << arr[i] << endl;
    }
    
    return 0;
}