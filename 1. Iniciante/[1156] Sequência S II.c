#include <stdio.h>

int main(){
	
	float s;
	int i, j=2;
	
	for(i=0;i<=39;i++){
		if(i==0){
			s=0;
		}
		if(i==1){
			s=1;
		}
		else if(i%2!=0){
			//printf("\n%i / %i ",i,j);
			s+= ((float)i/(float)j);
			j*=2;
		}
	}
	
	printf("%.2f\n",s);
	
	
	return 0;
}
