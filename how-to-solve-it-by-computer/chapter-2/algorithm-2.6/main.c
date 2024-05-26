#include <stdio.h>
#include <stdlib.h>

//--------------------------------------------------
// Algoritmo 2.6 - Geração da sequência de Fibonacci
//
// Problema: Gere e imprima os primeiros n termos da
// sequência de Fibonacci, onde n é igual ou maior
// que 1. Os primeiros termos da sequência são:
//
//       0, 1, 1, 2, 3, 5, 8, 13, ...
//-------------------------------------------------

//--------------------------------------------------
// Implementação do algoritmo
//--------------------------------------------------
void print_fibonacci_terms(int n_terms)
{
    int a = 0;
    int b = 1;
    int i = 2;

    while(i < n_terms){
        printf(" %d %d", a, b);
        a = a + b;
        b = a + b;
        i = i + 2;
    }

    if (i == n_terms)
    {
        printf(" %d %d", a, b);
    }
    else 
    {
        printf(" %d", a);
    }
    printf("\n");
}

int main (int argc, char **argv)
{
    printf("Digite a quantidade de termos da sequência de Fibonacci a ser gerada: ");
    int n_terms;
    scanf("%d", &n_terms);

    if(n_terms <= 0)
    {
        printf("A quantidade de termos deve ser igual ou maior do que 1.\n");
        return EXIT_FAILURE;
    }

    //----------------------------------------------
    // Utilização do algoritmo
    //----------------------------------------------
    print_fibonacci_terms(n_terms);

    return EXIT_SUCCESS;
}