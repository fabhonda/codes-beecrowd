#include <stdio.h>

int main(){
	
	int t, r1, r2, i;
	unsigned long int soma;
	
	scanf("%i",&t);
	
	for(i=0;i<t;i++){
		soma=0;
		scanf("%i %i",&r1,&r2);
		soma = (r1+r2);
		printf("%li\n",soma);
	}
	
	
	return 0;
}
