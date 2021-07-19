#include <stdio.h>

int main(){
	
	int n, i;
	
	scanf("%i",&n);
	
	for(i=0;i<10;i++){
		printf("%i x %i = %i\n",i+1,n,(i+1)*n);
	}
	
	return 0;
}
