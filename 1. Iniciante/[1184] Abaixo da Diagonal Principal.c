#include <stdio.h>
#include <string.h>

int main(){
	
	int i, j, qtd=0;
	char operacao[2];
	float m[12][12], soma;
	
	scanf("%s",&operacao);	
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			scanf("%f",&m[i][j]);
		}
	}
	
	soma=0;
	
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			if(i!=j && i>j){
				soma+=m[i][j];
				qtd++;
			}
		}
	}
	
	if((strcmp(operacao,"S"))==0){
		printf("%.1f\n",soma);
	}
	if((strcmp(operacao,"M"))==0){
		printf("%.1f\n",soma/qtd);
	}
	
	return 0;
}
