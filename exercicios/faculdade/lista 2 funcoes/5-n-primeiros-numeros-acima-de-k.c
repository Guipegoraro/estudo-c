#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// 5) Faça um programa que, dados k e n, mostre na tela os n primeiros números primos acima 
// de k. A verificação do número (se é ou não é primo) deve ser feita através de uma função.

int primos_acima_de_k(int k, int n);

int main()
{
    int valor1;
    int valor2;
    int total;

    printf("Entre o valor 1: ");
    scanf("%d", &valor1);
    printf("Entre valor 2 : ");
    scanf("%d", &valor2);

    total = soma_impares(valor1, valor2);

    printf("total: %d", total);

    return 0;
}

int soma_impares(int valor1, int valor2){
    int valorMaior = valor1;
    int valorMenor = valor2;

    if (valorMaior < valor2){
        valorMaior = valor2;
        valorMenor = valor1;
    }

    int total = 0;
    for (int i = valorMenor + 1; i < valorMaior; i++)
    {
        if(i % 2 == 0){
            continue;
        }
        total += i;
    }

    return total;
}