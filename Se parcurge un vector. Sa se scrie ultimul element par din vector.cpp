//Se parcurge un vector. Sa se scrie ultimul element par din vector

#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n; cout << "n="; cin >> n;
    int ult = 0;

    for(int i = n-1; i >= 0; i--) {
        cout << "v[" << i << "]="; cin >> v[i];
        if (v[i] % 2 == 0) {
            ult = v[i];
            break;
        }
    }
    if(ult != 0)
        cout << "Ultimul nr par din vector: " << ult;
    else
        cout << "Nu exista numere pare in vector.";
    return 0;
}
