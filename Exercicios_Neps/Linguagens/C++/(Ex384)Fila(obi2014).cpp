#include <bits/stdc++.h>
using namespace std;
int main(){
    map <int, int> fila;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        fila[i] = a;
    }
    int m; cin >> m;
    for(int i = 0; i < m; i++){
        int a; cin >> a;
        for(auto [pos, num] : fila){
            if(num == a){
                fila.erase(pos);
                break;
            }
        }
    }

    for(auto [pos, num] : fila){
        cout << num << " ";
    }
}