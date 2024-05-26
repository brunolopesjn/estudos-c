#include<stdio.h>
#include<stdlib.h>

//--------------------------------------------------
// Algoritmo 2.2 - Contagem
//
// Problema: Dado um conjunto de n notas de
// estudantes (dentro da faixa de 0 a 100), realize
// a contagem de estudantes que passaram no exame.
// A aprovação é concedida para aqueles que obteram
// notas igual ou maior que 50.
//--------------------------------------------------

//--------------------------------------------------
// Implementação do algoritmo
//--------------------------------------------------
int counting(int *grades, int n)
{
    int result = 0;
    for(int i = 0; i < n; i++)
    {
        if(grades[i] >= 50){
            result += 1;
        }
    }
    return result;
}

int main(int argc, char **argv)
{
    printf("Digite a quantidade de notas a serem lidas: ");
    int n = 0;
    scanf("%d", &n);

    if(n < 0)
    {
        printf("A quantidade de notas deve ser igual ou maior que zero.\n");
        return EXIT_FAILURE;
    }

    int grades[n];
    for(int i = 0; i < n; i++) 
    {
        int grade = 0;
        printf("Digite uma nota: ");
        scanf("%d", &grade);
        grades[i] = grade;
    }

    //----------------------------------------------
    // Utilização do algoritmo
    //----------------------------------------------
    int result = counting(grades, n);
    printf("A quantidade de estudantes que passaram é %d\n", result);

    return EXIT_SUCCESS;
}