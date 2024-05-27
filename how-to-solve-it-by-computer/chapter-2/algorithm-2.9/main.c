#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

//--------------------------------------------------
// Algoritmo 2.9 - Converter caracteres em números
//
// Problema: Dada uma representação em caractere de
// um número inteiro, realizar a conversão do mesmo
// em sua representação decimal
//-------------------------------------------------

bool is_valid_number(char *str_number, size_t size)
{
    bool result = true;
    for(int i = 0; i < size; i++)
    {
        if (!isdigit(str_number[i])){
            result = false;
            break;
        }
    }
    return result;
}

//--------------------------------------------------
// Implementação do algoritmo
//--------------------------------------------------
int convert_to_int(char *str_number, size_t size)
{
    int result = 0;
    for(int i = 0; i < size; i++)
    {
        result = result * 10 + ((int)str_number[i] - 48);
    }
    return result;
}

int main(int argc, char **argv)
{

    printf("Digite um número decimal positivo: ");
    char str_number[10];
    scanf("%s", str_number);

    int size = strlen(str_number);
    // if(!is_valid_number(str_number, size));
    // {
    //     printf("O valor digitado não é uma representação em caractere de um número decimal válida\n");
    //     return EXIT_FAILURE;
    // }

    //----------------------------------------------
    // Utilização do algoritmo
    //----------------------------------------------
    int result = convert_to_int(str_number, size);
    printf("A representação em caractere convertida em número decimal é: %d\n", result);

    return EXIT_SUCCESS;

}