// Desenvolva um programa que receba como entrada um array de inteiros
// e calcule a média dos elementos presentes no array. Imprima oresultado.

#include <iostream>

using namespace std;

int main(){
    int len;
    cout << "Quantas notas dejesa inserir: ";
    cin >> len;

    float arr[len], media;

    for(int i = 0; i < len; i++){  
        cout << "Nota " << i+1 << ": ";
        cin >> arr[i];
        media += arr[i];
    }
    cout << "Media das notas inseridas: " << media/len << endl;
    
    return 0;
}