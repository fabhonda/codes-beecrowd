#include <stdio.h>
#include <math.h>

int main(){
	
	int r,l,volume;
	
	scanf("%i %i",&r,&l);
	
	volume = (4 * 3.1415 * (pow(r,3)))/3;
	
	printf("%i\n",l/volume);
	
	
	return 0;
}
