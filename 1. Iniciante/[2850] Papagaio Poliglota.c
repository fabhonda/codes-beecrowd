#include <stdio.h>
#include <string.h>

int main(){
	
	char condicao[100];
	
	while(scanf("%s",&condicao)!=EOF){
		fflush(stdin);
		if(strcmp(condicao,"esquerda") == 0){
			printf("ingles\n");
		}
		if(strcmp(condicao,"direita") == 0){
			printf("frances\n");
		}
		if(strcmp(condicao,"nenhuma") == 0){
			printf("portugues\n");
		}
		if(strcmp(condicao,"as") == 0){
			printf("caiu\n");
		}
	}
	
	return 0;
}
