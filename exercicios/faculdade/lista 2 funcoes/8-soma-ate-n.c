#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Faça um programa que leia um inteiro n e determine a soma S da seguinte forma: 1 + 2 + 3
// + 4 + ... + n. Escreva duas versões de funções: iterativa e recursiva.

int soma_ate_n(int n);
int soma_ate_n_recursiva(int n);

int main()
{
    int n;
    printf("digite valor para n: ");
    scanf("%d", &n);

    int somatorio = soma_ate_n(n);

    printf("Somatorio: %d\n", somatorio);

    somatorio = soma_ate_n_recursiva(n);

    printf("Somatorio recursiva: %d\n", somatorio);

    return 0;
}

int soma_ate_n(int n)
{
    int somatorio = 0;

    for (int i = 1; i <= n; i++)
    {
        somatorio += i;
    }

    return somatorio;
}

int soma_ate_n_recursiva(int n)
{

    if (n == 0)
    {
        return 0;
    }

    return soma_ate_n_recursiva(n - 1) + n;
}
