#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    vector <ll> vec;
    for (ll i = 0; i < 10; i++){
        ll n; cin >> n;
        vec.push_back(n);
    }
    for (ll i = 9; i >= 0; i--){
        cout << vec[i] << endl;
    }
}