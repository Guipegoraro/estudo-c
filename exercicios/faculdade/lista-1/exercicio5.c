#include <stdio.h>

int fatorial(int valor);
int potencia(int valor, int expoente);

int main()
{

    int n;

    printf("Entre o valor para a quantidade de n termos: ");
    scanf("%d", &n);

    int x;

    printf("Entre o valor para x: ");
    scanf("%d", &x);

    float resultado = 0;
    float termo;

    for (int i = 0; i <= n - 1; i++)
    {
        
        termo = fatorial(i);
        resultado += potencia(x, i) / termo;

        printf("Serie: %d termo: %.2f\n", i, termo);
    }

    printf("Resultado final: %.2f", resultado);

    return 0;
}

int fatorial(int valor){
    if(valor == 0){
        return 1;
    }

    if(valor == 1){
        return valor;
    }

    return valor * fatorial(valor - 1);
}

int potencia(int valor, int expoente){
    if (expoente == 0){
        return 1;
    }
    expoente -= 1;

    return valor * potencia(valor, expoente);
}