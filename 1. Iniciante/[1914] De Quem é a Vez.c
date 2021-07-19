#include <stdio.h>

int main(){
	
	int qtd, n, m, i;
	char nome[100], nome2[100], valor[6], valor2[6];
	
	scanf("%i",&qtd);
	
	for(i=0;i<qtd;i++){
		scanf("%s %s %s %s",&nome,&valor,&nome2,&valor2);
		scanf("%i %i",&n,&m);
		
		if((n+m)%2==0){
			if((strcmp(valor,"PAR"))==0){
				printf("%s\n",nome);
			}
			else{
				printf("%s\n",nome2);	
			}
		}
		else if((n+m)%2!=0){
			if((strcmp(valor,"IMPAR"))==0){
				printf("%s\n",nome);
			}
			else{
				printf("%s\n",nome2);	
			}
		}			
	}
	
	
	
	return 0;
}
