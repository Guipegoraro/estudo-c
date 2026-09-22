#include <stdio.h>
#include <stdbool.h>
#include <math.h>
// 3) Implemente as duas formas para calcular o valor aproximado de π, conforme as 
// séries a seguir. O número de termos é definido pelo usuário. 
 
// a) Série de Gregory-Leibniz: int main()
main()
{
    int n;

    printf("Entre o valor para a quantidade de n: ");
    scanf("%d", &n);

    float resultado = 0;
    float termo;
    float denominador = 1;

    for (int i = 1; i <= n; i++)
    {
        termo = pow(-1.0, i + 1) * 4.0 / denominador;
        resultado += termo;

        denominador += 2;
        printf("Serie: %d, Termo: %f\n", i, termo);
    }
    printf("Resultado final: %.4f", resultado);

    return 0;
}