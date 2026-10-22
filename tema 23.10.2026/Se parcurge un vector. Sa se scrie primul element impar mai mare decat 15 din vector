//Se parcurge un vector. Sa se scrie primul element impar mai mare decat 15 din vector

#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n; cout << "n="; cin >> n;
    int st = 0;

    for (int i = 0; i < n; i++) {
        cout << "v[" << i << "]="; cin >> v[i];
        if (v[i] % 2 == 1 && v[i] > 15) {
            st = v[i];
            break;
        }
    }
    if (st != 0)
        cout << "Primul nr impar mai mare decat 15 din vector: " << st;
    else
        cout << "Nu exista numere impare mai mari decat 15 in vector.";
    return 0;
}
