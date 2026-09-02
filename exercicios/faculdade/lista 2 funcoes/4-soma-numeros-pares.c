#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// 4) Faça uma função que recebe 2 parâmetros, x e y, e calcule a soma dos números impares 
// entre eles (sem contar com eles mesmos). Repare que a função deve levar em conta de 
// que x pode ser maior do que y. Por exemplo, para x = 6 e y = -5, temos a seguinte soma 
// (em ordem crescente): -3 + (-1) + 1 + 3 + 5 = 5. Outro exemplo: para x = 3 e y = 10 temos 5 + 
// 7 + 9 = 21.

int soma_impares(int x, int y);

int main()
{
    int x;
    int y;
    int total;

    printf("Entre o valor x: ");
    scanf("%d", &x);
    printf("Entre o valor y: ");
    scanf("%d", &y);

    total = soma_impares(x, y);

    printf("total: %d", total);

    return 0;
}

int soma_impares(int x, int y){
    int valorMaior = x;
    int valorMenor = y;

    if (valorMaior < y){
        valorMaior = y;
        valorMenor = x;
    }

    int total = 0;
    for (int i = valorMenor + 1; i < valorMaior; i++)
    {
        if(i % 2 == 0){
            continue;
        }
        total += i;
    }

    return total;
}