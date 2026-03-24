#include <bits/stdc++.h>
using namespace std;
int main(){
    double n1, n2; cin >> n1 >> n2;

    double me = ((n1 * 2.0) + (n2 * 3.0)) / 5.0;

    if (me >= 7) cout << "Aprovado" << endl;
    else if (me < 3) cout << "Reprovado" << endl;
    else cout << "Final" << endl;
}