#include <stdio.h>
#include <stdlib.h>

//--------------------------------------------------
// Algoritmo 2.7 - Invertendo os dígitos de um
// número inteiro
//
// Problema: Projete um algoritmo que aceita um
// número positio e inverta a ordem dos dígitos
//-------------------------------------------------

//--------------------------------------------------
// Implementação do algoritmo
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

int main (int argc, char **argv)
{
    printf("Digite um número: ");
    int number;
    scanf("%d", &number);
    if(number < 0)
    {
        printf("O número deve ser igual ou maior do que zero.");
        return EXIT_FAILURE;
    }

    //----------------------------------------------
    // Utilização do algoritmo
    //----------------------------------------------
    int result = reverse_number(number);
    printf("O numero %d invertido é igual a %d\n", number, result);

    return EXIT_SUCCESS;
}