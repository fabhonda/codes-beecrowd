#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;

int main(){
	
	int n,m;
	string fruta, texto;
	cin >> n >> m;
	vector<pair<string,int> > frutas;
	
	for(int i=0;i<n;i++){
		cin >> fruta;
		transform(fruta.begin(), fruta.end(), fruta.begin(), ::tolower);
		frutas.pb(mp(fruta,0));
	}
	
	while(m--){
		cin >> texto;
		bool notFound = true;
		transform(texto.begin(), texto.end(), texto.begin(), ::tolower);
		
		for(int i=0;i<frutas.size();i++){
			if(frutas[i].second == 0){
				if(texto.find(frutas[i].first)>texto.size()){
					reverse(texto.begin(),texto.end());
					if(texto.find(frutas[i].first)>texto.size()) notFound = true;
					else notFound = false;
				}
				else notFound = false;
				
				if(!notFound) frutas[i].second = 1;
			}
			notFound = true;
		}
	}
	
	for(int i=0;i<frutas.size();i++){
		if(frutas[i].second == 0) cout << "Sheldon detesta a fruta";
		else cout << "Sheldon come a fruta";
		cout << " " << frutas[i].first << endl;
	}
	
	return 0;
}
