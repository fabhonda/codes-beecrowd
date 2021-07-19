#include <stdio.h>

int main(){
	
	int i=1, j=7, cont=0;
	
	while(i<=9){
		if(cont==2){
			printf("I=%i J=%i\n",i,j);
			cont=-1;
			j+=4;
			i+=2;
		}
		else{
			printf("I=%i J=%i\n",i,j);
			j--;
		}
		cont++;
	}
	
	return 0;
}
