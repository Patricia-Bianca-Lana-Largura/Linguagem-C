// Calculadora de Opera��es B�sicas.
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
	printf("A soma entre os n�meros %.1f e %.1f �: %.1f \n", n1, n2, soma);
	
	//subtra��o:
	sub = n1 - n2;
	printf("A subtra��o �: %.1f \n",sub);
	
	//multiplica��o:
	mult = n1 * n2;
	printf("A multiplica��o �: %.1f \n",mult);
	
	//divis�o:
	div = n1 / n2;
	printf("A divis�o �: %.1f \n",div);
	return(0);
	
}
