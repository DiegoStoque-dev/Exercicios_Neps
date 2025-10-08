#include <bits/stdc++.h>
using namespace std;
int main()
{
    double b; cin >> b;
    if (b - 3 <= 0) cout << "Voce nao sofrera dano ao pular" << endl;
    else{
        cout << "Voce perdera " << (b - 3)*1.5;
        cout << " coracoes ao pular de uma altura de " << b <<" blocos";
    } 
    
    return 0;
}