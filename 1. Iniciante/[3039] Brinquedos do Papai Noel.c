#include<stdio.h>
#include<string.h>

struct Natal{
	char sexo[1];
	char nome[20];
};

int main(){
	
	int n, i, carrinhos=0, bonecas=0;
	scanf("%d",&n);
	struct Natal presentes[n];
	
	for(i=0;i<n;i++){
		scanf("%s",&presentes[i].nome);
		scanf("%s",&presentes[i].sexo);
	}
	
	for(i=0;i<n;i++){
		if(strcmp(presentes[i].sexo,"M")==0) carrinhos++;
		else bonecas++;
	}
	
	printf("%d carrinhos\n",carrinhos);
	printf("%d bonecas\n",bonecas);
	
	return 0;
}
