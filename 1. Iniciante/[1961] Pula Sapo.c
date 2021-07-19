#include <stdio.h>

int main(){
	
	int p, n, over=1,i,min;
	
	scanf("%i %i",&p,&n);
	int canos[n];
	
	for(i=0;i<n;i++){
		scanf("%i",&canos[i]);
		if(i==0){
			min = canos[i];
		}
		else{
			if(canos[i] > min){
				if(canos[i] - min > p){
					over=0;
				}
				else{
					min = canos[i];
				}				
			}
			else if(canos[i] < min){
				if(min - canos[i] > p){
					over=0;
				}
				else{
					min = canos[i];
				}				
			}

		}
	}
	
	if(over==1){
		printf("YOU WIN\n");
	}
	else if(over==0){
		printf("GAME OVER\n");
	}
	
	return 0;
}
