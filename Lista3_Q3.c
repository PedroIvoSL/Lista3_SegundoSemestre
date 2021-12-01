#include <stdio.h>
#include <string.h>

void removerPulaLinha(char str[]);
int main(){

    char nome[5][40], sobrenome[5][20];
    int numberLettles[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o primeiro nome: ");
        fflush(stdin);
        fgets(nome[i], 20, stdin);
        removerPulaLinha(nome[i]);
        printf("Digite o segundo nome: ");
        fflush(stdin);
        fgets(sobrenome[i], 20, stdin);
        removerPulaLinha(sobrenome[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        numberLettles[i] = strlen(nome[i]) + strlen(sobrenome[i]);
        printf("O nome %stem %d letras\n",strcat(nome[i],sobrenome[i]), numberLettles[i]);
    }
}

void removerPulaLinha(char str[]){
	str[strlen(str)-1] = ' ';
}
