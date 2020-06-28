#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	
	float peso;
	float altura;
	float IMC;
	
	printf("Insira seu peso: \n");
	scanf("%f", &peso);
	printf("Insira sua altura: \n");
	scanf("%f", &altura);
	
	IMC = peso/(altura*altura);
	printf("Seu IMC é: %.2f \n", IMC);
	
	if(IMC < 21){
		printf("Você está abaixo do peso! \n");
	}
	else{
		if(IMC > 30){
			printf("Você está Obeso(a)! \n");
		}
		else{
			printf("Você está com peso padrão! \n");
		}
	}
	
	
}
