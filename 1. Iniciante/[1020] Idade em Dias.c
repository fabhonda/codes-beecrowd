#include <stdio.h>

int main(){
	
	int n, anos, meses, dias;
	
	scanf("%i",&n);

	anos = n/365;
	meses = (n%365)/30;
	dias = n-(anos*365+meses*30);
	
	printf("%i ano(s)\n%i mes(es)\n%i dia(s)\n",anos, meses, dias);
	
	return 0;
}
