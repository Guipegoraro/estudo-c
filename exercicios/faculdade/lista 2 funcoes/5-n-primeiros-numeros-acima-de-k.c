#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// 5) Faça um programa que, dados k e n, mostre na tela os n primeiros números primos acima
// de k. A verificação do número (se é ou não é primo) deve ser feita através de uma função.

bool ehNumeroPrimo(int valor);

int main()
{
    int k;
    int n;

    printf("Entre K: ");
    scanf("%d", &k);
    printf("Entre N: ");
    scanf("%d", &n);
    int controle = k + 1;
    for (int i = 0; i < n;)
    {
        if (ehNumeroPrimo(controle))
        {
            printf("primo: %d\n", controle);
            i++;
        }
        controle++;
    }

    return 0;
}

bool ehNumeroPrimo(int valor)
{
    if (valor <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= valor; i++)
    {
        if (valor % i == 0)
        {
            return false; 
        }
    }

    return true; 
}