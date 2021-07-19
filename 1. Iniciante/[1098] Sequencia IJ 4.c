#include <stdio.h>

int main(){
	
	double i, k=0, j;
	
	
	for(i=0;i<=1.8;i+=0.2){
		for(j=0;j<3;j++){
			if(i==0 || i==1){
				printf("I=%i J=%i\n",(int)i,(int)(k+1));
				k++;				
			}
			else{
				printf("I=%.1f J=%.1f\n",i,k+1);
				k++;				
			}

		}
		k-=2.8;
	}
	
	i=2;
	for(j=3;j<6;j++){
		printf("I=%i J=%i\n",(int)i,(int)(j));
	}
	
	return 0;
}
