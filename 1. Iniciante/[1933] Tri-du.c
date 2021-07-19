#include <stdio.h>

int main(){
	
	int c1, c2, c3;
	
	scanf("%i %i",&c1,&c2);
	
	if(c1==c2){
		c3=c1;
		printf("%i\n",c3);
	}
	if(c1>c2){
		c3=c1;
		printf("%i\n",c3);
	}
	if(c2>c1){
		c3=c2;
		printf("%i\n",c3);
	}
	
	
	return 0;
}
