// Afișați toate numerele palindrom si prime din vector.

#include <iostream>
using namespace std;

int pali(int a) {
    int ogl = 0;
    do {
        int cif = a % 10;
        ogl = ogl * 10 + cif;
        a /= 10;
    } while (a != 0);

    return ogl;
}

int prm(int b) {
    bool prim = true;
    if (b < 2) prim = false;

    for (int d = 2; d * d <= b; d++) {
        if (b % d == 0)
            prim = false;
            break;
    }

    return prim;
}

int main() {
    int v[100];
    int n; cin >> n;
    int palindrom = 0, prime = 0;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == pali(v[i])) {
            palindrom++;
            cout << "Numar palindrom gasit: " << v[i] << endl;
        }
        if (prm(v[i])) {
            prime++;
            cout << "Numar prim gasit: " << v[i] << endl;
        }
    }

    cout << "Numere prime:" << endl << prime << endl << "Numere palindrom:" << endl << palindrom;

    return 0;
}
