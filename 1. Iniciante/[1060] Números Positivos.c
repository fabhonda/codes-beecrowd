#include <stdio.h>

int main(){
	
	double n1,n2,n3,n4,n5,n6;
	int pos;
	
	scanf("%lf",&n1);
	scanf("%lf",&n2);
	scanf("%lf",&n3);
	scanf("%lf",&n4);
	scanf("%lf",&n5);
	scanf("%lf",&n6);
	
	if(n1>0){
		pos++;
	}
	if(n2>0){
		pos++;
	}	
	if(n3>0){
		pos++;
	}
	if(n4>0){
		pos++;
	}
	if(n5>0){
		pos++;
	}
	if(n6>0){
		pos++;
	}	
	
	printf("%i valores positivos\n",pos);
	
	
	return 0;
}
