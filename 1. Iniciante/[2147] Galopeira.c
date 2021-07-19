//1 centésimo de segundo = divisão de 1 segundo por cem. 
#include <stdio.h>
#include <string.h>

int main(){
	
	int c,i,tamanho;
	float t;
	char nome[10000];
	
	scanf("%i",&c);
	
	for(i=0;i<c;i++){
		scanf("%s",nome);
		fflush(stdin);
		tamanho = strlen(nome);
		t = (float)tamanho/100;
		printf("%.2f\n",t);
	}
	
	
	
	return 0;
}
