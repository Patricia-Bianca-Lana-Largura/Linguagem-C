#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int total, op;
	
	printf("Op��es de pratos dispon�veis: \n [1] Italiano \n [2] Japon�s \n [3] Salvadorenho \n");
	scanf("%d", &op);
	
	switch(op){
		case 1:
			total = total + 750;
			break;
		case 2:
			total = total + 324;
			break;
		case 3:
			total = total + 545;
			break;
	}
	printf("Op��es de bebidas dispon�veis: \n [1] Ch� \n [2] Suco de Laranja \n [3] Refrigerante \n");
	scanf("%d", &op);
	
	switch(op){
		case 1:
			total = total + 30;
			break;
		case 2:
			total = total + 80;
			break;
		case 3:
			total = total + 90;
			break;
	}
	printf("\nO total de calorias �: %d",total);
	return(0);
	
}
