//Bibliotecas----------------
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

//Globais--------------------
typedef struct 
{
    int ra;
    int matprof;
    char nome[30];
    char ext_arq[5];
}cadastro;

cadastro filac[5];
int op, tamf;

//Cadastro de itens da fila -------------------
void inserir(){
    int continuar;
    do
    {
        printf("\n Cadastro na Fila:\n");
            if (tamf<5){
                printf("\n RA: ");
                scanf("%d", &filac[tamf].ra);
				fflush(stdin);
				
                printf("\n N�mero da Matr�cula do Professor: ");
                scanf("%d", &filac[tamf].matprof);
				fflush(stdin);
				
                printf("\n Nome do Arquivo: ");
                fflush(stdin);
                gets(filac[tamf].nome);

                printf("\n Extens�o do Arquivo: ");
                fflush(stdin);
                gets(filac[tamf].ext_arq);

                tamf++;
                printf("\n Inserido com Sucesso!\n");
            }else
            {
                printf("\n Fila Cheia!");
                getche();
                break;
            }
            printf("\n Continuar inserindo ([1]Sim | [2]N�o)?");
            scanf("%d", &continuar);
    } while (continuar == 1);
    
}


//Consulta de Fila----------------------------
void consulta(){
    printf("\n Consultas na fila\n");
    if (tamf != 0)
    {
        printf("----------------------------------------------------------------------------------\n");
        printf("\n RA    Matr�cula    Nome do Arquivo   Extens�o do Arquivo    \n");
        printf("%d %d %s \n", filac[0].ra, filac[0].matprof, filac[0].nome, filac[0].ext_arq);
        printf("----------------------------------------------------------------------------------\n");
        
    }
    else{
        printf("\nfila vazia\n");
        printf("\nAperte enter para retornar ao menu!\n");
        getche();
    }

}
//Remo��o de item da fila------------------------
void remover(){
    int i;
    int retirar;
    int continuar;

    do
    {
        printf("\n Retirar da Fila:\n");
        if (tamf != 0)
        {
        printf("----------------------------------------------------------------------------------\n");
        printf("\n RA    Matr�cula    Nome do Arquivo   Extens�o do Arquivo    \n");
        printf("%d %d %s \n", filac[0].ra, filac[0].matprof, filac[0].nome, filac[0].ext_arq);
        printf("----------------------------------------------------------------------------------\n");
        printf("\n Confirmar retirada da Fila (1)-Sim ou (2)- N�o?");
        scanf("%d",&retirar);

        if (retirar==1)
        {
            for ( i = 0; i < tamf; i++)
            {
                filac[i] = filac[i+1];
                tamf--;
                printf("\n Retirado da Fila!\n");
                system("pause");
                system("cls");
                getche();
            }
            
        }else
            printf("\n Retirada Cancelada!\n");
        }
        else {
        	printf("\nFila vazia! Nenhum conte�do na fila no momento\n");
        	system("pause");
        	system("cls");
        	getche();
        	break;
		}
		printf("\nDeseja retirar outro cadastro da fila?\n (1)-Sim ou (2)- N�o\n");
		scanf("%d", &continuar);
        } while (continuar == 1);  
}
//Esvaziar fila----------------------------
void esvaziar(){
    int i;
    int retirar;
    int continuar;

    do
    {
        printf("\n Esvaziar Fila:\n");
        if (tamf != 0)
        {
        printf("\n Confirmar esvaziamento da fila (1)-Sim ou (2)- N�o?");
        scanf("%d",&retirar);
		i++;
		
        if (retirar==1)
        { do {
		
            for ( i = 0; i < tamf; i++)
            {
                filac[i] = filac[i+1];
                tamf--;
                printf("\n Removido da Fila!\n");
                system("pause");
                system("cls");
                getche();
            }
        } while (tamf != 0); 
        
        }else
            printf("\n Remo��o Cancelada!\n");
        }
        else {
        	printf("\nFila vazia! N�o h� itens dispon�veis para remo��o\n");
        	
        	getche();
        	break;
		}
        } while (continuar == 1);  
}
// Listar registros cadastrados ----------------------------
void listar() {
	int i;
	printf("\nRegistro na Fila:\n");
	if (tamf != 0) {
		system("cls");

		printf("\n___________________________________________________________________________________________________________________");
		printf("\nNome do Arquivo			 RA		Matr�cula do Professor		Extens�o do Arquivo\n");
		printf("___________________________________________________________________________________________________________________\n");
		for (i=0;i<tamf;i++) 

		printf("%-15s  %10d	 %15d	%25s\n",filac[i].nome, filac[i].ra,  filac[i].matprof, filac[i].ext_arq);

		printf("\nQuantidade registros na fila: %d", tamf);
		} else {
			printf("\nN�o tem nenhuma fila registrada no momento!\n");
			printf("\nAperte enter para voltar ao menu!");
			getche();
		}
	}

main(){
	setlocale(LC_ALL, "Portuguese");
	tamf = 0;
	do {
		listar();
		printf("\n\n====================================================================================================================");
		printf("\n\nArmazenamento de Informa��es do Sistema Acad�mico!");
		printf("\nSelecione uma das op��es abaixo:\n");
    	printf("\n[1] Inserir um novo elemento na fila;\n[2] Remover elemento da fila; \n[3] Mostrar Alunos Registrados;\n[4] Esvaziar fila; \n[5] Encerrar programa;\n");
    	printf("\nO que deseja fazer? ");
    	scanf("%d", &op);
    	switch(op) 
		{
    		case 1: 
				inserir(); 
			break;
			
    		case 2: 
				remover(); 
			break;
			
    		case 3: 
				listar(); 
			break;
    		case 4: 
				esvaziar(); 
			break;
			
    		case 5:
				op = 0;
			break;
			
    		default: 
				printf("\nOp��o inv�lida!");
		}
	} while(op !=0);
}

