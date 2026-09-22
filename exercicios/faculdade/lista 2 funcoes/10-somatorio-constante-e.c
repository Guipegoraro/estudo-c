#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Faça um programa que leia um inteiro n e utilize uma função (faça as versões iterativa e 
// recursiva) para calcular o somatório que determina o valor da constante e: 

float fatorial(float valor);
float calcular_constante_e(int n);
float calcular_constante_e_recursiva(int n);


int main()
{
    int n = 5;
    printf("digite valor para n: ");
    scanf("%d", &n);

    float somatorio = calcular_constante_e(n);

    printf("Somatorio: %f\n", somatorio);

    somatorio = calcular_constante_e_recursiva(n);

    printf("Somatorio recursiva: %f\n", somatorio);

    return 0;
}

float calcular_constante_e(int n)
{
    float somatorio = 0;
 
    for (int i = 0; i <= n ; i++)
    {
        somatorio += 1.0f / fatorial(i);
    }

    return somatorio;
}

float calcular_constante_e_recursiva(int n)
{

    if (n == 0)
    {
        return 1;
    }


    return calcular_constante_e_recursiva(n - 1) + 1.0f/fatorial(n);
}


float fatorial(float valor)
{
    if (valor == 0)
    {
        return 1;
    }

    if (valor == 1)
    {
        return 1;
    }

    return valor * fatorial(valor - 1);
}
