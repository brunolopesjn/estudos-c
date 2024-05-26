#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//--------------------------------------------------
// Algoritmo 2.5 - Computação da função seno
//
// Problema: Projete um algoritmo que calcule a
// função sin(x) (seno do angulo x, em radianos)
// definido como a expansão da série infinita:
//
// sin(x)=(x/1!)-(x^3/3!)+(x^5/5!)-(x^7/7!)+...
//-------------------------------------------------


//--------------------------------------------------
// Implementação do algoritmo
//--------------------------------------------------
double mysin(double x)
{
    double error = 1e-6;
    double term = x;
    double tsin = x;
    double x2 = x * x;
    int i = 1;

    while(fabs(term) > error)
    {
        i = i + 2;
        term = -term * x2 / (i * (i - 1));
        tsin = tsin + term;
    }

    return tsin;
}

int main(int argc, char **argv)
{
    printf("Digite um angulo em radianos: ");
    double angle = 0.0;
    scanf("%lf", &angle);

    if (angle < 0) {
        printf("O valor do ângulo não pode ser menor do que zero");
        return EXIT_FAILURE;
    }

    //----------------------------------------------
    // Utilização do algoritmo
    //----------------------------------------------
    double result = mysin(angle);
    printf("O valor do seno de %.10lf é %.10lf\n", angle, result);

    return EXIT_SUCCESS;
}