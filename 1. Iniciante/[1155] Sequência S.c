#include <stdio.h>

int main(){
	
	float s;
	int i;
	
	for(i=0; i<=100;i++){
		if(i==0){
			s=0;
		}
		else{
			s+= ((float)1/i);
		}
	}
	
	printf("%.2f\n",s);
	
	
	return 0;
}
