#include <bits/stdc++.h>
using namespace std;
int main(){
    double n1, n2; cin >> n1 >> n2;
    double med = (n1 + n2)/2;

    if (med >= 7) cout << "Aprovado" << endl;
    else if (med <= 7 && med >= 4) cout << "Recuperacao" << endl;
    else cout << "Reprovado" << endl;
}