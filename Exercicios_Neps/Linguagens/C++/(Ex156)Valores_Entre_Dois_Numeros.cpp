#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y; cin >> x >> y;
    int a, b;
    if (x < y) {
        a = x;
        b = y;
    } else {
        a = y;
        b = x;
    }

    for (int i = a; i <= b; i++){
        cout << i << " ";
    }
    cout <<endl;
}