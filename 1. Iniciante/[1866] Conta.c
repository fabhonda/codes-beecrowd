#include <stdio.h>

int main(){
	
	int c,n,i,j,soma;
	
	scanf("%i",&c);
	
	for(i=0;i<c;i++){
		soma=0;
		scanf("%i",&n);
		for(j=0;j<n;j++){
			if(j%2==0){
				soma+=1;
			}
			else{
				soma-=1;
			}
		}
		printf("%i\n",soma);
	}
	
	
	return 0;
}
