#include <stdio.h>
#include <string.h>

int main(){
	
	long long int fatorial,fat,i;
	char s[20];
	
	scanf("%s",&s);
	
	while(strcmp(s,"0")!=0){
		fatorial = strlen(s);
		fat=1;
		
		for(i=fatorial;i>0;i--){
			fat*=i;
		}
		printf("%lli\n",fat);
		scanf("%s",&s);
	}
	
	return 0;
}
