#include <stdio.h>

int main(){
	
	int n,la,lb,sa,sb;
	
	scanf("%i",&n);
	scanf("%i %i",&la,&lb);
	scanf("%i %i",&sa,&sb);
	
	if(n<la || n>lb){
		printf("impossivel\n");
	}
	else{
		if(n<sa || n>sb){
			printf("impossivel\n");
		}
		else{
			printf("possivel\n");
		}
	}
	
	
	
	return 0;
}
