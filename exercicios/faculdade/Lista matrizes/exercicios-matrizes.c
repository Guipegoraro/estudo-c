#include <stdio.h>
#include <stdlib.h>

// 1. Dada uma matriz 4x5, calcule a média dos 
// valores pares da matriz;
// 2. Dada uma matriz 5x6, gere a matriz 
// transposta, ou seja, 6x5;
// 3. Implemente a 
// soma entre duas matrizes.

void calcular_media_valores_pares_matriz();
void gerar_matriz_transposta();
void somar_matrizes();

int main(){
    calcular_media_valores_pares_matriz();
    printf("\n");

    gerar_matriz_transposta();
    printf("\n");

    somar_matrizes();

    return 0;
}

void somar_matrizes(){
    int matrizA[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrizB[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrizResultado[3][3];

    for (int i = 0; i < 3; i++)
    { 
        for (int n = 0; n < 3; n++)
        {
            matrizResultado[i][n] = matrizA[i][n] + matrizB[i][n];
        }
    }
    printf("soma da matrizA com matrizB: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int n = 0; n < 3; n++)
        {
            printf("%d\t", matrizResultado[i][n]); 
        }
        printf("\n");
    }
}

void gerar_matriz_transposta(){
    int matriz[5][6] = {{1, 2, 3, 4, 5, 6}, {7, 8, 9, 10, 11, 12}, {13, 14, 15, 16, 17, 18}, {19, 20, 21, 22, 23, 24}, {25, 26, 27, 28, 29, 30}};
    int matrizAlvo[6][5];
    
    for (int i = 0; i < 5; i++)
    {
        for (int n = 0; n < 6; n++)
        {
            matrizAlvo[n][i] = matriz[i][n];
        }
    }
    printf("Matriz transposta: \n");
    for (int i = 0; i < 6; i++)
    {
        for (int n = 0; n < 5; n++)
        {
            printf("%d\t", matrizAlvo[i][n]); 
        }
        printf("\n");
    }
    
}




void calcular_media_valores_pares_matriz(){
    int soma = 0;
    int quantidadePares = 0;
    float matriz[4][5] = {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};

    for (int i = 0; i < 4; i++)
    {
        for (int n = 0; n < 5; n++)
        {
            int valor = matriz[i][n];
            if(valor % 2 == 0){
                soma += valor;
                quantidadePares += 1;
            }
        }
    }
    if(quantidadePares > 0)
    printf("Media dos valores pares: %f", (float) soma / quantidadePares);    
    else{
        printf("Nenhum valor par encontrado");
    }
}
