#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30], email[40];
	int escolha, telefone[11];
	

	printf("-------------------------------- ");
	printf("\nAGENDA VERSÃO BETA:\n");
	printf("-------------------------------- \n ");
	
	printf("\nEscolha as opções abaixo:\n");
	printf("\n[1]Inserir um novo cadastro; \n[2]Mostrar todos os cadastros; \n[0]Encerrar. \n");


	scanf("%d",&escolha);

	switch("%d", escolha){
		case 1:
			for(int number = 0; number < 5; number++){
			
				printf("\nInforme seu nome: \n");
				scanf("%s", &nome);
				fflush(stdin);
		
				printf("Informe seu telefone: \n");
				scanf("%d",&telefone);
				fflush(stdin);
				
				printf("Informe seu email: \n");
				scanf("%s", &email);
				fflush(stdin);
				
			}
			
			break;
		
		case 2:
		
			
			break;
		
		case 0: 
		if (escolha==0){
			printf("Fim!");
			return(0);
			
			break;
		}
			
		
			
		default:
			printf("Erro: Opção inválida!\n");
			system("pause");
			system("cls");
			fflush(stdin);
			return(main());
			
		
	}
	
		
		
	
}

