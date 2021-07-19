#include <stdio.h>

int main(){
	
	int i, j;
	float v[3], aux, a, b, c;
	
	
	scanf("%f %f %f",&a,&b,&c);
	
	v[0] = a;
	v[1] = b;
	v[2] = c;
	
	for(i=0;i<3;i++){
		for(j=0;j<3-i;j++){
			if(v[j]<v[j+1]){
				aux = v[j+1];
				v[j+1] = v[j];
				v[j] = aux;
			}
		}
	}
	
	a = v[0];
	b = v[1];
	c = v[2];
	
	if(a>= b+c){
		printf("NAO FORMA TRIANGULO\n");
	}
	else{
		if((a*a) == (b*b) + (c*c)){
			printf("TRIANGULO RETANGULO\n");
		}
		if((a*a) > (b*b) + (c*c)){
			printf("TRIANGULO OBTUSANGULO\n");
		}
		if((a*a) < (b*b) + (c*c)){
			printf("TRIANGULO ACUTANGULO\n");
		}
		if(a==b && b==c && a==c){
			printf("TRIANGULO EQUILATERO\n");
		}
		if((a==b && c!=a) || (b==c && a!=b) || (a==c && b!=a)){
			printf("TRIANGULO ISOSCELES\n");
		}
	}
	
	
}
