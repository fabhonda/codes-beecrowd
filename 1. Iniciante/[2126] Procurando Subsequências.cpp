#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string s1,s2;
	long long casos=0;
	while(cin>>s1>>s2){
		casos++;
		long long j=s1.size(), pos=-1, ans=0;
		for(int i=0;i<s2.size();i++){
			string s3; s3.append(s2.begin()+i,s2.begin()+j);
			if(s1==s3){pos=i;ans++;}
			j++;
		}
		cout << "Caso #" << casos << ":" << endl;
		if(pos!=-1){
			cout << "Qtd.Subsequencias: " << ans << endl;
			cout << "Pos: " << pos+1 << endl;
		}
		else cout << "Nao existe subsequencia" << endl;
		cout << endl;

	}
	
	return 0;
}
