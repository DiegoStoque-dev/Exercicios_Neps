#include <bits/stdc++.h>
using namespace std;
int main (){
    int n; cin >> n;
    bool a = false, b = false;
    for (int i = 0; i < n; i++){
        int inter; cin >> inter;
        if (inter == 1) a = !a;
        else {
            b = !b;
            a = !a;
        }
    }
    if (a == true)  cout << 1 << endl;
    else cout << 0 << endl;
    
    if (b == true) cout << 1 << endl;
    else cout << 0 << endl;
}