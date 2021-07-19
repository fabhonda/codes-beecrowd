#include <stdio.h>

int main(){
	
	int d;
	
	scanf("%i",&d);
	
	
	if(d <= 800){
		printf("1\n");
	}
	if(d > 800 && d <= 1400){
		printf("2\n");
	}
	if(d > 1400 && d <= 2000){
		printf("3\n");
	}
	
	return 0;
		
}


