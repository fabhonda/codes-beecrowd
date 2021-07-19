#include <stdio.h>

int main(){
	
	int t,n,k,garrafas,i;
	
	scanf("%i",&t);
	
	for(i=0;i<t;i++){
		scanf("%i %i",&n,&k);
		garrafas = (n/k)+(n%k);
		printf("%i\n",garrafas);
	}
	
	return 0;
}
