#include <bits/stdc++.h>

using namespace std;

#define MAX 100100

int main() {
	long long fats[MAX], i, k, N;

	fats[0] = 0;
	fats[1] = 1;

	cin >> N;

	for(i = 2; fats[i - 1] <= N; ++i) {				
		fats[i] = i * fats[i - 1];
	}

    if(fats[i] == 0) i--;

	k = 0;	
	while (i > 0 || N != 0) {
		
		while(N >= fats[i]) {
			N -= fats[i];
			k++;
	    }
		
		i--;
	}

	cout << k << endl;

	return 0;
}

