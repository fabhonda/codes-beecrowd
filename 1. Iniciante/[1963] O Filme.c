#include <stdio.h>

int main(){
	
	double a, b, x;
	
	scanf("%lf %lf",&a,&b);
	
	x = (float)((100*(b-a))/a);
	
	printf("%.2lf%%\n",x);
	
	
	
	return 0;
}
