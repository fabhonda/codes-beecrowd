#include <stdio.h>

int main(){
	
	int i, positivos=0, negativos=0, pares=0, impares=0, valor=0;
	
	for(i=0;i<5;i++){
		scanf("%i",&valor);
		if(valor > 0){
			positivos+=1;
		}
		if(valor < 0){
			negativos+=1;
		}
		if(valor%2==0){
			pares+=1;
		}
		if(valor%2!=0){
			impares+=1;
		}
	}
	
	printf("%i valor(es) par(es)\n%i valor(es) impar(es)\n%i valor(es) positivo(s)\n%i valor(es) negativo(s)\n",pares,impares,positivos,negativos);
	
	
	return 0;
}
