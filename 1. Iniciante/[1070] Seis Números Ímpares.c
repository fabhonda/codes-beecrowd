#include <stdio.h>

int main(){
	
	int x, i;
	
	scanf("%i",&x);
	
	if(x%2!=0){
		for(i=0;i<6;i++){
			printf("%i\n",x);
			x+=2;
		}		
	}
	else{
		x++;
		for(i=0;i<6;i++){
			printf("%i\n",x);
			x+=2;
		}	
	}
	
	return 0;
}
