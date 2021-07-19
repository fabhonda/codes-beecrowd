#include <stdio.h>

int main(){
	
	int x;
	
	scanf("%i",&x);
	
	if(x%2==0){
		printf("%i\n",x+2);
	}
	else{
		printf("%i\n",x+1);
	}
	
	
	return 0;
}
