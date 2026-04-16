#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Variável vida do inimigo usando ponteiro
    int *vida_inimigo;

    // Alocando memória para a vida do inimigo
    vida_inimigo = (int *) malloc(sizeof(int));

    // Verificando se a alocação foi bem-sucedida
    if (vida_inimigo == NULL) {
        printf("Erro ao alocar memória para o inimigo.\n");
        return 1;
    }

    // Inicializando a vida do inimigo
    *vida_inimigo = 80;
    printf("Um novo inimigo apareceu com %d de vida!\n", *vida_inimigo);

    // Simulando um ataque do jogador
    *vida_inimigo -= 35;
    printf("O jogador atacou! Vida restante do inimigo: %d\n", *vida_inimigo);

    // Liberando a memória alocada
    free(vida_inimigo);

    return 0;
}
