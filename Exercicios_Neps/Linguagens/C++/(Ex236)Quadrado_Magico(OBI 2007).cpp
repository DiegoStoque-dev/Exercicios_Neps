#include <bits/stdc++.h>
using namespace std;
typedef int ll;
int main(){
    ios_base::sync_with_stdio(false); //deslinca cin e cout do C, para ganhar velocidade
    cin.tie(NULL);

    ll n; cin >> n;
    ll dp = 0;
    ll ds = 0;
    vector <ll> somas;
    vector <ll> colunas(n, 0);
    for (ll i = 0; i < n; i++){
        ll s = 0;
        for (ll j = 0; j < n; j++){
            ll a; cin >> a;
            s += a;
            colunas[j] += a;

            if (i == j) dp += a;
            if (i + j == n -1) ds += a;

        }
        somas.push_back(s);
    }
    somas.push_back(dp);
    somas.push_back(ds);

    for (size_t i = 1; i < colunas.size(); i++){
        if (i != 0 ){
            if (colunas[i] != somas[0]){
                cout << -1 << endl;
                return 0;
            }
        }
    }

    for (size_t i = 1; i < somas.size(); i++){
        if (i != 0 ){
            if (somas[i] != colunas[0]){
                cout << -1 << endl;
                return 0;
            }
        }
    }

    cout << somas[0] << endl;

}