#include <stdio.h>
#include "combate.h"

int main()
{
    int ataque_base;
    int bonus_arma;
    int vida_inimigo;
    int ataque_total;
    int vida_restante;

    printf("Digite o ataque base do heroi: ");
    scanf("%d", &ataque_base);

    printf("Digite o bonus da espada: ");
    scanf("%d", &bonus_arma);

    printf("Digite a vida inicial do inimigo: ");
    scanf("%d", &vida_inimigo);

    ataque_total = calcular_ataque_total(ataque_base, bonus_arma);
    vida_restante = aplicar_dano(vida_inimigo, ataque_total);

    printf("\nPoder de ataque total do heroi: %d\n", ataque_total);
    printf("Vida restante do inimigo: %d\n", vida_restante);

    return 0;
}
