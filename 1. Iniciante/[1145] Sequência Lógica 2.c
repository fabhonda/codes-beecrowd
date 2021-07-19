#include <stdio.h>

int main(){
	
	int x, y, i=1, j;
	
	scanf("%i %i",&x,&y);
	
	while(i!=y+1){
		for(j=0;j<x;j++){
			if(j==x-1){
				printf("%i",i);
			}
			else{
				printf("%i ",i);
			}
			i++;
		}
		printf("\n");		
	}
	
	return 0;
}
