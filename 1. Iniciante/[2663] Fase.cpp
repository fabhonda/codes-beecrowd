#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
	
	long long n,k,p;
	vector<long long> v;
	cin >> n >> k;
	while(n--){
		cin >> p; v.pb(p);
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	
	long long ans=k;
	while(v[k-1]==v[k]){
		ans++; k++;
	}
	cout << ans << endl;
	return 0;
}
