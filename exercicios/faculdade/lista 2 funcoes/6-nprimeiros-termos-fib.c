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

    for (int i = 1; i <= numeroDeTermos; i++)
    {
        printf("Iteracao: %d valor: %d\n", i, fibo(i));
    }
    

    return 0;
}

int fibo(int n){
    int anterior = 0;
    int atual = 1;

    for (int i = 0; i < n; i++)
    {
        int proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    return anterior;
}
