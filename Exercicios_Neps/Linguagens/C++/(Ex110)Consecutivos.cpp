#include <bits/stdc++.h>
using namespace std;
int main (){
    double n; cin>>n;
    vector <double> num;
    for (int i = 0; i < n; i++){
        double n1; cin>>n1;
        num.push_back(n1);
    }
    int maior = 0;
    int cont = 0;
    vector <int> sec;
    for (int i = 0; i < n; i++){
        if (i != 0) {
            if (maior == num[i]) cont++;
            else{
                sec.push_back(cont);
                maior = num[i];
                cont = 0;
            }
        }
        else maior = num[i];
    }
    sec.push_back(cont);
    sort(sec.begin(), sec.end());
    cout << (sec[sec.size() - 1]) + 1 << endl;
}