#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    float c;

    printf("Entre o valor par ao lado A: ");
    scanf("%f", &a);

    printf("Entre o valor par ao lado B: ");
    scanf("%f", &b);

    printf("Entre o valor par ao lado C: ");
    scanf("%f", &c);

    if (a == b && a == c)
    {
        printf("Triangulo ABC eh equilatero");
        return 0;
    }

    if (a == b && a != c)
    {
        printf("Triangulo ABC eh isosceles");
        return 0;
    }

    if (a != b && a != c)
    {
        printf("Triangulo ABC eh escaleno");
        return 0;
    }

    return 0;
}
