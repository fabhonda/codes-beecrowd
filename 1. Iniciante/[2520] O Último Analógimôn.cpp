#include<bits/stdc++.h>
#define mp make_pair
using namespace std;

int main(){
	
	long long n,m,num; 
	while(cin>>n>>m){
		pair<long long, long long> s,f;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> num;
				if(num==2) f = mp(i,j);
				else if(num==1) s = mp(i,j);
			}
		}
		cout << (abs(s.first-f.first))+(abs(s.second-f.second)) << endl;		
	}
	return 0;
}
