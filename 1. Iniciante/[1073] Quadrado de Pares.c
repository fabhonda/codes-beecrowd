#include <stdio.h>

int main(){
	
	int n,i;
	
	scanf("%i",&n);
	
	for(i=2;i<=n;i+=2){
		printf("%i^2 = %i\n",i,i*i);
	}
		
	return 0;
	
}
