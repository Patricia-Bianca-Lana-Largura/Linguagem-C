//Calculando a área e o perímetro.
//ÁREA=PI*R²
//PERIMETRO=2PI*R

#include<stdio.h>
#include<math.h>
#include<locale.h>



int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float  raio, area, perimetro, PI;
	PI = 3,1415;
	
	printf("\nDigite o raio do círculo: \n");
	scanf("%f",&raio);
	
	area = PI *pow(raio,2);
	perimetro = 2*PI*raio;
	
	printf("A área é: %.2f \n",area);
	printf("O perímetro é:%.2f \n ",perimetro);
	
	return(0);
	
	
}
