#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Ponteiro para representar a mochila
    int *mochila;

    // Alocando memória inicial para 3 itens
    mochila = (int *) malloc(3 * sizeof(int));

    // Verificando se a alocação foi bem-sucedida
    if (mochila == NULL) {
        printf("Erro ao alocar memória para a mochila.\n");
        return 1;
    }

    // Primeira coleta de itens
    for (int i = 0; i < 3; i++) {
        printf("Digite o valor do item %d: ", i + 1);
        scanf("%d", &mochila[i]);
    }

    // Mostrando os itens atuais da mochila
    printf("Itens atuais na mochila: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", mochila[i]);
    }
    printf("\n");

    // Expandindo a mochila para 6 itens usando realloc
    int *temp = (int *) realloc(mochila, 6 * sizeof(int));

    // Verificando se o realloc foi bem-sucedido
    if (temp == NULL) {
        printf("Erro ao expandir a mochila.\n");
        free(mochila);
        return 1;
    }

    // Atualizando o ponteiro principal
    mochila = temp;

    // Segunda coleta de itens (posições 3, 4 e 5)
    for (int i = 3; i < 6; i++) {
        printf("Digite o valor do item %d: ", i + 1);
        scanf("%d", &mochila[i]);
    }

    // Mostrando todos os itens da mochila
    printf("Mochila completa: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", mochila[i]);
    }
    printf("\n");

    // Liberando a memória alocada
    free(mochila);

    // Boa prática: evitando ponteiro pendurado
    mochila = NULL;

    return 0;
}
