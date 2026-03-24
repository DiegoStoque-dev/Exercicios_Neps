#include <bits/stdc++.h>
using namespace std;
int main (){
    double p1, c1, p2, c2;
    cin >> p1 >> c1 >> p2 >> c2;

    double t1 = p1 * c1;
    double t2 = p2 * c2;

    if (t1 == t2) cout << 0 << endl;
    else if (t1 > t2) cout << -1 << endl;
    else cout << 1 << endl;
}