#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int n;

    printf("Entre o valor para a quantidade de n: ");
    scanf("%d", &n);

    double resultado = 3;
    double termo = 1;
    double denominador1 = 2;
    double denominador2 = 3;
    double denominador3 = 4;

    for (int i = 1; i <= n; i++)
    {
        if(n != 1){
            termo = pow(-1.0, i + 1) * 4.0 / (denominador1 * denominador2 * denominador3);
            resultado += termo;
            
            denominador1 += 2;
            denominador2 += 2;
            denominador3 += 2;
        }
        printf("Serie: %d, Termo: %lf\n", i, termo);
    }
    printf("Resultado final: %.6lf", resultado);

    return 0;
}