/*Calcular qual o percentual do etanol em rela��o a gasolina.
per = (R$ etanol)/(R$ gasolina) */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float etanol, gasolina;
	
	printf("Qual o pre�o do etanol?" );
	scanf("%f", &etanol);
	fflush(stdin);
	
	printf("Qual o valor da gasolina? ");
	scanf("%f",&gasolina);
	fflush(stdin);
	
	printf("O percentual �: %.2f", (etanol/gasolina));
	
	
	return 0;
}
