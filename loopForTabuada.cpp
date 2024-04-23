#include <iostream>

using namespace std;

int main() {
    int numero, indice;

    cout << "Entre com um numero para ver sua tabuada: ";
    cin >> numero;
    cout << "Entre com o indice de multiplicacoes: ";
    cin >> indice;

    for(int i = 0; i <= indice; i++){
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
    
    cout << endl;
    return 0;
}