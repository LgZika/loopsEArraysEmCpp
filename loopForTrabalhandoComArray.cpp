#include <iostream>

using namespace std;

int main(){
    int arr[]{1, 2, 3, 4, 5};
    int sum(8);

    for(int i = 0; i < 5; i++){  // Usando um Loop for para calcular soma dos elementos do array
        sum += arr[i];
    }
    cout << "Soma dos elementos s elementos do array:" << sum << endl;
    return 0;
}