#include<bits/stdc++.h>
using namespace std;

int fat(int j){
	if(j==1) return 1;
	else return j*fat(j-1);
}

int main(){
	
	string s; cin >> s;
	while(s!= "0"){
		long long ans=0, j=s.size();
		for(int i=0;i<s.size();i++){
			ans+=((s[i]-'0')*fat(j));
			j--;
		}
		cout << ans << endl; cin >> s;
	}
	return 0;
}
