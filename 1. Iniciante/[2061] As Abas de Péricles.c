#include <stdio.h>
#include <string.h>

int main(){
	
	int n,m,i;
	char acao[7];
	
	scanf("%i %i",&n,&m);
	
	for(i=0;i<m;i++){
		scanf("%s",&acao);
		if((strcmp(acao,"fechou"))==0){
			n++;
		}
		if((strcmp(acao,"clicou"))==0){
			n--;
		}
	}
	
	printf("%i\n",n);
	
	
	return 0;
}
