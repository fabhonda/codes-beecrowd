#include <stdio.h>

int main(){
	
	int n, m, i, soma;
	
	scanf("%i %i",&m,&n);
	while(m>0 && n>0){
		soma=0;
		if(m<n){
			for(i=m;i<n+1;i++){
				printf("%i ",i);
				soma+=i;
				if(i==n){
					printf("Sum=%i\n",soma);
				}
			}
		}
		else{
			for(i=n;i<m+1;i++){
				printf("%i ",i);
				soma+=i;
				if(i==m){
					printf("Sum=%i\n",soma);
				}
			}
		}
		scanf("%i %i",&m,&n);
	}
	
	return 0;
}
