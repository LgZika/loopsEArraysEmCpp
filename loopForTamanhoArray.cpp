#include <iostream>

using namespace std;

int main(){
    int arr[]{1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculando o tamanho
    int* ponteiro = new int[size]; // alocação variavel de memoria

    ponteiro = arr; // ponteiro recebe o endereço do array

    for(int i = 0; i < size; i++){ // Usando um Loop for para imprimir os elementos do array
        cout << ponteiro[i] << " ";
    }
    cout << endl;
    cout << "Endereço: " << ponteiro << endl;
    cout << "Conteudo: " << *ponteiro << endl;

    ponteiro = 0; // retira o ponteiro do endereço do array
    delete[] ponteiro; // exclui a alocacao variavel
    return 0;
}