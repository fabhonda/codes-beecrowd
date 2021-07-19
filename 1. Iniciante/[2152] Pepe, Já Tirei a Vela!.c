#include <stdio.h>

int main(){
	
	int n,h,m,o,i;
	
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		scanf("%i %i %i",&h,&m,&o);
		if(o==1){
			if(h>=10){
				if(m>=10){
					printf("%i:%i - A porta abriu!\n",h,m);
				}
				else{
					printf("%i:0%i - A porta abriu!\n",h,m);
				}
			}
			else{
				if(m>=10){
					printf("0%i:%i - A porta abriu!\n",h,m);
				}
				else{
					printf("0%i:0%i - A porta abriu!\n",h,m);
				}
			}
			
		}
		else if(o==0){
			if(h>=10){
				if(m>=10){
					printf("%i:%i - A porta fechou!\n",h,m);
				}
				else{
					printf("%i:0%i - A porta fechou!\n",h,m);
				}
			}
			else{
				if(m>=10){
					printf("0%i:%i - A porta fechou!\n",h,m);
				}
				else{
					printf("0%i:0%i - A porta fechou!\n",h,m);
				}
			}			
		}
	}
	
	return 0;
}
