#include <bits/stdc++.h>
using namespace std;
int main (){
    int n; cin >> n;
    vector <int> num;
    for (int i = 0; i < n; i++){
        int n1; cin >> n1;
        num.push_back(n1);
    }
    int count = 0;
    for (int i = 0; i < n - 2; i++){
        if (num[i] == 1){
            if (num[i+1] == 0 && num[i+2] == 0) count++;
        }
    }
    cout << count << endl;
}