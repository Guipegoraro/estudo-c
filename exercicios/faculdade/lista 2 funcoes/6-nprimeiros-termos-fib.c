#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// Faça um programa que mostre na tela os n primeiros termos da sequência de Fibonacci. 
// Por exemplo, dado n = 8, temos: 1, 1, 2, 3, 5, 8, 13 e 21. A determinação do n-ésimo termo 
// da sequência deve ser feita por uma função iterativa que tem o seguinte protótipo:  
// int fibo(int n);

int fibo(int n);


int main()
{
    int numeroDeTermos;

    printf("Digite o numero de termos a serem impressos: ");
    scanf("%d", &numeroDeTermos);

    fibo(numeroDeTermos);


    return 0;
}

int fibo(int n){
    int numeroAnterior = 0;
    int numeroAtual = 1;

    for (int i = 0; i < n; i++)
    {
        int controle = numeroAtual;
        printf("Iteracao: %d valor: %d\n", i + 1, numeroAtual);

        numeroAtual += numeroAnterior;

        numeroAnterior = controle;
    }
}
