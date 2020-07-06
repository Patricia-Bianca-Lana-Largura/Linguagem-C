//Exemplo de uso de condicionais IF, ELSE e do operador l�gico AND (&&);

#include<stdio.h>
#include<locale.h> //biblioteca para conseguir usar o setlocale

int main(){
	/*setlocale � para definir a linguagem como portugu�s
	e conseguir obter o uso de acentua��es*/
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30];
	int idade;
	
	printf("Informe seu nome: \n");
	scanf("%s",&nome);
	printf("Informe sua idade: \n");
	scanf("%d",&idade);
	
	printf("Nome: %s",nome);
	printf("\nIdade: %d \n",idade);
	
	if(idade<=18){
		printf("O valor do plano �: R$ 50,00 \n");
	}
	else{
		if((idade>18) && (idade<29)){
			printf("O valor do plano �: R$ 70,00 \n");
		}
		else{
			if((idade>30) && (idade<=45)){
				printf("O valor do plano �: R$ 90,00 \n");
			}
			else{
				if((idade>=46) && (idade<65)){
					printf("O valor do plano �: R$ 130,00 \n");
				}
				else{
					printf("O valor do plano �: R$ 170,00 \n");
					
				}
			}
		}
	}
	return(0);
}
