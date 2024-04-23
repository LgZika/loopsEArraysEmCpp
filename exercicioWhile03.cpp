// Escreva um programa que imprime a sequência de Fibonacci até o n-ésimo termo, onde o valor de n é inserido pelo usuário.

#include <iostream>

using namespace std;

int main(){
    long int numero, i = 0, n1 = 1, n2 = 1, newFib, coluna = 0;

    cout << "Entre com um numero: ";
    cin >> numero;
    cout << "1 1 ";

    while(i <= numero){
        newFib = n1 + n2;                   // soma os dois nuemros anteriores
        cout << newFib << " ";              // exibe o novo numero fibonacci

        coluna++;                           // variavel das colunas é incrementada (para formatação)
        if(coluna % 6 == 0){cout << endl;}  // verifica se a coluna é divisivel por 6, se sim, da um enter para nova linha

        n1 = n2;                            // n1 recebe n2
        n2 = newFib;                        // n2 recebe o ultimo numero exibido na sequencia
        i++;                                // variavel de incremento
    }
    cout << endl;
    return false;
}