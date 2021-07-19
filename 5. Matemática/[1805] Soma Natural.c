#include <stdio.h>

int main(){
	
	int i, a, b;
	unsigned long long int soma=0;
	
	scanf("%i %i",&a,&b);
	
	for(i=a;i<=b;i++){
		soma+=i;
	}
	
	printf("%llu\n",soma);
	
	
	return 0;
}
