#include <stdio.h>
#include <math.h>

int main(){
	
	int n;
	double fibonacci=0;
	
	scanf("%i",&n);
	
	fibonacci = (pow(((1+(sqrt(5)))/2),n) - pow(((1-(sqrt(5)))/2),n))/sqrt(5);
	
	printf("%.1lf\n",fibonacci);
	
	return 0;
}
