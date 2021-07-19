#include <stdio.h>

int main(){
	
	int maiorAB, maiorABC, a, b, c;
	
	scanf("%i",&a);
	scanf("%i",&b);
	scanf("%i",&c);
	
	maiorAB = (a+b+(abs(a-b)))/2;
	maiorABC = (maiorAB+c+(abs(maiorAB-c)))/2;
	
	printf("%i eh o maior\n",maiorABC);
	return 0;
}
