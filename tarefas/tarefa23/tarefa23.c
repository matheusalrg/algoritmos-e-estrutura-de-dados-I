#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LINHAS 5
#define COLUNAS 10

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Ponteiro para armazenar o mapa do nível
    int *level_map;

    // Alocando memória para toda a matriz LINHAS x COLUNAS
    level_map = (int *) malloc(LINHAS * COLUNAS * sizeof(int));

    // Verificando se a alocação foi bem-sucedida
    if (level_map == NULL) {
        printf("Erro ao alocar memória para o mapa do nível.\n");
        return 1;
    }

    // Construindo o nível
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {

            // Verificando se a célula está na última linha
            if (i == LINHAS - 1) {
                *(level_map + i * COLUNAS + j) = 1;
            } else {
                *(level_map + i * COLUNAS + j) = 0;
            }
        }
    }

    // Exibindo o nível na tela
    printf("Mapa do nível:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", *(level_map + i * COLUNAS + j));
        }
        printf("\n");
    }

    // Liberando a memória alocada
    free(level_map);

    // Boa prática: evitando ponteiro pendurado
    level_map = NULL;

    return 0;
}
