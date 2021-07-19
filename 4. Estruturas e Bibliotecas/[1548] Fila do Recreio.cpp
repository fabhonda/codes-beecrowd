#include<bits/stdc++.h>
using namespace std;

int main(){
	
	long long n,m,p; cin >> n;
	while(n--){
		cin >> m;
		vector<long long> v1(m), v2(m);
		for(int i=0;i<m;i++){
			cin >> p;
			v1[i]=p, v2[i]=p;
		}
		sort(v1.begin(),v1.end());
		reverse(v1.begin(),v1.end());
		long long ans=0;
		for(int i=0;i<v1.size();i++){
			if(v1[i]==v2[i]) ans++;
		}
		cout << ans << endl;
		v1.clear(),v2.clear();
	}
	return 0;
}
