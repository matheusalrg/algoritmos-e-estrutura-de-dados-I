#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Variável para armazenar a quantidade de inimigos
    int n_inimigos;

    // Ponteiro para armazenar a onda de inimigos
    int *ponteiro_onda;

    // Entrada do usuário
    printf("Digite a quantidade de inimigos da onda: ");
    scanf("%d", &n_inimigos);

    // Alocação dinâmica de memória para os inimigos
    ponteiro_onda = (int *) malloc(n_inimigos * sizeof(int));

    // Verificando se a alocação foi bem-sucedida
    if (ponteiro_onda == NULL) {
        printf("Erro ao alocar memoria para a onda de inimigos.\n");
        return 1;
    }

    // Populando a onda com os IDs dos inimigos
    for (int i = 0; i < n_inimigos; i++) {
        printf("Digite o ID do inimigo %d: ", i + 1);
        scanf("%d", &ponteiro_onda[i]);
    }

    // Listando os inimigos criados
    printf("Onda de inimigos criada com sucesso! IDs: ");
    for (int i = 0; i < n_inimigos; i++) {
        printf("%d ", ponteiro_onda[i]);
    }
    printf("\n");

    // Liberando a memória alocada
    free(ponteiro_onda);

    // Boa prática: evitando ponteiro pendurado
    ponteiro_onda = NULL;

    return 0;
}
