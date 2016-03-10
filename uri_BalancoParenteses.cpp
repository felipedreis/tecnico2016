#include <bits/stdc++.h>

using namespace std;

int main() {
	string entrada;
	int res;
	
	while(getline(cin,entrada)) {
	
	    res = 0;
	    stack<char> s;
	
	    for(int i = 0; i < entrada.length(); ++i) {
	        //cout << entrada[i] << endl;
	    
	        if(entrada[i] == '(') {
	            s.push(entrada[i]);
	        } else if(entrada[i] == ')' && !s.empty()) { 
	            s.pop();
	        } else if(entrada[i] == ')' && s.empty()) {
	            res = 1;
	        }
	            
	        if(res)
	            break;
	        
	    }
	    
	    if(!s.empty() || res == 1)
	        cout << "incorrect" << endl;
	    else
	        cout << "correct" << endl;
	        
	}
	
	return 0;
}
