#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
	
	string nome;
	int n;
	float nota, peso, soma;
	vector<float> notas, final;
	vector<string> nomes;
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> nome;
		cin >> peso;
		nomes.push_back(nome);
		soma=0;
		for(int j=0;j<7;j++){
			cin >> nota;
			notas.push_back(nota);
		}
		sort(notas.begin(),notas.end());
		for(int j=1;j<6;j++){
			soma+=notas[j];
		}
		soma*=peso;
		final.push_back(soma);
		notas.clear();
	}
	
	for(int i=0;i<n;i++){
		cout << nomes[i] << " " << setprecision(2) << fixed << final[i] << endl;
	}
	
	return 0;
}
