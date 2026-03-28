#include <bits/stdc++.h>
using namespace std;
int main(){
    int l, c; cin >> l >> c;
    int t1 = (l * c) + ((l-1) * (c-1));
    cout << t1 << endl;
    int t2 = ((l-1) * 2) + ((c-1) * 2);
    cout << t2 << endl;
}