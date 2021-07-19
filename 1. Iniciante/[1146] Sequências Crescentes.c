#include <stdio.h>

int main(){
	
	int x,i;
	
	scanf("%i",&x);
	
	while(x!=0){
		for(i=1;i<=x;i++){
			if(i==x){
				printf("%i",i);
			}
			else{
				printf("%i ",i);
			}
		}
		printf("\n");
		scanf("%i\n",&x);
	}
	
	
	return 0;
}
