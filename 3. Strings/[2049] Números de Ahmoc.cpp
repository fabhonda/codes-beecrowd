#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string s1,s2;
	long long casos=0;
	cin >> s1;
	while(s1!="0"){
		cin >> s2;
		casos++;
		long long j=s1.size(), pos=-1;
		for(int i=0;i<s2.size();i++){
			string s3; s3.append(s2.begin()+i,s2.begin()+j);
			if(s1==s3){pos=i;break;}
			j++;
		}
		cout << "Instancia " << casos << endl;
		if(pos!=-1) cout << "verdadeira" << endl;
		else cout << "falsa" << endl;
		cin >> s1;
		if(s1=="0") break;
		else cout << endl;
	}
	
	return 0;
}
