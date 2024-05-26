#include <stdio.h>
#include <stdlib.h>

//--------------------------------------------------
// Algoritmo 2.8 - Conversão de base
//
// Problema: Converter um número decimal para o seu
// correspondente na representação octal. 
//-------------------------------------------------

//--------------------------------------------------
// Algoritmo 2.7
//--------------------------------------------------
int reverse_number(int number)
{
    int result = 0;
    div_t div_result = {number, 0};
    while(div_result.quot > 0)
    {
        div_result = div(div_result.quot, 10);
        result = result * 10 + div_result.rem;
    }
    return result;
}

//--------------------------------------------------
// Implementação do algoritmo
//--------------------------------------------------
int to_octal(int number)
{
    int result = 0;
    div_t div_result = { number, 0 };
    while (div_result.quot > 0)
    {
        div_result = div(div_result.quot, 8);
        result = 10 * result + div_result.rem;
    }
    
    return reverse_number(result);
}

int main (int argc, char **argv)
{
    printf("Digite um número decimal: ");
    int number;
    scanf("%d", &number);

    //----------------------------------------------
    // Utilização do algoritmo
    //----------------------------------------------
    int octal = to_octal(number);
    printf("O número decimal %d é o número octal %d\n", number, octal);

    return EXIT_SUCCESS;
}