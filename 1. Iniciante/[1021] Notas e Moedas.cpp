#include <bits/stdc++.h>
#define _ ios_base_sync_with_stdio(0);

using namespace std;

int main(){
	int notas[6] = {100,50,20,10,5,2}, qtd[6] = {}, qtd2[6] = {}, moedas[6] = {100,50,25,10,5,1};
	double n;
	cin >> n;
	cout << "NOTAS:" << endl;
	for(int i=0;i<6;i++){
		qtd[i] = n/notas[i];
		n-= qtd[i]*notas[i];
		cout<< qtd[i] << " nota(s) de R$ "<< notas[i] << ".00" << endl;
	}
	if(n!=0){
		n*=100;
	}
	cout << "MOEDAS:" << endl;
	for(int i=0;i<6;i++){
		qtd2[i] = n/moedas[i];
		n-= qtd2[i]*moedas[i];
		cout << qtd2[i] << " moeda(s) de R$ ";
		switch(i){
			case 0:
				cout << "1.00";
				break;
			case 1:
				cout << "0.50";
				break;
			case 2:
				cout << "0.25";
				break;
			case 3:
				cout << "0.10";
				break;
			case 4:
				cout << "0.05";
				break;
			case 5:
				cout << "0.01";
				break;
		}
		cout << endl;
	}
	return 0;
}
