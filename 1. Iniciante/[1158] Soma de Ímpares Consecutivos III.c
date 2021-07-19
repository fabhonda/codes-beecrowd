#include <stdio.h>

int main(){
	
	int n, i, j, s=0, x, y, k;
	
	scanf("%i",&n);
	for(k=0;k<n;k++){
		scanf("%i %i",&x,&y);
		j=0;
		i=x;
		s=0;
		while(j<y){
			if(i%2!=0){
				s+= i;
				j++;
			}
			i++;
		}
		printf("%i\n",s);
	}
	
	return 0;
}
