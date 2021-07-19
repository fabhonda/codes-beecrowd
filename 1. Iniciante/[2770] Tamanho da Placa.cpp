#include<bits/stdc++.h>
#define pb push_back

using namespace std;

int main(){
	
	long long x1,x2,y1,y2,m;
	while(cin>>x1>>y1>>m){
		vector<long long> v1, v2;
		v1.pb(x1), v1.pb(y1);
		sort(v1.begin(),v1.end());

		for(int i=0;i<m;i++){
			cin >> x2 >> y2;
			v2.pb(x2), v2.pb(y2);
			sort(v2.begin(),v2.end());
		
			if(v2[0] > v1[0] || v2[1] > v1[1]) cout << "Nao" << endl;
			else cout << "Sim" << endl;
			
			v2.clear();
		}
	}
	return 0;
}
