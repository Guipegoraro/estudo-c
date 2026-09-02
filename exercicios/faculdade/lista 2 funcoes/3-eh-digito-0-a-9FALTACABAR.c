#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 3) Escreva um programa que informa se um caractere digitado pelo usuário representa um 
// dígito de 0 a 9. A verificação deve ser feita por uma função booleana (int) que recebe um 
// char como parâmetro. Caso o caractere seja um dígito, converta-o para um valor inteiro e o 
// armazene em uma variável int. Em seguida, mostre o valor inteiro na tela.

bool eh_digito_0_a_9(char *digito);

int main()
{
    char *digito;
    bool ehDigito0A9;
    int digitoInd;
    char *pointerFim;


    printf("Entre o digito a ser verificado: ");
    scanf("%s", &digito);

    ehDigito0A9 = eh_digito_0_a_9(digito);

    if(ehDigito0A9 == true){

        printf("Digito é de 0 a 9, digito: %d", digitoInt);
    } else{
        printf("Digito não é de 0 a 9, digito: %s", digito);
    }

    return 0;
}

bool eh_digito_0_a_9(char *digito){
    

    return false;
}