#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2; cin >> n1 >> n2;

    if (n1 % 2 == 0 && n2 % 2 == 0) cout << 1 << endl;
    else if (n1 % 2 == 1 && n2 % 2 == 1) cout << 1 << endl;
    else cout << 0 << endl;
}