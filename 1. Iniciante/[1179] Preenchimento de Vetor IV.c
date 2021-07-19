#include <stdio.h>

int main(){
	
	
	int par[5], impar[5], valores[15], j=0, k=0, i;
	
	for(i=0;i<15;i++){
		scanf("%i",&valores[i]);
		if(valores[i]%2==0){
			if(j<4){
				par[j] = valores[i];
			}
			else{
				par[j] = valores[i];
				for(j=0;j<5;j++){
					printf("par[%i] = %i\n",j,par[j]);
					par[j] = 1;
				}
				j=-1;
			}
		j++;
		}
		else{
			if(k<4){
				impar[k] = valores[i];
			}
			else{
				impar[k] = valores[i];
				for(k=0;k<5;k++){
					printf("impar[%i] = %i\n",k,impar[k]);
					impar[k] = 0;
				}
				k=-1;
			}
		k++;
		}
	}
	
	for(i=0;i<5;i++){
		if(impar[i] != 0){
			printf("impar[%i] = %i\n",i,impar[i]);
		}
	}
	for(i=0;i<5;i++){
		if(par[i] != 1){
			printf("par[%i] = %i\n",i,par[i]);
		}
	}
	return 0;
}
