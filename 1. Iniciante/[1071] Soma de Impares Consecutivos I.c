#include <stdio.h>

int main(){
	
	int x,y,i,impares=0;
	
	scanf("%i",&x);
	scanf("%i",&y);
	
	if(x>y){
		for(i=y+1;i<x;i++){
			if(i%2!=0){
				impares+=i;
			}
		}
	}
	else{
		for(i=x+1;i<y;i++){
			if(i%2!=0){
				impares+=i;
			}
		}
	}
	
	printf("%i\n",impares);
	
	return 0;
}
