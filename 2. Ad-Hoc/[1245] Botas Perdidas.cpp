#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, tam;
	char pe;
	vector<pair<int,char> > pares;
	while(cin >> n){
		int par=0;
		for(int i=0;i<n;i++){cin >> tam >> pe;pares.push_back(make_pair(tam,pe));}
		sort(pares.begin(),pares.end());
		for(int i=0;i<pares.size()-1;i++){
			for(int j=i+1;j<pares.size();j++){
				if(pares[i].first == pares[j].first && pares[i].second != pares[j].second && pares[j].first != -1 ){
					par++;
					pares[j].first = -1;
					break;
				}
			}
		}
		cout << par << endl;
		pares.clear();
	}
	return 0;
}
