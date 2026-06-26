#include <stdio.h>
#include <stdlib.h>
#include "personagem.h"

struct personagem
{
    char nome[100];
    char classe[100];
    int nivel;
    int hp;
};

Personagem* cria_party(int num_membros)
{
    return (Personagem*) malloc(num_membros * sizeof(Personagem));
}

void registra_membros(Personagem* party, int num_membros)
{
    int i;

    for(i = 0; i < num_membros; i++)
    {
        printf("\nPersonagem %d\n", i + 1);

        printf("Nome: ");
        scanf("%99s", party[i].nome);

        printf("Classe: ");
        scanf("%99s", party[i].classe);

        printf("Nivel: ");
        scanf("%d", &party[i].nivel);

        printf("HP: ");
        scanf("%d", &party[i].hp);
    }
}

void exibe_relatorio(const Personagem* party, int num_membros)
{
    int i;

    printf("\n===== RELATORIO DA EQUIPE =====\n");

    for(i = 0; i < num_membros; i++)
    {
        printf("\nPersonagem %d\n", i + 1);
        printf("Nome: %s\n", party[i].nome);
        printf("Classe: %s\n", party[i].classe);
        printf("Nivel: %d\n", party[i].nivel);
        printf("HP: %d\n", party[i].hp);
    }
}

void libera_party(Personagem* party)
{
    free(party);
}