#include <stdio.h>

int main(){
	
	int i,j;
	
	for(i=0;i<39;i++){
		printf("- ");
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("|");
		for(j=0;j<75;j++){
			printf(" ");
		}
		printf("|");
		if(i<4){
			printf("\n\n");
		}
		else if(i==4){
			printf("\n");
		}
		
	}
	for(i=0;i<39;i++){
		if(i<38){
			printf("- ");	
		}
		else if(i==38){
			printf("-\n");
		}
	}
	
	return 0;
}
