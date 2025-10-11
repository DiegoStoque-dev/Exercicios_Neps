#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    vector <ll> vec;
    for (ll i = 0; i < 10; i++){
        ll n; cin >> n;
        vec.push_back(n);
    }
    ll x; cin >> x;
    bool t = false;
    for (ll i = 0; i < 10; i++){
        if (vec[i] == x) t = true;
    }
    if (t == true) cout << "SIM" << endl;
    else cout << "NAO" << endl;
}