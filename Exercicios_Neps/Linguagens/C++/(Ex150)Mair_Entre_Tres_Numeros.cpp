#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> numeros(3);
    for (int i = 0; i < 3; i++){
        int n; cin >> n;
        numeros[i] = n;
    }
    sort(numeros.begin(), numeros.end());
    cout << numeros[2] << "\n";
}