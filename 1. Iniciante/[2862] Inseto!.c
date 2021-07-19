#include <stdio.h>

int main(){
	
	int c,i,n;
	
	scanf("%i",&c);
	
	for(i=0;i<c;i++){
		scanf("%i",&n);
		if(n>8000){
			printf("Mais de 8000!\n");
		}
		else{
			printf("Inseto!\n");
		}
	}
	
	return 0;
}
