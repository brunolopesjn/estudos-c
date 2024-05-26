#include <stdio.h>
#include <stdlib.h>


//--------------------------------------------------
// Algoritmo 2.3 - Somatório de um conjunto de
// números
//
// Problema: Dado um conjunto de n números, projete
// um algoritmo que realize o somatório desses
// números e retorne a soma resultante. Assuma que 
// n é maior ou igual a zero
//--------------------------------------------------


//--------------------------------------------------
// Implementação do algoritmo
//--------------------------------------------------
int sum(int *numbers, int n)
{
    int result = 0;
    for(int i = 0; i < n; i++)
    {
        result += numbers[i];       
    }
    return result;
}

int main (int argc, char **argv)
{
    printf("Digite a quantidade de números a serem somados: ");
    int n = 0;
    scanf("%d", &n);
    if(n < 0)
    {
        printf("A quantidade deve ser maior ou igual a zero");
        return EXIT_SUCCESS;
    }

    int numbers[n];
    for( int i = 0; i < n; i++)
    {
        int number = 0;
        printf("Digite um número: ");
        scanf("%d", &number);
        numbers[i] = number;
    }

    //----------------------------------------------
    // Utilização do algoritmo
    //----------------------------------------------
    int result = sum(numbers, n);
    printf("O somatório dos números é %d\n", result);

    return EXIT_SUCCESS;
}