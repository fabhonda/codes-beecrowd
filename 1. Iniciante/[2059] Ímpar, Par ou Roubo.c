#include <stdio.h>

int main(){
	
	int p,j1,j2,r,a;
	
	scanf("%i %i %i %i %i",&p,&j1,&j2,&r,&a);
	
	if(r==0){
		if(a==0){
			if(p==0){
				if((j1+j2)%2==0){
					printf("Jogador 2 ganha!\n");
				}
				else{
					printf("Jogador 1 ganha!\n");
				}
			}
			if(p==1){
				if((j1+j2)%2==0){
					printf("Jogador 1 ganha!\n");
				}
				else{
					printf("Jogador 2 ganha!\n");
				}				
			}
		}
		if(a==1){
			printf("Jogador 1 ganha!\n");
		}
	}
	
	if(r==1){
		if(a==0){
			printf("Jogador 1 ganha!\n");
		}
		if(a==1){
			printf("Jogador 2 ganha!\n");
		}
	}
	
	
	return 0;
}
