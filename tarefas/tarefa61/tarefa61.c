#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Número de jogadores
    int n;

    // Ponteiro para vetor de pontuações
    int *pontuacoes;

    // Variáveis auxiliares
    int i, j, minIndex, temp;

    // Lendo quantidade de jogadores
    printf("Digite o número de jogadores: ");
    scanf("%d", &n);

    // Alocando memória dinamicamente
    pontuacoes = (int *) malloc(n * sizeof(int));

    // Verificando falha de alocação
    if (pontuacoes == NULL) {

        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Lendo as pontuações
    for (i = 0; i < n; i++) {

        scanf("%d", &pontuacoes[i]);
    }

    // Algoritmo Selection Sort
    for (i = 0; i < n - 1; i++) {

        minIndex = i;

        for (j = i + 1; j < n; j++) {

            if (pontuacoes[j] < pontuacoes[minIndex]) {
                minIndex = j;
            }
        }

        // Troca de valores
        temp = pontuacoes[i];
        pontuacoes[i] = pontuacoes[minIndex];
        pontuacoes[minIndex] = temp;
    }

    // Exibindo vetor ordenado
    for (i = 0; i < n; i++) {

        printf("%d ", pontuacoes[i]);
    }

    printf("\n");

    // Liberando memória
    free(pontuacoes);

    return 0;
}
