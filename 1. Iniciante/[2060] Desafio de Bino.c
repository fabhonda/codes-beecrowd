#include <stdio.h>

int main(){
	
	int n, l, dois=0, tres=0, quatro=0, cinco=0, i;
	
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		scanf("%i",&l);
		if(l%2==0){
			dois++;
		}
		if(l%3==0){
			tres++;
		}
		if(l%4==0){
			quatro++;
		}
		if(l%5==0){
			cinco++;
		}
	}
	
	printf("%i Multiplo(s) de 2\n%i Multiplo(s) de 3\n%i Multiplo(s) de 4\n%i Multiplo(s) de 5\n",dois,tres,quatro,cinco);
	
	
	return 0;
}
