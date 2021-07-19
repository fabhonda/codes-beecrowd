#include <stdio.h>

int main(){
	
	int a, n, i, soma;
	
	scanf("%i %i",&a,&n);
	
	while(n<=0){
		scanf("%i",&n);
	}
	
	soma=0;
	for(i=0;i<=n-1;i++){
		soma += a+i;
	}
	
	printf("%i\n",soma);
	
	
	
	return 0;
}
