#include <stdio.h>

int main(){
		
	int n, aux, swaps, tam, i, j, k;
	scanf("%d",&n);
	for(k=0;k<n;k++){
		swaps=0;
		scanf("%d",&tam);
		int vetor[tam];
		for(i=0;i<tam;i++){
			scanf("%d",&vetor[i]);
		}
		for(i=0;i<tam-1;i++){
			for(j=i+1;j<tam;j++){
				if(vetor[i] > vetor[j]){
					aux = vetor[j];
					vetor[j] = vetor[i];
					vetor[i] = aux;
					swaps++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",swaps);
	}
	return 0;
}
