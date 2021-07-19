#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int n,numero,susp,index;
	vector<int> suspeitos, copia;
	
	cin >> n;
	while(n!=0){
		for(int i=0;i<n;i++){
			cin >> numero;
			suspeitos.push_back(numero);
			copia.push_back(numero);
		}
		sort(suspeitos.begin(),suspeitos.end());
		reverse(suspeitos.begin(),suspeitos.end());
		susp = suspeitos[1];
		for(int i=0;i<copia.size();i++){
			if(susp == copia[i]){
				index = i+1;
				break;
			}
		}
		cout << index << endl;
		suspeitos.clear(), copia.clear();
		cin >> n;
	}
	
	
	return 0;
}
