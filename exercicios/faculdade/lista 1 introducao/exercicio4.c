#include <stdio.h>

int fatorial(int valor);

int main()
{
    int n;

    printf("Entre o valor para a quantidade de n termos: ");
    scanf("%d", &n);

    float resultado = 0;
    float termo;

    for (int i = 1; i <= n; i++)
    {
        termo = fatorial(i);
        resultado += 1 / termo;

        printf("Serie: %d termo: %f\n", i, termo);
    }

    printf("Resultado final: %.2f", resultado);

    return 0;
}

int fatorial(int valor){

    if(valor == 0 || valor == 1){
        return valor;
    }

    return valor * fatorial(valor - 1);
}