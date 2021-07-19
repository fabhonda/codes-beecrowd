#include <stdio.h>

int main(){
	
	int i=1, j=7;
	
	while(i<=9){
		if(j==5){
			printf("I=%i J=%i\n",i,j);
			j=7;
			i+=2;
		}
		else{
			printf("I=%i J=%i\n",i,j);
			j--;
		}
	}
	
	return 0;
}
