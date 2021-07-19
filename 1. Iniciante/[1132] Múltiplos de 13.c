#include <stdio.h>

int main(){
	
	int x,y,soma=0,i;
	
	scanf("%i",&x);
	scanf("%i",&y);
	
	if(x>y){
		for(i=y;i<=x;i++){
			if(i%13!=0){
				soma+=i;
			}
		}
	}
	else if(y>x){
		for(i=x;i<=y;i++){
			if(i%13!=0){
				soma+=i;
			}
		}
	}
	
	printf("%i\n",soma);
	
	return 0;
}
