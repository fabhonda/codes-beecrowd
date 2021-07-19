#include <stdio.h>
#include <string.h>

int main(){
	
	int i;
	char equacao[1000],parenteses[1000];
	
	while(scanf("%s",&equacao)!=EOF){
		for(i=0;i<strlen(equacao);i++){
			if(equacao[i] == "(" || equacao[i] == ")" ){
				parenteses[i] = equacao[i];
				printf("%s",parenteses[i]);
			}
		}
	}
	
	
	return 0;
}
