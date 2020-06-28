// Calculadora de Operações Básicas.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, soma, sub, mult, div;
	
	printf("Informe o primeiro valor: \n");
	scanf(" %f",&n1);
	printf("Informe o segundo valor: \n");
	scanf(" %f", &n2);

	//soma:
	soma = n1 + n2;
	printf("A soma entre os números %.1f e %.1f é: %.1f \n", n1, n2, soma);
	
	//subtração:
	sub = n1 - n2;
	printf("A subtração é: %.1f \n",sub);
	
	//multiplicação:
	mult = n1 * n2;
	printf("A multiplicação é: %.1f \n",mult);
	
	//divisão:
	div = n1 / n2;
	printf("A divisão é: %.1f \n",div);
	return(0);
	
}
