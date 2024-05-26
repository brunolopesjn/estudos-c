#include <stdio.h>
#include <stdlib.h>

//--------------------------------------------------
// Algoritmo 2.1 - Troca de valores entre duas
// variáveis
//
// Problema: Dado duas variáveis a e b, trocar os
// valores atribuídos a elas 
//--------------------------------------------------


//--------------------------------------------------
// Implementação do algoritmo
//--------------------------------------------------
void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char **argv)
{

    int a = 0;
    int b = 0;

    printf("Digite o valor da variável a: ");
    scanf("%d", &a);
    printf("Digite o valor da variável b: ");
    scanf("%d", &b);
    printf("\n");

    printf("Valore da variável a antes da troca: %d\n", a);
    printf("Valore da variável b antes da troca: %d\n", b);
    printf("\n");

    //----------------------------------------------
    // Utilização do algoritmo
    //----------------------------------------------
    swap(&a, &b);

    printf("Valore da variável a após a troca: %d\n", a);
    printf("Valore da variável b após a troca: %d\n", b);
    printf("\n");

    return EXIT_SUCCESS;
}