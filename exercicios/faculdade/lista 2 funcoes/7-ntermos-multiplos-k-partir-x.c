#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Escreva uma função que calcula o somatório dos n termos que são múltiplos de k a partir 
// de x. Os parâmetros são determinados pelo usuário e a função é chamada pelo programa 
// principal, que em seguida mostra o resultado na tela. Exemplo: para n = 3, k = 4 e x = 18, 
// temos, 20 + 24 + 28 = 72. Protótipo da função: 
// int soma_especial(int n, int k, int x);

int soma_especial(int n, int k, int x);

int main()
{
    int n;
    int k;
    int x;
    printf("digite valor para n: ");
    scanf("%d", &n);

    printf("digite valor para k: ");
    scanf("%d", &k);

    printf("digite valor para x: ");
    scanf("%d", &x);

    int somatorio = soma_especial(n, k, x);

    printf("Somatorio: %d", somatorio);

    return 0;
}

int soma_especial(int n, int k, int x){
    int somatorio = 0;
    int valor = x;
    int encontrados = 0;

    while (encontrados < n)
    {
        if (valor % k == 0)
        {
            somatorio += valor;
            encontrados++;
        }
        valor++;
    }

    return somatorio;
}


