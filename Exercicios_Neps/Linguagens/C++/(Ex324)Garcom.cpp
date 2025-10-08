#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;cin >> n;
    int cq = 0;
    for (int i = 0; i < n; i++){
        int a; int b;
        cin >> a; cin >> b;
        if (a > b) cq += b;    
    }
    cout << cq << endl;
}