#include <bits/stdc++.h>
using namespace std;
int main (){
    double n; cin>>n;
    vector <double> num;
    for (int i = 0; i < n; i++){
        double n1; cin>>n1;
        num.push_back(n1);
    }
    for (int i = 0; i < n; i++){
        cout << fixed << setprecision(4) << sqrt(num[i]) << endl;
    }
}