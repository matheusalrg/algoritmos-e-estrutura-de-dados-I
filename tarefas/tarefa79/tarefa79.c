#include <stdio.h>
#include <stdlib.h>
#include "heroi/heroi.h"

int main()
{
    int quantidade;
    Heroi *herois;

    printf("Quantidade de herois: ");
    scanf("%d", &quantidade);

    herois = criarHerois(quantidade);

    if (herois == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    lerHerois(herois, quantidade);

    imprimirHerois(herois, quantidade);

    free(herois);

    return 0;
}
