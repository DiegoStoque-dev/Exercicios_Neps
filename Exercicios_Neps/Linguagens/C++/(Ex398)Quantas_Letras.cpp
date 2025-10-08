#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    string p; cin >> p;
    char l; cin >> l;
    ll cont = 0;
    for (ll i = 0; i < p.length(); i++){
        if (p[i] == l) cont++;
    }
    cout << cont << endl;
}