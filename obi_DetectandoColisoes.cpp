#include <bits/stdc++.h>

#define X 0
#define Y 1

using namespace std;

bool colide(int * a1, int * a2, int * b1, int * b2) {
    int w1, h1, w2, h2;
    
    w1 = abs(a2[X] - a1[X]);
    h1 = abs(a2[Y] - a1[Y]);
    
    w2 = abs(b2[X] - b1[X]);
    h2 = abs(b2[Y] - b1[Y]);
    
    return abs(b2[Y] - a1[Y]) <= (h1+h2) && abs(b2[X] - a1[X]) <= (w1 + w2); 
}

int main() {
    int a1[2], a2[2], b1[2], b2[2];
    
    
    cin >> a1[X] >> a1[Y] >> a2[X] >> a2[Y];
    cin >> b1[X] >> b1[Y] >> b2[X] >> b2[Y];
    
    cout << colide(a1, a2, b1, b2) << endl;
    
    return 0;
}
