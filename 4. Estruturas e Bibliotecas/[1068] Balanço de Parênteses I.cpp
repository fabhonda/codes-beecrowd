#include <bits/stdc++.h>

using namespace std;

int main(){
	string n;
	vector<char> s;
	bool poxa = false;
	while(cin>>n){
		for(int i=0;i<n.size();i++){if(n[i]==')' || n[i] == '(')s.push_back(n[i]);}
		int j=0,i=s.size()-1;
		if(s[j]==')' || s.size()%2!=0) cout << "incorrect" << endl;
		else{
			int c_i=0, c_j=0;
			for(int i=0;i<s.size();i++){
				if(s[i]=='(')c_i++;
				else c_j++;
				//cout << c_i << " " << c_j << endl;
				if(c_j>c_i){
					cout << "incorrect" << endl;
					poxa = true;
					break;
				}
			}
			if(!poxa){
				cout << "correct" << endl;
			}
		}
		s.clear();
		n.clear();
	}
	return 0;
}
