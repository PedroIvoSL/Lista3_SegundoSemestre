#include <stdio.h>
#include <string.h>

int main()
{
    char nome[100], nome2[100];
    int opc;
    do
    {
        printf("Digite o nome da primeira pessoa: ");
        fflush(stdin);
        fgets(nome, 100, stdin);
        printf("Digite o nome da segunda pessoa: ");
        fflush(stdin);
        fgets(nome2, 100, stdin);
        strlwr(nome2);
        printf("O nome minusculo: %s\n", nome2);
        strupr(nome);
        printf("O nome maiusculo: %s\n", nome);
        printf ("--------- OPCOES ---------\n");
        printf ("1- Escrever outros nomes\n");
        printf ("0- Sair\n");
        scanf("%d", &opc);
    } while (opc == 1);
}