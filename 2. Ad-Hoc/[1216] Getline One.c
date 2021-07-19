#include <stdio.h>

int main(){
	double distancia, media=0, casas=0;
	char nome[50];
	
	while(scanf("%s %lf",&nome,&distancia)!=EOF){
		media += distancia;
		casas++;
	}	
	
	printf("%.1lf",media/casas);
}



