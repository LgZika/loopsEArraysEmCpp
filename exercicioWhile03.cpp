// Escreva um programa que imprime a sequência de Fibonacci até o n-ésimo termo, onde o valor de n é inserido pelo usuário.

#include <iostream>

using namespace std;

int main(){
    long int numero, i = 0, n1 = 1, n2 = 1, newFib = 0, coluna = 0;

    cout << "Entre com um numero: ";
    cin >> numero;
    
    while(i <= numero){
        if(i <= 1){
            newFib = 1;     
        }else{
            newFib = n1 + n2;                   // soma os dois numeros anteriores
            n1 = n2;                            // n1 recebe n2
            n2 = newFib;                        // n2 recebe o ultimo numero exibido na sequencia
        }
        cout.width(15);
        cout.left;
        cout << newFib << "";               // exibe o novo numero fibonacci
        i++;                                // variavel de incremento
        coluna++;                           // variavel das colunas é incrementada (para formatação)
        if(coluna % 6 == 0){cout << endl;}  // verifica se a coluna é divisivel por 6, se sim, da um enter para nova linha 
    }
    cout << endl;
    return false;
}