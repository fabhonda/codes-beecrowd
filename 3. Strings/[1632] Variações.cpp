#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t, ans;
	string s;
	
	cin >> t;
	
	for(int i=0;i<t;i++){
		cin >> s;
		ans = 1;
		transform(s.begin(),s.end(),s.begin(),::tolower);
		for(int j=0;j<s.size();j++){
			if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 's' ) ans*= 3;
			else ans*= 2;
		}
		cout << ans << endl;
	}
	
	return 0;
}
