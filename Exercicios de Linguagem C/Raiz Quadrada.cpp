#include<stdio.h>
#include<locale.h>
#include<math.h>


int main(){

    setlocale(LC_ALL, "Portuguese");
	
	int number, raiz, potencia;
	
	printf("Digite um número: \n");
	scanf("%d", &number);
	
	potencia = pow(number,2);
	
	raiz = sqrt(number);
	
	
	printf("Raiz quadrada de %d: \n", number);
	printf("%d \n",raiz);
	printf("O quadrado de %d: \n ",number);
	printf("%d",potencia);
}


