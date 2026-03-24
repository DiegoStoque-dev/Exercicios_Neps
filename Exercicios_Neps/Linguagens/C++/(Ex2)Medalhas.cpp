#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <pair<int,int>> cop(3);
    for (int i = 0; i < 3; i++){
        cin >> cop[i].first;
        cop[i].second = i+1;
    }

    sort (cop.begin(), cop.end());

    for (int i = 0; i < 3; i++){
        cout << cop[i].second << endl;
    }
}