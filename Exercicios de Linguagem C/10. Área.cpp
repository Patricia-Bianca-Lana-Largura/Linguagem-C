//Calculando a �rea e o per�metro.
//�REA=PI*R�
//PERIMETRO=2PI*R

#include<stdio.h>
#include<math.h>
#include<locale.h>



int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float  raio, area, perimetro, PI;
	PI = 3,1415;
	
	printf("\nDigite o raio do c�rculo: \n");
	scanf("%f",&raio);
	
	area = PI *pow(raio,2);
	perimetro = 2*PI*raio;
	
	printf("A �rea �: %.2f \n",area);
	printf("O per�metro �:%.2f \n ",perimetro);
	
	return(0);
	
	
}
