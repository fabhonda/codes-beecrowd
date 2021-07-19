#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int n;
	string name;
	vector<string> nomes;
	vector<int> tamanhos;
	vector<string> concatenados;
	
	cin >> n;
	while(n!=0){
		for(int i=0;i<n;i++){
			cin >> name;
			nomes.push_back(name);
			tamanhos.push_back(nomes[i].size());
		}
		
		sort(tamanhos.begin(),tamanhos.end());
		reverse(tamanhos.begin(),tamanhos.end());
		
		for(int i=0;i<nomes.size();i++){
			string blank = "", operation="";
			for(int j=0; j< tamanhos[0] - nomes[i].size();j++){
				blank += " ";
			}
			operation = blank + nomes[i];
			concatenados.push_back(operation);
		}
		
		for(int i=0; i<concatenados.size();i++){
			if(i==concatenados.size()-1){
				cout << concatenados[i];
			}
			else{
			cout << concatenados[i] << endl;
			}
		}
		cout << endl;
		cin >> n;
		nomes.clear(), tamanhos.clear(), concatenados.clear();
	}

	return 0;
}
