#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int contador = 0;
	int valorRandom = 0;
	
	time_t inicio;
	
	
	//Inicializador do random
	srand((unsigned) time(&inicio));
	
	//Gerando valores randomicos
	for(contador = 0; contador < 5; contador++){
		valorRandom = rand() % 10001;
		printf("Random de 0 a 10000: %d \n", valorRandom);
	}
}
