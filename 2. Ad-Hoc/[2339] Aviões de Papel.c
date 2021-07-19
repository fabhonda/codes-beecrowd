#include <stdio.h>

int main(){
	
	int c,p,f;
	
	scanf("%i %i %i",&c,&p,&f);
	
	if((c*f)<=p){
		printf("S\n");
	}
	else{
		printf("N\n");
	}
	
	return 0;
}
