#include <stdio.h>
#include "personagem.h"

int main()
{
    int num_membros;
    Personagem *party;

    printf("Quantos membros a equipe tera? ");
    scanf("%d", &num_membros);

    party = cria_party(num_membros);

    if(party == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    registra_membros(party, num_membros);

    exibe_relatorio(party, num_membros);

    libera_party(party);

    return 0;
}
