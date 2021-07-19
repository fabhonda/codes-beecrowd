#include <stdio.h>

int main(){
	
	float a, b, c, triangulo, circulo, trapezio, quadrado, retangulo;
	
	scanf("%f %f %f",&a,&b,&c);
	
	triangulo = (a*c)/2;
	circulo = c*c*3.14159;
	trapezio = ((a+b)*c)/2;
	quadrado = b*b;
	retangulo = a*b;
	
	printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",triangulo,circulo,trapezio,quadrado,retangulo);
	
	return 0;
}
