#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int, int> n;
    int x; cin >> x;
    for(int i = 0; i < x; i++){
        int a; cin >> a;
        n[a]++;
    }
    int max_qtd = -1, maior_num = -1;
    for(auto [num, qtd] : n){
        if(qtd >= max_qtd){
            max_qtd = qtd;
            if (num > maior_num)maior_num = num;
        }
    }
    cout << maior_num << endl;
}