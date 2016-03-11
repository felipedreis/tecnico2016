#include <bits/stdc++.h>

using namespace std;

int main() {
    int i;
    string ent;
    vector<char> res;
    
    while(cin >> ent){
        
        vector<char>::iterator it = res.begin();
        
        for(i = 0; i < ent.length(); ++i) {
            
            char c = ent[i];
            
            if(c == '[') {
                it = res.end();
            } else if (c == ']') {
                it = res.begin();
            } else {
                it = res.insert(it, c);
            }
            
        }
        
        for(i = res.size() - 1; i >= 0; --i)
            cout << res[i];
        cout << endl;
        
        res.clear();
    }
    
     
}
