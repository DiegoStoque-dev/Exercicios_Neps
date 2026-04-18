#include <bits/stdc++.h>
using namespace std;
int main(){
    map <int, int> esq, dir;
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        char a;
        int tam; cin >> tam >> a;        
        if (a == 'E')
            esq[tam]++;
        else
            dir[tam]++;
    }
    int qnt = 0;
    for ( int i = 30; i <= 60; i++){
        qnt += min(esq[i], dir[i]); //retorna o menor valor entre os dois mapas, ou seja, o número de pares de botas que podem ser formados com o mesmo tamanho.
    }
    cout << qnt << endl;
}