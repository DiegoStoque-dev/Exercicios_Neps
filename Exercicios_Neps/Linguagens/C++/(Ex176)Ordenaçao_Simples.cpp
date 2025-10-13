#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector <int> num;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        num.push_back(x);
    }
    sort(num.begin(), num.end());

    for(int i = 0; i < n; i++){
        cout << num[i] << " ";
    }

    return 0;
}
