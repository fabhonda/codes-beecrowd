#include <iostream>

using namespace std;

int main(){
		
	int n, aux, swaps, tam;
	cin >> n;
	for(int k=0;k<n;k++){
		swaps=0;
		cin >> tam;
		int vetor[tam];
		for(int i=0;i<tam;i++){
			cin >> vetor[i];
		}
		for(int i=0;i<tam-1;i++){
			for(int j=i+1;j<tam;j++){
				if(vetor[i] > vetor[j]){
					aux = vetor[j];
					vetor[j] = vetor[i];
					vetor[i] = aux;
					swaps++;
				}
			}
		}
		cout << "Optimal train swapping takes " << swaps << " swaps." << endl;
	}
	return 0;
}
