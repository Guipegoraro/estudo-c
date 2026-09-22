#include <stdio.h>

// Escreva uma função que recebe dois vetores de mesma capacidade n e compara se os 
// mesmos são iguais, ou seja, se contêm os mesmos valores e na mesma ordem. A função 
// deve ser booleana, ou seja, se forem iguais retorna 1, caso contrário retorna 0. Protótipo 
// da função: 
// int compara(float a[], float b[], int n); 

int compara(float a[], float b[], int n); 

int main(){

    float a[5] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    float b[5] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};

    printf("a e b (iguais):          %d\n", compara(a, b, 5));
    
    return 0;
}

int compara(float a[], float b[], int n){
    for (int i = 0; i < n; i++)
    {
        if(a[i] != b[i]){
            return 0;
        }
    }

    return 1;
}

