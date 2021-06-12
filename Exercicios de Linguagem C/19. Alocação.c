//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include<stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int *p;
    p = (int *) malloc(4);
    if (p == NULL){
        printf("Erro!\n");
    }else
    {
        *p = 10;
        printf("p: %d\n", *p);
        free(p);
    }
    
    
}
