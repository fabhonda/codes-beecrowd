#include <stdio.h>

int main(){
	
	int x, y, i;
	
	scanf("%i",&x);
	scanf("%i",&y);
	
	if(x<y){
		for(i=x+1;i<y;i++){
			if(i%5==2 || i%5==3){
				printf("%i\n",i);				
			}
		}
	}
	else{
		for(i=y+1;i<x;i++){
			if(i%5==2 || i%5==3){
				printf("%i\n",i);				
			}
		}		
	}
	
	
	return 0;
}
