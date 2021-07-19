#include <stdio.h>

int main(){
	
	long long int fatorial, fatorial2;
	int m,n;
	
	while(scanf("%i %i",&m,&n)!=EOF){
		fatorial=1;
		fatorial2=1;
		while(m>=1){
			fatorial*=m;
			m--;
		}
		while(n>1){
			fatorial2*=n;
			n--;
		}
		printf("%lli\n",fatorial+fatorial2);
	}
	
	
	return 0;
}
