#include <stdio.h>

int main(){
	
	int x,m,e;
	
	scanf("%i %i",&x,&m);
	while(x!=0 && m!=0){
		e=(m*x);
		printf("%i\n",e);
		e=0;
		scanf("%i %i",&x,&m);
	}
	
	
	return 0;
}
