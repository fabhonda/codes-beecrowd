#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
	
	long long x,y,z;
	vector<long long> v;
	while(cin>>x>>y>>z){
		bool found=false;
		v.pb(x),v.pb(y),v.pb(z);
		sort(v.begin(),v.end());
		if(pow(v[2],2) == pow(v[1],2) + pow(v[0],2)){
			for(int i=1;i<=v[2];i++){
				if(x%i==0 && y%i==0 && z%i==0 && i!=1){
					found=true;break;
				}
			}
			if(found) cout << "tripla pitagorica" << endl;
			else cout << "tripla pitagorica primitiva" << endl;		
		}
		else cout << "tripla" << endl;
		v.clear();
	}
	return 0;
}
