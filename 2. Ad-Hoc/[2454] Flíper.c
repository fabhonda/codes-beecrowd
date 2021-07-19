#include <stdio.h>

int main(){
	
	int p,r;
	
	scanf("%i %i",&p,&r);
	
	if(p==0){
		printf("C\n");
	}
	else{
		if(r==0){
			printf("B\n");	
		}
		if(r==1){
			printf("A\n");	
		}
	}
	
	
	return 0;
}
