#include <stdio.h>

int main(){
	
	int n, a, b;
	
	scanf("%i",&n);
	scanf("%i %i",&a,&b);
	
	if((a+b)>n){
		printf("Deixa para amanha!\n");
	}
	else{
		printf("Farei hoje!\n");
	}
	
	
	return 0;
}
