#include<bits/stdc++.h>
#define pb push_back
using namespace std;

struct FelizNatal{
	string idioma;
	string mensagem;
};

int main(){
	
	string id,msg,m1,m2;
	int n,m; cin >> n;
	FelizNatal v[n];
	for(int j=0;j<n;j++){
		cin >> id;
		cin.ignore();
		getline(cin,msg);
		v[j].idioma = id; v[j].mensagem = msg;
	}
	cin >> m;
	while(m--){
		cin.ignore();
		getline(cin,m1);
		cin >>  m2;
		for(int i=0;i<n;i++){
			if(m2==v[i].idioma) cout << m1 << "\n" << v[i].mensagem << endl;
		}
		cout << endl;
	}
	
	return 0;
}
