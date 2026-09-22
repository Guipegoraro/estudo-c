#include <stdio.h>

void fibonacci(int v[], int n); 

int main(){

    int n = 10;
    // printf("Entre o valor para n: ");
    // scanf("%d", &n);
    int v[n];

    fibonacci(v, n);

    for (int i = 0; i < n; i++)
    {
        printf("Posicao: %d, valor: %d\n", i, v[i]);
    }

    return 0;
}


void fibonacci(int v[], int n)
{
    int anterior = 0;
    int atual = 1;

    for (int i = 0; i < n; i++)
    {
        v[i] = atual;
        int proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }
}
