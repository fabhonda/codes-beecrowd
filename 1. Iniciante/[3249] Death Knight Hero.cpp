#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string s;
	int n, ans=0; cin >> n;
	while(n--){
		cin >> s;
		bool found=false;
		for(int i=0;i<s.size()-1;i++){
			if(s[i]=='C' && s[i+1] == 'D'){found=true;break;}
		}
		if(!found) ans++;
	}
	cout << ans << endl;
	return 0;
}
