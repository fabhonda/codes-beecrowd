#include <stdio.h>

int main(){
	
	int l,c;
	
	scanf("%i",&l);
	scanf("%i",&c);
	
	if(l%2==0){
		if(c%2==0){
			printf("1\n");
		}
		if(c%2!=0){
			printf("0\n");
		}
	}
	if(l%2!=0){
		if(c%2==0){
			printf("0\n");
		}
		if(c%2!=0){
			printf("1\n");
		}
	}
	
	
	return 0;
}
