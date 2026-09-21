#include <stdio.h>
#include <stdbool.h>

float fatorial(float valor);
float potencia(float valor, float expoente);

int main()
{

    int n;

    printf("Entre o valor para a quantidade de n termos: ");
    scanf("%d", &n);

    float x;

    printf("Entre o valor para x: ");
    scanf("%f", &x);

    float resultado = 1;
    bool ehPositivo = false;
    int controle = 2;

    for (int i = 1; i < n; i++)
    {
        if (ehPositivo)
        {
            resultado += potencia(x, controle) / fatorial(controle);
        }
        else
        {
            resultado -= potencia(x, controle) / fatorial(controle);
        }
        ehPositivo = !ehPositivo;
        controle += 2;
    }

    if (n == 0)
    {
        resultado = 0;
    }
    printf("Resultado final: %.2f", resultado);

    return 0;
}

float fatorial(float valor)
{
    if (valor == 0)
    {
        return 1;
    }

    if (valor == 1)
    {
        return valor;
    }

    return valor * fatorial(valor - 1);
}

float potencia(float valor, float expoente)
{
    if (expoente == 0)
    {
        return 1;
    }
    expoente -= 1;

    return valor * potencia(valor, expoente);
}