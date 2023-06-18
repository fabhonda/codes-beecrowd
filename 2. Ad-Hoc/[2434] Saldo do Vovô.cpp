#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int n, s, m, min;
    
    cin >> n >> s;
    min = s;
    
    while(n--){
    	cin >> m;
    	s += m;
    	if(s < min) min = s;
	}
	
	cout << min << endl;
 
    return 0;
}
