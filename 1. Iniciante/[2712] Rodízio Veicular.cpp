#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
	
	int n; string s; cin >> n;
	while(n--){
		cin >> s;
		bool found = false;
		for(int i=0;i<8;i++){
			if(s.size()>8){found=true;break;}
			if(i<3 && !isupper(s[i])){found=true;break;}
			if(i==3 && s[i]!='-'){found=true;break;}
			if(i>3 && !isdigit(s[i])){found=true;break;}
		}
		if(found) cout << "FAILURE" << endl;
		else{
			if(s[s.size()-1] == '1' || s[s.size()-1] == '2') cout << "MONDAY" << endl;
			else if(s[s.size()-1] == '3' || s[s.size()-1] == '4') cout << "TUESDAY" << endl;
			else if(s[s.size()-1] == '5' || s[s.size()-1] == '6') cout << "WEDNESDAY" << endl;
			else if(s[s.size()-1] == '7' || s[s.size()-1] == '8') cout << "THURSDAY" << endl;
			else if(s[s.size()-1] == '9' || s[s.size()-1] == '0') cout << "FRIDAY" << endl;
		}
	}
	
	return 0;
}
