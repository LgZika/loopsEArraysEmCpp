// Escreva um programa que inicialize um array de números inteiros e encontre o maior elemento no array. Imprima o resultado.

#include <iostream>

using namespace std;

int main(){
    int arr[]{1, 2, 3, 4, 5};
    int maiorTamanho = arr[0];

    for(int i = 0; i < 5; i++){  
        if(arr[i] > maiorTamanho){
            maiorTamanho = arr[i];
        }
    }
    cout << "O maior elemento do array:" << maiorTamanho << endl;
    return 0;
}