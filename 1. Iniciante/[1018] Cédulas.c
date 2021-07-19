#include <stdio.h>

int main(){
	
	int n, cem, cinq, vinte, dez, cinco, dois, um, valor;
		
	scanf("%i",&n);
	
	valor=n;
	
	cem = n/100;
	if(cem>0){
		n = n - cem*100;
	}
	else{
		cem = 0;
	}
	
	cinq = n/50;
	if(cinq>0){
		n = n - cinq*50;
	}
	else{
		cinq = 0;
	}

	vinte = n/20;
	if(vinte>0){
		n = n - vinte*20;
	}
	else{
		vinte = 0;
	}

	dez = n/10;
	if(dez>0){
		n = n - dez*10;
	}
	else{
		dez = 0;
	}
	
	cinco = n/5;	
	if(cinco>0){
		n = n - cinco*5;
	}
	else{
		cinco = 0;
	}
	
	dois = n/2;	
	if(dois>0){
		n = n - dois*2;
	}
	else{
		dois = 0;
	}

	um = n/1;	
	if(um>0){
		n = n - um*1;
	}
	else{
		um = 0;
	}
	
	printf("%i\n%i nota(s) de R$ 100,00\n%i nota(s) de R$ 50,00\n%i nota(s) de R$ 20,00\n%i nota(s) de R$ 10,00\n%i nota(s) de R$ 5,00\n%i nota(s) de R$ 2,00\n%i nota(s) de R$ 1,00\n",valor,cem,cinq,vinte,dez,cinco,dois,um);
	
	return 0;
}
