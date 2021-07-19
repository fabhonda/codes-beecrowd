#include <stdio.h>
#include <string.h>

int main(){
	
	int i,n;
	char first[9] = "Feliz nat";
	char second[2] = "l!";
	
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		strcat(first,"a");
	}
	
	strcat(first,second);
	
	printf("%s\n",first);
	
	
	return 0;
}
