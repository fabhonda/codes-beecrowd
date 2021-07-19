 #include <stdio.h>
 
 int main(){
 	
 	int n, m, j, i, troco, valores[6] = {2,5,10,20,50,100};
 	
 	scanf("%i %i",&n,&m);
 	
 	troco = m-n;
 	
 	for(j=0;j<5;j++){
 		for(i=j;i<6;i++){
 			if(troco == valores[i]+valores[i+1]){
 				printf("yes");
			 }
		 }
	 }
 	
 		
 	return 0;
 }
 
 
 
 

 
 
 
 //2, 5, 10, 20, 50 e 100.
