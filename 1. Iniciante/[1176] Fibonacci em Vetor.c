#include <stdio.h>

int main(){
	
	int t, n, j, i;
	
	scanf("%i",&t);
	
	for(j=0;j<t;j++){
		scanf("%i",&n);
		long long int fibonacci[n];
		if(n==0){
			fibonacci[0] = 0;
		}
		if(n==1){
			fibonacci[0] = 0;
			fibonacci[1] = 1;			
		}
		else{
			fibonacci[0] = 0;
			fibonacci[1] = 1;
			for(i=2;i<=n;i++){
				fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
			}
		}
		printf("Fib(%i) = %lli\n",n,fibonacci[n]);

	}
	
	
	return 0;
}
