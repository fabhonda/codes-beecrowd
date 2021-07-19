#include <stdio.h>

int main(){
	
	int n, menor, posicao, i;
	
	scanf("%i",&n);
	
	int x[n];
	
	for(i=0;i<n;i++){
		scanf("%i",&x[i]);
		if(i==0){
			menor = x[i];
		}
		else{
			if(x[i] < menor){
				menor = x[i];
				posicao = i;
			}
		}
	}
	
	printf("Menor valor: %i\nPosicao: %i\n",menor,posicao);
	

	
	
	return 0;
}
