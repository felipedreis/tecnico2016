#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    
    while(cin >> n) {
        queue<int> q, res; 
        
        if(!n)
            break;
        
        for (int i = 1; i <= n; ++i)
            q.push(i);
            
        while(q.size() > 1) {
            res.push(q.front());
            q.pop();
            
            int j = q.front();
            q.pop();
            q.push(j);
        } 
        
        cout << "Discarded cards:";
        while(!res.empty()) {
            if(res.size() > 1)
                cout << " " << res.front() << ",";
            else
                cout << " " << res.front();
            
            res.pop();
        }
        
        cout << endl << "Remaining card: " << q.front() << endl;
    }
    
    return 0;
}
