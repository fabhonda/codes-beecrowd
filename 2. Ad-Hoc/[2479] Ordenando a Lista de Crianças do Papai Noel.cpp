#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int n, nao=0, sim=0;
	string name;
	char comp;
	vector<string> nomes;
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> comp >> name;
		nomes.push_back(name);
		if(comp == '-'){
			nao++;
		}
		else if(comp == '+'){
			sim ++;
		}
	}
	
	sort(nomes.begin(),nomes.end());
	for(int i=0;i<nomes.size();i++){
		cout << nomes[i] << endl;
	}
	
	cout << "Se comportaram: " << sim <<  " | Nao se comportaram: " <<  nao << endl;
	
	return 0;
}
