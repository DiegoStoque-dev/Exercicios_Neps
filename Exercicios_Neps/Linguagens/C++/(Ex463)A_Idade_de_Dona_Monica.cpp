#include <bits/stdc++.h>
using namespace std;
int main (){
    int im, i1, i2;
    cin >> im >> i1 >> i2;
    int i3 = im - (i1+i2);

    if (i1 > i2 && i1 > i3) cout << i1 << endl;
    else if (i2 > i3) cout << i2 << endl;
    else cout << i3 << endl;
}