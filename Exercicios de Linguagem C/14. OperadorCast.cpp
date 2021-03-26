#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
 
int main (int argc, char *argv[]){
	
	setlocale(LC_ALL,"Portuguese");
	
	
	//O operador cast converte os resultados de um tipo de dados para outro.
	float div;
	div =(float) 9/2;
	
	printf("Divisão: %.2f",div);
	
	return 0;
}
