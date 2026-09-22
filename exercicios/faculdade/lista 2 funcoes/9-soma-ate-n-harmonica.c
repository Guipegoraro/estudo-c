#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Faça um programa que leia um inteiro n e utilize uma função (faça as versões iterativa e
// recursiva) para determinar a soma S da série harmônica definida a seguir:

float soma_ate_n(int n);
float soma_ate_n_recursiva(int n);

int main()
{
    int n = 5;
    // printf("digite valor para n: ");
    // scanf("%d", &n);

    float somatorio = soma_ate_n(n);

    printf("Somatorio: %f\n", somatorio);

    somatorio = soma_ate_n_recursiva(n);

    printf("Somatorio recursiva: %f\n", somatorio);

    return 0;
}

float soma_ate_n(int n)
{
    float somatorio = 0;

    for (int i = 1; i <= n; i++)
    {
        somatorio += 1.0f / i;
    }

    return somatorio;
}

float soma_ate_n_recursiva(int n)
{

    if (n == 0)
    {
        return 0;
    }

    return soma_ate_n_recursiva(n - 1) + 1.0f/n;
}
