//Se citește un șir de n numere întregi. Să se numere elementele pozitive și pare. 
#include <iostream>
using namespace std;

int main(){
    int v[100];
    int n; cin >> n;
    int counter = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] % 2 == 0 && v[i] > 0)
            counter++;
    }

    cout << "Numere pozitive si pare:" << endl << counter;

    return 0;
}
