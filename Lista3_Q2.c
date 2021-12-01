#include <stdio.h>
#include <string.h>
void removerPulaLinha(char str[]);
int main()
{
    char equipamentos[5][20];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome de um equipamento de informatica: ");
        fgets(equipamentos[i], sizeof(equipamentos[i]), stdin);
        removerPulaLinha(equipamentos[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j != i)
            {
                if (stricmp(equipamentos[j], equipamentos[i]))
                {
                    printf("houve um equipamento repetido %s na possicao %d\n", equipamentos[i], i);
                }
            }
        }
    }
    return 0;
}
void removerPulaLinha(char str[]){
	str[strlen(str)-1] = '\0';
}