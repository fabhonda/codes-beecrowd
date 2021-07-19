#include <stdio.h>

int main(){
	
	int x,y,volta=1,ini;
	
	scanf("%i %i",&x,&y);
	ini=y;
	
	while(y-x<ini){
		x+=x;
		y+=y;
		volta++;
	}
	printf("%i\n",volta+1);
	
	return 0;
}
