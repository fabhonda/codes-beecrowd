#include <stdio.h>

int main(){
	
	int i, n, x, y;
	
	scanf("%i",&n);
	
	
	while(n!=0){
		int partidas[n];
		x=0, y=0;
		for(i=0;i<n;i++){
			scanf("%i",&partidas[i]);
			if(partidas[i]==0){
				x++;
			}
			else if(partidas[i]==1){
				y++;
			}
		}
		printf("Mary won %i times and John won %i times\n",x,y);
		scanf("%i",&n);
	}
	
	
	return 0;
}
