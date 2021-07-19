#include <stdio.h>

int main(){
	
	int c,n,ponto;
	
	scanf("%i %i",&c,&n);
	
	ponto = c;
	
	while(ponto>=0){
		ponto-=n;
	}
	
	ponto+=n;
	
	printf("%i\n",ponto);
	
	return 0;
}
