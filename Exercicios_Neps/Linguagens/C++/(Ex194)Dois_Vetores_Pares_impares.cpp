#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> par, impar;

    for(int i = 0; i < 10; i++){
        int num;
        cin >> num;

        if(num % 2 == 0){
            par.push_back(num);
        } else {
            impar.push_back(num);
        }
    }

    for (int x : par){
        cout << x << " ";
    }    cout << endl;
    for (int x : impar){
        cout << x << " ";
    }    cout << endl;
    
}