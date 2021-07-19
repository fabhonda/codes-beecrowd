#include <stdio.h>

int main(){
	
	int feijoes[4],i,posicao;
	
	for(i=0;i<4;i++){
		scanf("%i",&feijoes[i]);
		if(feijoes[i]==1){
			posicao=i+1;
		}
	}
	
	printf("%i\n",posicao);
	
	return 0;
}
