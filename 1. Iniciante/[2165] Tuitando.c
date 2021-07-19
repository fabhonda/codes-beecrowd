#include <stdio.h>
#include <string.h>

int main(){
	
	int tamanho;
	char tweet[1000];
	
	gets(tweet);
	fflush(stdin);
	
	tamanho = strlen(tweet);

	if(tamanho<=140){
		printf("TWEET\n");
	}
	else{
		printf("MUTE\n");
	}
	
	
	return 0;
}
