#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    vector <ll> vec;
    for (ll i = 0; i < 10; i++){
        ll n; cin >> n;
        vec.push_back(n);
    }
    ll x, vs = 0; cin >> x;
    vector <ll> inds;
    for (ll i = 0; i < 10; i++){
        if (vec[i] == x){
           vs++;
           inds.push_back(i);
        }  
    }
    if (vs != 0){ 
        cout << vs << endl;
        for(auto i : inds){
            cout << i << " ";
        }
    } else {
        cout << "Mia x" << endl;
    }
}