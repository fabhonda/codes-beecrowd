#include <stdio.h>

int main(){
	
	int p, produto, i, q;
	float total=0;
	
	scanf("%i",&p);
	
	for(i=0;i<p;i++){
		scanf("%i %i",&produto,&q);
		switch(produto){
			case 1001:
				total+=(1.5*q);
				break;
			case 1002:
				total+=(2.5*q);
				break;	
			case 1003:
				total+=(3.5*q);
				break;				
			case 1004:
				total+=(4.5*q);
				break;
			case 1005:
				total+=(5.5*q);
				break;				
		}
	}
	printf("%.2f\n",total);
	
	
	
	
	return 0;
}
