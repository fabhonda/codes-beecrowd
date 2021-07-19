#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<int> aposta;
	vector<int> sorteio;
	int numero;
	
	for(int i=0;i<6;i++){
		cin >> numero;
		aposta.push_back(numero);
	}
	
	for(int i=0;i<6;i++){
		cin >> numero;
		sorteio.push_back(numero);
	}
	
	int procura=0, premios=0;
	for(int i=0;i<6;i++){
		procura = aposta[i];
		for(int j=0;j<6;j++){
			if(procura==sorteio[j]){
				//cout << procura << " é igual a " << aposta[j] << endl;
				premios++;
			}
		}
	}
	
	switch(premios){
		case 3:
			cout << "terno" << endl;
			break;
		case 4: 
			cout << "quadra" << endl;
			break;
		case 5:
			cout << "quina" << endl;
			break;
		case 6:
			cout << "sena" << endl;
			break;
		default:
			cout << "azar" << endl;
	}
	
	
	return 0;
}
