#include <stdio.h>
// Faça um algoritmo que mostre na tela os k termos da série definida a seguir e, ao 
// final, mostre o somatório dos termos (o resultado converge pa
int main()
{

    int n = 3;

    printf("Entre o valor para a quantidade de n: ");
    scanf("%d", &n);

    float resultado = 0;
    float termo;

    for (int i = 1; i <= n; i++)
    {
        termo = 1.0 / i;

        if (i % 2 == 0)
        {
            resultado -= termo;
        }
        else
        {
            resultado += termo;
        }
        printf("Serie: %d, Termo: %f\n", i, termo);
    }
    printf("Resultado final: %.2f", resultado);

    return 0;
}