#include <stdio.h>

int main(){
	
	int i;
	double n[100], x;
	
	scanf("%lf",&x);
	
	for(i=0;i<100;i++){
		if(i==0){
			n[i] = x;
		}
		else{
			n[i] = n[i-1]/2;
		}
	}
	
	for(i=0;i<100;i++){
		printf("N[%i] = %.4lf\n",i,n[i]);
	}
	
	return 0;
}
