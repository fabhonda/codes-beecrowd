#include <stdio.h>
#include <string.h>

int main(){
	
	int tamanho;
	char nome[1000];
	
	gets(nome);
	fflush(stdin);
	
	tamanho = strlen(nome);

	if(tamanho<=80){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	
	
	return 0;
}
