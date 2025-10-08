#include <bits/stdc++.h>
using namespace std;
int main (){
    int n, soma = 0; cin >> n;
    for (int i = 0; i < n; i++){
        int x ; cin >> x;
        soma += x;
        if (soma >= 1000000){
            cout << i + 1 << endl;
            break;
        }
    }
}