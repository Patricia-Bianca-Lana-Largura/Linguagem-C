#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Converter uma temperatura em graus Celsius e apresentá-la em Fahrenheit.
//Fórmula: F = (9*C+160)/5.

int main (){
	setlocale(LC_ALL,"Portuguese");
	float f, c;
	
	printf("Informe a Temperatura em Celsius:");
	scanf("%f",&c);
	
	f= (9 * c + 160) /5;
	
	printf("A temperatura em Fahrenheit é: %.1f F",f);
	
	return 0;
}
