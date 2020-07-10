#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<stdlib.h>

	struct cadastro{
		char nome[30], telefone[14], email[30];
		int valorRandom;
		 
	};

	struct cadastro cliente[6];
	
	int escolha;
	char condicao;
	
	
	time_t inicio;
	
		
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	
	srand((unsigned) time(&inicio));

	printf("-------------------------------- ");
	printf("\nAGENDA VERSÃO BETA:\n");
	printf("-------------------------------- \n ");
	printf("\nEscolha as opções abaixo:\n");
	printf("\n[1]Inserir um novo cadastro; \n[2]Mostrar todos os cadastros; \n[0]Encerrar. \n");

	scanf("%d",&escolha);
	system("cls");
	
	
	switch("%d",escolha){
	
		case 1:
			for(int i=1; i<6; i++){
				
				printf("CADASTRO %d: \n", i);
				
				cliente[i].valorRandom = (rand() % 1001);
				printf("Número de Cadastro: %d \n", cliente[i].valorRandom);
				
				
				printf("Digite o seu nome: \n");
				scanf("%s",cliente[i].nome);
				fflush(stdin);
				
				printf("Digite o seu telefone: \n");
				gets(cliente[i].telefone);
				fflush(stdin);
				
				printf("Digite seu email: \n");
				gets(cliente[i].email);
				fflush(stdin);	
			
			
		}
					printf("Agenda Lotada!Deseja voltar ao menu inicial? [s]Sim  [n]Não \n", condicao);
					scanf("%c",&condicao);
					
					switch("%c", condicao){
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
			
		case 0:
			printf("Fim!");
			return(0);
		break;
			
			
		case 2:
			for(int i=1; i<6; i++){
				printf("\nCADASTRO %d: \n", i);
				printf("Número de cadastro: %d \n",cliente[i].valorRandom);
			
				printf("Nome: %s \n", cliente[i].nome);
			
				printf("Telefone:%s \n",cliente[i].telefone);
			
				printf("Email: %s \n", cliente[i].email);
			
			}
			break;
	}
		
}
