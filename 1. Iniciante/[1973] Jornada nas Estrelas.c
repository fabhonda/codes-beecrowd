#include <stdio.h>

int main(){
	
	int n,i,carneiros;
	
	scanf("%i",&n);
	
	int estrelas[n];
	
	for(i=0;i<n;i++){
		scanf("%i",&estrelas[i]);
		carneiros+=estrelas[i];
		if(estrelas[i]!=0){
			carneiros--;
		}
		if(estrelas[i]%2==0){
			i-=2;
		}
		else{
			i+=2;
		}
	}
	printf("%i\n",carneiros);
	
	
	
	return 0;
}
