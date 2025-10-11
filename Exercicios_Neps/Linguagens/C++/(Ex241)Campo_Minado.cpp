#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);  // Inicializa o vetor com n elementos
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    vector<int> quant(n, 0);  // Inicializa o vetor quant com n elementos, todos iguais a 0
    
    for (int i = 0; i < n; i++) {
        int cont = 0;
        
        // Verifica a própria célula
        if (vec[i] == 1) cont++;
        
        // Verifica a célula anterior (se não for a primeira)
        if (i > 0 && vec[i - 1] == 1) cont++;
        
        // Verifica a célula posterior (se não for a última)
        if (i < n - 1 && vec[i + 1] == 1) cont++;
        
        quant[i] = cont;  // Atribui o valor de cont à posição correspondente
    }
    
    for (int i = 0; i < n; i++) {
        cout << quant[i] << endl;  // Imprime o número de minas para cada célula
    }
    
    return 0;
}
