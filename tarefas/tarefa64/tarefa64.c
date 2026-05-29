#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Quantidade de fragmentos
    int n;

    // Ponteiro para vetor de fragmentos
    int *fragmentos;

    // Variáveis auxiliares
    int i, j, chave;

    // Lendo quantidade de fragmentos
    printf("Digite a quantidade de fragmentos: ");
    scanf("%d", &n);

    // Alocando memória dinamicamente
    fragmentos = (int *) malloc(n * sizeof(int));

    // Verificando erro de alocação
    if (fragmentos == NULL) {

        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Lendo os valores dos fragmentos
    for (i = 0; i < n; i++) {
        scanf("%d", &fragmentos[i]);
    }

    // Algoritmo Insertion Sort
    for (i = 1; i < n; i++) {

        chave = fragmentos[i];
        j = i - 1;

        // Desloca elementos maiores que a chave
        while (j >= 0 && fragmentos[j] > chave) {

            fragmentos[j + 1] = fragmentos[j];
            j--;
        }

        fragmentos[j + 1] = chave;
    }

    // Exibindo vetor ordenado
    for (i = 0; i < n; i++) {

        printf("%d ", fragmentos[i]);
    }

    printf("\n");

    // Liberando memória
    free(fragmentos);

    return 0;
}
