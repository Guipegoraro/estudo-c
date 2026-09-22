#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void busca_todos(int v[], int n, int chave, int indices[]);

int main(){
    int n = 10;
    int v[10] = {3, 6, 7, -1, 3, 12, 9, 8, 3, 17};
    int indices[n];

    busca_todos(v, n, 3, indices);

    for (int i = 0; i < n; i++)
    {
        printf("indices: Posicao %d, valor: %d\n", i, indices[i]);
    }
    
    return 0;
}


void busca_todos(int v[], int n, int chave, int indices[]){
    int iterador = 0;

    for (int i = 0; i < n; i++)
    {
        if(v[i] == chave){
            indices[iterador] = i;
            iterador++;
        }
    }

    for (int i = iterador; i < n + 1; i++)
    {
        indices[i] = -1;
    }
    
}
