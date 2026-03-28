#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    string s2;
    for (size_t i = 0; i < s.size(); i++){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') s2 += s[i];
    }
    string cops2;
    for (int i = (int)s2.size() - 1; i >= 0; i--){
        cops2 += s2[i];
    }

    for (size_t i = 0; i < s2.size(); i++){
        if (s2[i] != cops2[i]){
            cout << "N" << endl;
            return 0;
        }
    }
    cout << "S" << endl;
}