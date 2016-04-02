// uva679 Droping balls

#include <bits/stdc++.h>

using namespace std;

int solve(int n, int i, const int lim) {
    if((i * 2 + 1) > lim || (i*2 + 2) > lim)
        return i;
    
    if(n%2 != 0) {
        solve(n/2 + 1, i*2, lim);
    } else {
        solve(n/2, i*2 + 1, lim);
    }
}

int pow2(int k) {
    int res = 1;
    
    while(k--) {
        res = res << 1;
        
    }
    
    return res;
}

int main () {
    int n, i, D, K, lim;	
		
	scanf("%d", &n);
	
	while(n--) {
		
		scanf("%d %d", &D, &K);
        
		lim = pow2(D);
		
		
		printf("%d\n", solve(K, 1, lim));
	}
	
	return 0;
}
