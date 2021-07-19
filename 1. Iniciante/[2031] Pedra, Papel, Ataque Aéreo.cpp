#include <iostream>

using namespace std;

int main(){
	
	string n1, n2;
	int n;
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> n1 >> n2;
		if(n1=="ataque"){
			if(n2=="ataque"){
				cout << "Aniquilacao mutua" << endl;
			}
			if(n2=="papel"){
				cout << "Jogador 1 venceu" << endl;
			}
			if(n2=="pedra"){
				cout << "Jogador 1 venceu" << endl;
			}
		}
		if(n1=="papel"){
			if(n2=="ataque"){
				cout << "Jogador 2 venceu" << endl;
			}
			if(n2=="papel"){
				cout << "Ambos venceram" << endl;
			}
			if(n2=="pedra"){
				cout << "Jogador 2 venceu" << endl;
			}			
		}
		if(n1=="pedra"){
			if(n2=="ataque"){
				cout << "Jogador 2 venceu" << endl;
			}
			if(n2=="papel"){
				cout << "Jogador 1 venceu" << endl;
			}
			if(n2=="pedra"){
				cout << "Sem ganhador" << endl;
			}			
		}
	}
	
	return 0;
}
