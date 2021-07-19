#include <stdio.h>

int main(){

	char alfabeto[26];
	int n, lampada, i;
	
	while((scanf("%s",&alfabeto))!=EOF){
		scanf("%i",&n);
		char mensagem[n-1];
		for(i=0;i<n-1;i++){
			scanf("%i ",&lampada);
			mensagem[i] = alfabeto[lampada];
		}
		for(i=0;i<n;i++){
			if(i==n-1){
				printf("%s\n",mensagem[i]);	
			}
			else{
				printf("%s",mensagem[i]);
			}
		}
	}


}
		


