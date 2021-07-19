#include <stdio.h>

int main(){
	
	int x, i;
	
	scanf("%i",&x);
	
	for(i=0;i<=x;i++){
		if(i%2!=0){
			printf("%i\n",i);
		}
	}
	
	return 0;
}
