/*programa que receba quatro números inteiros, calcule 
e apresente a média aritmética entre eles.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int nota1, nota2, nota3, nota4;
	float resultado;
	
	printf("Digite a primeira nota: \n");
	scanf("%d",&nota1);
	
	printf("Digite a segunda nota: \n");
	scanf("%d",&nota2);
	
	printf("Digite a terceira nota: \n");
	scanf("%d",&nota3);
	
	printf("Digite a quarta nota: \n");
	scanf("%d",&nota4);
	
	resultado = (nota1 + nota2 + nota3 + nota4) / 4;
	printf("\nSua média é: %.2f", resultado);
}
