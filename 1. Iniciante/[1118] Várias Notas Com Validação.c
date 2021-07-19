#include <stdio.h>

int main(){
	
	float n1, n2;
	int x;
	
	scanf("%f",&n1);
	while(n1 < 0 || n1 > 10){
		printf("nota invalida\n");
		scanf("%f",&n1);
	}
	scanf("%f",&n2);
	while(n2 < 0 || n2 > 10){
		printf("nota invalida\n");
		scanf("%f",&n2);
	}	
	
	printf("media = %.2f\n",(n1+n2)/2);
	
	printf("novo calculo (1-sim 2-nao)\n");
	scanf("%i",&x);		
	while(x!=2){
		if(x==1){
			scanf("%f",&n1);
			while(n1 < 0 || n1 > 10){
				printf("nota invalida\n");
				scanf("%f",&n1);
			}
			scanf("%f",&n2);
			while(n2 < 0 || n2 > 10){
				printf("nota invalida\n");
				scanf("%f",&n2);
			}	
			printf("media = %.2f\n",(n1+n2)/2);		
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%i",&x);				
		}
		if(x<1 || x>2){
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%i",&x);	
		}
	}
	
	return 0;
}
