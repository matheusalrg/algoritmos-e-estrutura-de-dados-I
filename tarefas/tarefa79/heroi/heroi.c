#include <stdio.h>
#include <stdlib.h>
#include "heroi.h"

struct heroi
{
    char nome[100];
    int hp;
    int ataque;
};

Heroi *criarHerois(int quantidade)
{
    return (Heroi *)malloc(quantidade * sizeof(Heroi));
}

void lerHerois(Heroi *herois, int quantidade)
{
    int i;

    for (i = 0; i < quantidade; i++)
    {
        printf("\nHeroi %d\n", i + 1);

        printf("Nome: ");
        scanf("%99s", herois[i].nome);

        printf("HP: ");
        scanf("%d", &herois[i].hp);

        printf("Ataque: ");
        scanf("%d", &herois[i].ataque);
    }
}

void imprimirHerois(Heroi *herois, int quantidade)
{
    int i;

    printf("\n===== EQUIPE DE HEROIS =====\n");

    for (i = 0; i < quantidade; i++)
    {
        printf("\nHeroi %d\n", i + 1);
        printf("Nome: %s\n", herois[i].nome);
        printf("HP: %d\n", herois[i].hp);
        printf("Ataque: %d\n", herois[i].ataque);
    }
}
