#include <bits/stdc++.h>

using namespace std;

#define MAX_N 10100

int main() {

    int N, i, sorteio[MAX_N];
    
    cin >> N;
    
    for(i = 0; i < N; ++i)
        cin >> sorteio[i];
        
    int valor, cont, res;
    
    cont = 1;
    valor = sorteio[0];
    res = 0;
    
    for(i = 1; i < N; ++i) {
    
        if(sorteio[i] == valor)
            cont++;   
        else {
        
            if(cont > res)
                res = cont;
                
             cont = 1;
             valor = sorteio[i];
        
        }
    }
    
    
    if(cont > res)
        res = cont;
        
    cout << res << endl;

}
