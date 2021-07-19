#include <stdio.h>

int main(){
	
	double n1,n2,n3,n4,n5,n6, media=0;
	int pos;
	
	scanf("%lf",&n1);
	scanf("%lf",&n2);
	scanf("%lf",&n3);
	scanf("%lf",&n4);
	scanf("%lf",&n5);
	scanf("%lf",&n6);
	
	if(n1>0){
		pos++;
		media+=n1;
	}
	if(n2>0){
		pos++;
		media+=n2;
	}	
	if(n3>0){
		pos++;
		media+=n3;
	}
	if(n4>0){
		pos++;
		media+=n4;
	}
	if(n5>0){
		pos++;
		media+=n5;
	}
	if(n6>0){
		pos++;
		media+=n6;
	}	
	printf("%i valores positivos\n%.1lf\n",pos,media/pos);
	
	
	return 0;
}
