#include <stdio.h>

int main()
{
    int k;

    printf("Entre o valor para a quantidade de k termos: ");
    scanf("%d", &k);

    float resultado = 0;
    float termo;
    for (int i = 1; i <= k; i++)
    {
        termo = 1.0 / i;
        resultado += termo;
        printf("Serie: %d termo: %f\n", i, termo);
    }

    printf("Resultado final: %.2f", resultado);

    return 0;
}