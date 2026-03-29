#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    while(true){
        int n; cin >>n;
        if(n == 0) break;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    cout << v[v.size()-1] << endl;
}