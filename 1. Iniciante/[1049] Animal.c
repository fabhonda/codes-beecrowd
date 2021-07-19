#include <stdio.h>
#include <string.h>

int main(){
	
	char vertebras[20], classe[20], alimentacao[20];
	
	gets(vertebras);
	gets(classe);
	gets(alimentacao);
	
	
	if(strcmp(vertebras,"vertebrado")==0){
		if(strcmp(classe,"ave")==0){
			if(strcmp(alimentacao,"carnivoro")==0){
				printf("aguia\n");
			}
			if(strcmp(alimentacao,"onivoro")==0){
				printf("pomba\n");
			}
		}
		if(strcmp(classe,"mamifero")==0){
			if(strcmp(alimentacao,"onivoro")==0){
				printf("homem\n");
			}
			if(strcmp(alimentacao,"herbivoro")==0){
				printf("vaca\n");
			}
		}
	}

	
	if(strcmp(vertebras,"invertebrado")==0){
		if(strcmp(classe,"inseto")==0){
			if(strcmp(alimentacao,"hematofago")==0){
				printf("pulga\n");
			}
			if(strcmp(alimentacao,"herbivoro")==0){
				printf("lagarta\n");
			}
		}
		if(strcmp(classe,"anelideo")==0){
			if(strcmp(alimentacao,"hematofago")==0){
				printf("sanguessuga\n");
			}
			if(strcmp(alimentacao,"onivoro")==0){
				printf("minhoca\n");
			}
		}
	}
	
	return 0;
}
