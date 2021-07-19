#include <stdio.h>

int main(){
	
	int a,b,c;
	
	scanf("%i %i %i",&a,&b,&c);
	
	
	if(a>b && a>c){
		if(b>c){
			printf("%i\n%i\n%i\n",c,b,a);
		}
		else{
			printf("%i\n%i\n%i\n",b,c,a);		
		}
		printf("\n%i\n%i\n%i\n",a,b,c);
	}
	
	if(b>a && b>c){
		if(a>c){
			printf("%i\n%i\n%i\n",c,a,b);
		}
		else{
			printf("%i\n%i\n%i\n",a,c,b);		
		}
		printf("\n%i\n%i\n%i\n",a,b,c);
	}
	
	if(c>a && c>b){
		if(b>a){
			printf("%i\n%i\n%i\n",a,b,c);
		}
		else{
			printf("%i\n%i\n%i\n",b,a,c);
		}
		printf("\n%i\n%i\n%i\n",a,b,c);
	}
	
	if(a==b && a==c && b==c){
		printf("%i\n%i\n%i\n",a,b,c);
		printf("\n%i\n%i\n%i\n",a,b,c);
	}
	
	
	return 0;
}
