//Faça uma programa que leia um número inteiro e imprima seu sucessor e antecessor.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");

	int x;
	char opcao;
	
	printf("\nDigite um número: ");
	scanf("%d",&x); 
	
	printf("\nSeu sucessor é: %d",++x);
	printf("\nSeu antecessor é: %d",x-2);
	
	printf("\nDeseja realizar a operação novamente? \n[s]Sim \n[n]Não\n");
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
