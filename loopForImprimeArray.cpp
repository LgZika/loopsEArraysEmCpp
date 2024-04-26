#include <iostream>

using namespace std;

int main() {
    int arr[]{1, 2, 3, 4, 5};
    
    for (int i = 0; i < 5; ++i){ // Usando um loop for para imprimir os elementos do array
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}