//Să se afișeze și să se numere elementele pare de pe pozițiile impare ale unui vector.

#include <iostream>
using namespace std;

int main(){
    int v[100];
    int n, cnt = 0; cin >> n;

    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << endl;

    for (int i = 1; i < n; i += 2) {
        if (v[i] % 2 == 0) {
            cout << v[i] << endl;
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
