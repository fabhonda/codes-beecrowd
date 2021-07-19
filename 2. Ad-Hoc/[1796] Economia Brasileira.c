#include <stdio.h>

int main(){
	
	int q,i,v,neg=0,pos=0;
	
	scanf("%i",&q);
	
	for(i=0;i<q;i++){
		scanf("%i",&v);
		switch(v){
			case 0:
				pos++;
				break;
			case 1:
				neg++;
				break;
		}
	}
	if(neg>=pos){
		printf("N\n");
	}
	else{
		printf("Y\n");
	}	
	
	return 0;
}
