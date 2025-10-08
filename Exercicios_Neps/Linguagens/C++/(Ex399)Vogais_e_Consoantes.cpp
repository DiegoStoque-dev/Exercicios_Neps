#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){
    string p; cin >> p;
    string consoante; string vogais;
    for (ll i = 0; i < p.length(); i++){
        if (p[i] == 'a' || p[i] == 'e' || p[i] == 'o' || p[i] == 'i' || p[i] == 'u' ) vogais += p[i];
        else consoante += p[i];
    }
    
    cout << "Vogais: " << vogais << endl;
    cout << "Consoantes: " << consoante << endl;
}