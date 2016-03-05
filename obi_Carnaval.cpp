#include <bits/stdc++.h>

using namespace std;

int main() {

	double notas[5];
    int i;

	for(i = 0; i < 5; ++i)
        cin >> notas[i];

    double maior = 0, menor = 1e20;
    int iMaior, iMenor;
    
    for(i = 0; i < 5; ++i) {
        if(notas[i] > maior) {
            maior = notas[i];
            iMaior = i;    
        }

        if(notas[i] < menor) {
            menor = notas[i];
            iMenor = i;
        }
            
    }
    
    notas[iMaior] = 0;
    notas[iMenor] = 0;
    
    double sum = 0;

    for(i = 0; i < 5; ++i) {
        sum += notas[i];
    }

    printf("%.1lf\n", sum);

    return 0;

}
