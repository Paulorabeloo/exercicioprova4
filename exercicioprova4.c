/* Carregue um vetor de nomes de alunos e um vetor das medias dos alunos, N alunos,
desenvolva uma consulta, que permita visualizar todos os alunos que vier a estar com a média
abaixo de 6. */

#include <stdio.h>
#include <string.h>

int numeroAlunos = 0, i = 0;
char nomesAlunos[50][50];
float mediasAlunos[50];
char consulta[50][50];

void coleta()
{
    printf("Digite o número de Alunos:\n");
    scanf("%i", &numeroAlunos);

    for (i = 0; i < numeroAlunos; i++)
    {
        printf("Digite o nome do aluno:\n");
        scanf("%s", nomesAlunos[i]);
        printf("Digite a média do aluno: \n");
        scanf("%f", &mediasAlunos[i]);
    }
}

void comparacaoresultado()
{
    int contador = 0;
    for (i = 0; i < numeroAlunos; i++)
    {
        if (mediasAlunos[i] < 6.0)
        {
            strcpy(consulta[contador], nomesAlunos[i]); //copia o nome do aluno armazenado no array nomesAlunos para o array consulta.
            contador++;
        }
    }
    printf("Alunos com média abaixo de 6.0:\n");
    for (i = 0; i < contador; i++)
    {
        printf("%s\n", consulta[i]);
    }
}

int main() {
    coleta();
    comparacaoresultado();
    return 0;
}
