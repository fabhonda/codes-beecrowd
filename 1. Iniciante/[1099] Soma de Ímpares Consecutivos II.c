#include <stdio.h>

int main(){
	
	int n, x, y, soma, j, i;
	
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		scanf("%i %i",&x,&y);
		soma=0;
		if(x<y){
			for(j=x+1;j<y;j++){
				if(j%2!=0){
					soma+=j;
				}
			}
		}
		else{
			for(j=y+1;j<x;j++){
				if(j%2!=0){
					soma+=j;
				}
			}
		}
		printf("%i\n",soma);
		
		
	}
	
	return 0;
}
