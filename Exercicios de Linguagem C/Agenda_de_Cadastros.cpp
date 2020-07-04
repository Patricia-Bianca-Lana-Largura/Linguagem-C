#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int escolha;
	char cadastro[5][3];
	int linha;
	char condicao;

	printf("-------------------------------- ");
	printf("\nAGENDA VERSÃO BETA:\n");
	printf("-------------------------------- \n ");
	printf("\nEscolha as opções abaixo:\n");
	printf("\n[1]Inserir um novo cadastro; \n[2]Mostrar todos os cadastros; \n[0]Encerrar. \n");

	scanf("%d",&escolha);
	system("cls");


	switch("%d", escolha)
	{
		case 1:
		
			for(int i=0; i<1; i++)
			{
				printf("\nInforme seu nome: \n");
				scanf("%s", &cadastro[0][0]);
				fflush(stdin);
				
				printf("Informe seu telefone: \n");
				scanf("%s",&cadastro[0][1]);
				fflush(stdin);
				
				printf("Informe seu email: \n");
				scanf("%s", &cadastro[0][2]);
				fflush(stdin);
				
				linha++;
				
			
			
			
			
		
			printf("Você deseja fazer um novo cadastro? \n [s]Sim  ou [n]Não %c",condicao);
			scanf("%c",&condicao);
			
			
			if(&condicao=="%c s")
			{
				return(main());
				system("cls");
				
			}else{
				printf("Fim!");
				return(0);
			}
		
			
			break;
		}
		
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

