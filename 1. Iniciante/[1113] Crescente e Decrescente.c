#include <stdio.h>

int main(){
	
	int x, y;
	
	scanf("%i %i",&x,&y);
	while(x!=y){
		
		if(x>y){
			printf("Decrescente\n");
		}
		else{
			printf("Crescente\n");
		}
		
		
		scanf("%i %i",&x,&y);
	}
	
	
	return 0;
}
