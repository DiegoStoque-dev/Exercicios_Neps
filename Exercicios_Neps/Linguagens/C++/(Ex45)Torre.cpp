#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n;
    int tab[n][n];
    vector <int> somas;
    vector <int> linhas(n, 0);
    vector <int> colunas(n, 0);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> tab[i][j];
            linhas[i] += tab[i][j];
            colunas[j] += tab[i][j];
        }
    }

    int msoma = -1e9;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int soma = linhas[i] + colunas[j] - 2*tab[i][j];
            if (soma > msoma) {
                msoma = soma;
            }
        }
    }

    cout << msoma << endl;
}