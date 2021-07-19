#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int n, valor, cont;
	vector<int> numbers, qtd, procura;
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> valor;
		numbers.push_back(valor);
	}
	
	for(int i=0;i<numbers.size();i++){
		procura.push_back(numbers[i]);
		cont = 0;
		for(int j=0;j<numbers.size();j++){
			if(procura[i] == numbers[j]) & procura[i]!=procura[j]){
				cont++;
			}
		}
		qtd.push_back(cont);
	}
	
	for(int i=0;i<numbers.size();i++){
		cout << numbers[i] << " aparece " << qtd[i] << " vez(es)" << endl;
	}
	
	
	
	return 0;
}
