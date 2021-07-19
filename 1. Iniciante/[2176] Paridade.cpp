#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
	
	string s; cin >> s;
	long long ans=0;
	
	for(int i=0;i<s.size();i++){
		if(s[i]=='1') ans++;
	}
	if(ans%2==0) s.pb('0');
	else s.pb('1');
	
	cout << s << endl;
	
	return 0;
}
