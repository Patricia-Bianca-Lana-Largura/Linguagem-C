//Fa�a uma programa que leia um n�mero inteiro e imprima seu sucessor e antecessor.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");

	int x;
	char opcao;
	
	printf("\nDigite um n�mero: ");
	scanf("%d",&x); 
	
	printf("\nSeu sucessor �: %d",++x);
	printf("\nSeu antecessor �: %d",x-2);
	
	printf("\nDeseja realizar a opera��o novamente? \n[s]Sim \n[n]N�o\n");
	scanf("%s",&opcao);
	
	if(opcao=='s'){
		system("cls");
		return(main());
	}
	else{
		printf("Fim");
		return(0);
	}

}
