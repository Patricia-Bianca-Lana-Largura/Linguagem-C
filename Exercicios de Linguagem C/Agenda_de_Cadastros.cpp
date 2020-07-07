#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int escolha;
	char nome[5][30], telefone[5][14], email[5][30];
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
			
			for(int i=0; i<5; i++)
			{
			
				printf("\nInforme seu nome: \n");
				scanf("%s", &nome[linha]);
				fflush(stdin);
				
				printf("Informe seu telefone: \n");
				scanf("%s",&telefone[linha]);
				fflush(stdin);
				
				printf("Informe seu email: \n");
				scanf("%s", &email[linha]);
				fflush(stdin);
				
				linha++;
			}
		
		
			printf("Agenda lotada! Você deseja voltar ao menu inicial? \n [s]Sim  ou [n]Não %c",condicao);
			scanf("%c",&condicao);
			
			switch("%c", condicao)
			{
				case 's':
					return(main());
					system("cls");
					
				break;
				case 'n':
					printf("Fim!");
					return(0);
					
				break;
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

