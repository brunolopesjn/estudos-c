#include <stdio.h>
#include <stdlib.h>

//--------------------------------------------------
// Algoritmo 2.4 - Computação do fatorial
//
// Problema: Dado um número n, calcular o farotial
// (escrito como !n) onde n é maior ou igual a 0
//-------------------------------------------------


//--------------------------------------------------
// Implementação do algoritmo
//--------------------------------------------------
int fat(int number)
{
    int result = 1;
    for(int i = 2; i <= number; i++)
    {
        result *= i;
    }
    return result;
}

int main (int argc, char **argv)
{
    printf("Digite um número: ");
    int number = 0;
    scanf("%d", &number);

    if(number < 0)
    {
        printf("O número deve ser maior ou igual a zero.");
        return EXIT_FAILURE;
    }

    //----------------------------------------------
    // Utilização do algoritmo
    //----------------------------------------------
    int result = fat(number);
    printf("O fatorial do número %d é %d\n", number, result);

    return EXIT_SUCCESS;
}