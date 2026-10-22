//Se parcurge un vector. Sa se scrie al p-lea element par din vector

#include <iostream>
using namespace std;

int main() {
    int v[100];
    int n; cout << "n="; cin >> n;
    int elem = 0;
    int p = 0; cout << "p="; cin >> p;
    int pcount = p;

    if (p > n) {
        cout << "Nu exista al " << p << "-lea element in vector.";
        return 0;
	}

    for (int i = 0; i <= n; i++) {
        cout << "v[" << i << "]="; cin >> v[i];
        if (v[i] % 2 == 0) {
            if (pcount == 1) {
                elem = v[i];
                break;
            }
            pcount--;
        }
    }
    if (elem != 0)
        cout << "Al " << p << "-lea nr par din vector: " << elem;
    else
        cout << "Al " << p << "-lea nr nu este par.";
    return 0;
}
