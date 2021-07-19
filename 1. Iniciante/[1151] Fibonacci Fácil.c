#include <stdio.h>

int main(){
	
	int n,i,fib, ant, prox;
	
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		if(i==0){
			fib=0;
			ant=0;
			prox=fib;
			printf("%i ",fib);
		}
		if(i==1){
			fib=1;
			ant=0;
			prox=fib;
			printf("%i ",fib);
		}
		else if(i==n-1){
			fib = ant+prox;
			ant = prox;
			prox = fib;
			printf("%i\n",fib);			
		}
		if(i!=0 && i!=1 && i!=n-1){
			fib = ant+prox;
			ant = prox;
			prox = fib;
			printf("%i ",fib);
		}

	}
	
	
	
	return 0;
}
