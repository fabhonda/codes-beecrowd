#include <stdio.h>

int main(){
	
	int n, soma=0,cont=0;
	float media;
	scanf("%i",&n);
	
	while(n>0){
		if(cont==0){
			soma=n;
		}
		else{
			soma+=n;
		}
		cont++;
		scanf("%i",&n);
	}
	
	media = (float)soma/(float)cont;
	
	printf("%.2f\n",media);
	
	return 0;
}
