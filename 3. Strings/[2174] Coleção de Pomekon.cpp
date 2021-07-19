#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int pomekons=151,n;
	string nome;
	vector<string> capturados;
	bool tem;
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> nome;
		tem = false;
		for(int j=0;j<capturados.size();j++){
			if(nome == capturados[j]){
				tem = true;
			}
		}
		if(tem == false){
			capturados.push_back(nome);
			pomekons--;
		}
	}
	
	cout << "Falta(m) " << pomekons << " pomekon(s)." << endl;
	
	return 0;
}
