#include <stdio.h>

int main(){
	
	int inicial, final;
	
	scanf("%i %i",&inicial,&final);
	
	if(final>inicial){
		printf("O JOGO DUROU %i HORA(S)\n",final-inicial);
	}
	else if(inicial>final){
		printf("O JOGO DUROU %i HORA(S)\n",(24-inicial)+final);
	}
	else if(inicial==final){
		printf("O JOGO DUROU 24 HORA(S)\n");
	}
	
	return 0;
}
