#include <stdio.h>
#include <stdlib.h>

int tipo_triangulo(float x, float y, float z);

int main()
{
    
    float a;
    float b;
    float c;
    int tipo;

    printf("Entre o valor para o lado A: ");
    scanf("%f", &a);

    printf("Entre o valor para o lado B: ");
    scanf("%f", &b);

    printf("Entre o valor para o lado C: ");
    scanf("%f", &c);

    tipo = tipo_triangulo(a, b, c);

    printf("Tipo do triangulo eh: %d", tipo);

    return 0;
}

int tipo_triangulo(float x, float y, float z){

    if(x + y <= z || x + z <= y || z + y <= x)
    { //nao eh triangulo
        return 0;
    }

    if (x == y && y == z)
    {// equilatero
        return 1;
    }

    if (x == y || y == z || x == z)
    {//isosceles
        return 2;
    }

    if (x != y && x != z && z != y)
    {//escaleno
        return 3;
    }
    
    return 0;
}