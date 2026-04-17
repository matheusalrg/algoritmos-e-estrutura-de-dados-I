#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Variável para armazenar a quantidade de inimigos
    int quantidade;

    // Ponteiro para armazenar o status dos inimigos
    int *status_inimigos;

    // Entrada do usuário
    printf("Digite a quantidade de inimigos da fase: ");
    scanf("%d", &quantidade);

    // Alocação de memória com calloc (inicializa com 0)
    status_inimigos = (int *) calloc(quantidade, sizeof(int));

    // Verificando se a alocação foi bem-sucedida
    if (status_inimigos == NULL) {
        printf("Erro ao alocar memória para os inimigos.\n");
        return 1;
    }

    // Verificando o status inicial dos inimigos (todos devem ser 0)
    for (int i = 0; i < quantidade; i++) {
        printf("Inimigo %d: Inativo (%d)\n", i + 1, status_inimigos[i]);
    }

    // Ativando todos os inimigos (mudando de 0 para 1)
    for (int i = 0; i < quantidade; i++) {
        status_inimigos[i] = 1;
    }

    // Exibindo o status final dos inimigos
    for (int i = 0; i < quantidade; i++) {
        printf("Inimigo %d: Ativo (%d)\n", i + 1, status_inimigos[i]);
    }

    // Liberando a memória alocada
    free(status_inimigos);

    // Boa prática: evitando ponteiro pendurado
    status_inimigos = NULL;

    return 0;
}
