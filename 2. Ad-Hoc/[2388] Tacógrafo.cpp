#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int n, t, v, ans=0;
    cin >> n;
    
    while(n--){
    	cin >> t >> v;
    	ans += (t*v);
	}
	
	cout << ans << endl;
 
    return 0;
}
