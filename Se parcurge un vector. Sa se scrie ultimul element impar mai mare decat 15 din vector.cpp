//Se parcurge un vector. Sa se scrie ultimul element impar mai mare decat 15 din vector  

#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n; cout << "n="; cin >> n;
    int ult = 0;

    for(int i = n-1; i >= 0; i--) {
        cout << "v[" << i << "]="; cin >> v[i];
        if (v[i] % 2 != 0 && v[i] > 15) {
            ult = v[i];
            break;
        }
    }
    if(ult != 0)
        cout << "Ultimul element impar mai mare decat 15 din vector: " << ult;
    else
        cout << "Nu exista numere impare mai mari decat 15 in vector.";
    return 0;
}
