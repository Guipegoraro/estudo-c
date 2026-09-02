#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int CalcularSexo(void);

int main()
{
    int sexo; // 1 - masculino, 2 - feminino
    char nome[40];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite 1 para sexo masculino e 2 para feminino: ");
    scanf("%d", &sexo);

    CalcularSexo();

    if (sexo == 1)
    {
        printf("Ilmo Sr. %s", nome);
        return 0;
    }

    printf("Ilma Sra. %s", nome);
    return 0;
}

int CalcularSexo(void)
{

    for (int i = 0; i < 20; i++)
    {
        system("cls");
        printf("|");
        printf(" CALCULANDO SEXO, AGUARDE ");
        printf("|");
        Sleep(99);

        system("cls");
        printf("/");
        printf(" CALCULANDO SEXO, AGUARDE ");
        printf("/");
        Sleep(99);

        system("cls");
        printf("--");
        printf(" CALCULANDO SEXO, AGUARDE ");
        printf("--");
        Sleep(99);

        system("cls");
        printf("\\");
        printf(" CALCULANDO SEXO, AGUARDE");
        printf("\\");
        Sleep(99);
    }
    system("cls");
    printf("SEXO CALCULADO, BEM VINDO\n");
    return 0;
}
