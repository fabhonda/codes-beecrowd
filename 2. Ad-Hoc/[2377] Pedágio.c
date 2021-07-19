#include <stdio.h>

int main(){
	
	int l,d,k,p,ped=0,qtd=0,custo;
	
	scanf("%i %i",&l,&d);
	scanf("%i %i",&k,&p);
	
	
	while(ped<=l){
		ped+=d;
		qtd++;
	}
	
	qtd--;
	
	custo = (l*k) + (qtd*p);
	
	printf("%i\n",custo);
	
	return 0;
}
