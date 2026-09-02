#include <stdio.h>
#include <stdlib.h>

// 2) Faça uma função que recebe três valores inteiros e retorna o maior valor. É preciso 
// considerar que podem haver dois (ou mesmo os três) parâmetros iguais como sendo o 
// maior valor. Por exemplo, os parâmetros poderiam ser 5, 8 e 8. Neste caso, a função deve 
// retornar 8.

int maior_valor(int a, int b, int c);

int main()
{
    
    int a;
    int b;
    int c;
    int maiorValor;

    printf("Entre o valor para o valor A: ");
    scanf("%d", &a);

    printf("Entre o valor para o valor B: ");
    scanf("%d", &b);

    printf("Entre o valor para o valor C: ");
    scanf("%d", &c);

    maiorValor = maior_valor(a, b, c);

    printf("maior valor eh: %d", maiorValor);

    return 0;
}

int maior_valor(int a, int b, int c){
    int maiorValor = a;

    if(b > maiorValor){
        maiorValor = b;
    }
    if(c > maiorValor){
        maiorValor = c;
    }

    return maiorValor;
}