#include <stdio.h>

int main(){
	
	int c, forca, i;
	char nome[10];
	
	scanf("%i",&c);
	
	for(i=0;i<c;i++){
		scanf("%s %i",&nome,&forca);
		if((strcmp(nome,"Thor")) == 0){
			printf("Y\n");
		}
		else{
			printf("N\n");
		}
	}
	
	
	return 0;
}
