#include <stdio.h>

int main(){
	
	int n,i,x,j,k;	
	
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		scanf("%i",&x);
		for(j=0;j<x;j++){
			scanf("%i",&k);
			switch(k){
				case 1:
					printf("Rolien\n");
					break;
				case 2:
					printf("Naej\n");
					break;
				case 3:
					printf("Elehcim\n");
					break;
				case 4:
					printf("Odranoel\n");
					break;
			}
		}
	}
	
	return 0;
}
