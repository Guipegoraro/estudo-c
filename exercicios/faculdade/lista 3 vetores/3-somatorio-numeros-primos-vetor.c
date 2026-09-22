#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool eh_numero_primo(int valor);
int soma_primos(int v[], int n);

int main(){

    int n = 13;
    int v[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 1, 0, -7};

    for (int i = 0; i < n; i++)
    {
        printf("Posicao: %d, valor: %d, primo: %s\n", i, v[i], eh_numero_primo(v[i]) ? "sim" : "nao");
    }

    printf("Somatorio dos primos: %d\n", soma_primos(v, n));

    return 0;
}

int soma_primos(int v[], int n){
    int somatorio = 0;
    for (int i = 0; i < n; i++)
    {
        if(eh_numero_primo(v[i])){
            somatorio += v[i];
        }
    }

    return somatorio;
}

bool eh_numero_primo(int valor)
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