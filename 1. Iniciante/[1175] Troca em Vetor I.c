#include <stdio.h>

int main(){
	
	int n[20], i, aux;
	
	for(i=0;i<20;i++){
		scanf("%i",&n[i]);
	}
	
	for(i=0;i<10;i++){
		aux = n[i];
		n[i] = n[19-i];
		n[19-i] = aux;
	}
	
	for(i=0;i<20;i++){
		printf("N[%i] = %i\n",i,n[i]);
	}
	
	return 0;
}
