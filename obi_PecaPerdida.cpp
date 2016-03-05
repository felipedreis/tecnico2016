#include <bits/stdc++.h>

#define N_MAX 1001

using namespace std;

int main() {
    int n, k, v[N_MAX];
    
    cin >> n;
    memset(v, 0, sizeof v);
    
    for(int i = 0; i < n - 1; ++i) {
        cin >> k;
        v[k] = 1;
    }
    
    for(int i = 1; i <= n; ++i) {
        if(v[i] == 0) {
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}
