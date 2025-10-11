#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll fatorial (ll valor){
    if (valor == 1 || valor == 0) return 1;
    return valor * fatorial(valor - 1);
}


int main (){
    ll x; cin >> x;
    cout << fatorial(x) << endl;
}