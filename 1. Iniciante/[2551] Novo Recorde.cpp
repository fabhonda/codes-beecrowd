#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
	
	double n,d,t,max;
	vector<double> dias;
	while(cin >> n){
		max=0;
		for(int i=0;i<n;i++){
			cin >> t >> d;
			if((d/t)>max){max=(d/t);dias.pb(i+1);}
		}
		for(int i=0;i<dias.size();i++) cout << dias[i] << endl;
		dias.clear();		
	}
	return 0;
}
