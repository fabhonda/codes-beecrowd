#include <stdio.h>

int main(){
	
	int n, i, x;
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		scanf("%i",&x);
		if(x%2==0){
			if(x>0){
				printf("EVEN POSITIVE\n");
			}
			else if(x<0){
				printf("EVEN NEGATIVE\n");
			}
			if(x==0){
				printf("NULL\n");
			}
		}
		else{
			if(x>0){
				printf("ODD POSITIVE\n");
			}
			else{
				printf("ODD NEGATIVE\n");
			}
		}
	}
	
	
	return 0;
}
