#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	vector<int> marmore, encontrados, posicao;
	vector<bool> found;
	bool yes;
	int n,q,id,cases=0,procura;
	
	cin >> n >> q;
	
	while(n!=0 || q!=0){
		cases++;
		for(int i=0;i<n;i++){
			cin >> id;
			marmore.push_back(id);	
		}
		sort(marmore.begin(),marmore.end());
		for(int i=0;i<q;i++){
			yes=false;
			cin >> procura;
			encontrados.push_back(procura);
			for(int j=0;j<n;j++){
				if(procura==marmore[j]){
					posicao.push_back(j+1);
					yes=true;
					break;
				}
			}
			if(yes==true){
				found.push_back(true);
			}
			else{
				posicao.push_back(0);
				found.push_back(false);				
			}
		}
		cout << "CASE# " << cases << ":" << endl;
		for(int i=0;i<q;i++){
			if(found[i]==true){
				 cout << encontrados[i] << " found at " << posicao[i] << endl;
			}
			else{
				cout << encontrados[i] << " not found" << endl;
			}
		}
		marmore.clear();
		encontrados.clear();
		posicao.clear();
		found.clear();
		cin >> n >> q;
	}
	
	return 0;
}
