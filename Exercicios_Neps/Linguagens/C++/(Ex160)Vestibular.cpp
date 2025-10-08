#include <bits/stdc++.h>
using namespace std;
int main (){
    int n; cin >> n;
    vector <char> ques;
    vector <char> gaba;
    for (int i = 0; i < n; i++){
        char n1; cin >> n1;
        ques.push_back(n1);
    }
    for (int i = 0; i < n; i++){
        char n1; cin >> n1;
        gaba.push_back(n1);
    }
    int cont = 0;
    for (int i = 0; i < n; i++){
        if (ques[i] == gaba[i]) cont++;
    }
    cout << cont << endl;
}