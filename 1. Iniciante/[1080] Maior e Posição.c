#include <stdio.h>

int main(){
	
	int maior, posicao, i, x[100];
	
	
	for(i=0;i<100;i++){
		scanf("%i",&x[i]);
		if(i==0){
			maior = x[i];
		}
		else{
			if(x[i] > maior){
				maior = x[i];
				posicao = i;
			}
		}
	}
	
	printf("%i\n%i\n",maior,posicao+1);
	

	
	
	return 0;
}
