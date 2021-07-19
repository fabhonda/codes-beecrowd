#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
	
	int a, b, c; cin >> a >> b >> c;
	vector<int> v;
	v.pb(a), v.pb(b), v.pb(c);
	sort(v.begin(),v.end());
	
	if(v[0]==v[1] || v[0]==v[2] || v[1] == v[2]) cout << "S" << endl;
	else if(v[0]+v[1] == v[2]) cout << "S" << endl;
	else cout << "N" << endl;
	
	
	return 0;
}
