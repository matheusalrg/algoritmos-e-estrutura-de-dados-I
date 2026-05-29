#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Tamanhos dos portais
    int n, m;

    // Ponteiros para os vetores
    int *alfa, *beta, *merge;

    // Variáveis auxiliares
    int i, j, k;

    // Lendo tamanho do Portal Alfa
    printf("Digite o número de inimigos do Portal Alfa: ");
    scanf("%d", &n);

    // Alocando vetor Alfa
    alfa = (int *) malloc(n * sizeof(int));

    // Verificando erro de alocação
    if (alfa == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Lendo níveis de ameaça do Alfa (já ordenados)
    for (i = 0; i < n; i++) {
        scanf("%d", &alfa[i]);
    }

    // Lendo tamanho do Portal Beta
    printf("Digite o número de inimigos do Portal Beta: ");
    scanf("%d", &m);

    // Alocando vetor Beta
    beta = (int *) malloc(m * sizeof(int));

    if (beta == NULL) {
        printf("Erro ao alocar memória!\n");
        free(alfa);
        return 1;
    }

    // Lendo níveis de ameaça do Beta (já ordenados)
    for (i = 0; i < m; i++) {
        scanf("%d", &beta[i]);
    }

    // Vetor de merge
    merge = (int *) malloc((n + m) * sizeof(int));

    if (merge == NULL) {
        printf("Erro ao alocar memória!\n");
        free(alfa);
        free(beta);
        return 1;
    }

    // Intercalação (merge)
    i = 0; // Alfa
    j = 0; // Beta
    k = 0; // Merge

    while (i < n && j < m) {

        if (alfa[i] <= beta[j]) {
            merge[k++] = alfa[i++];
        } else {
            merge[k++] = beta[j++];
        }
    }

    // Copiando o restante do Alfa
    while (i < n) {
        merge[k++] = alfa[i++];
    }

    // Copiando o restante do Beta
    while (j < m) {
        merge[k++] = beta[j++];
    }

    // Exibindo vetor final ordenado
    for (i = 0; i < n + m; i++) {
        printf("%d ", merge[i]);
    }

    printf("\n");

    // Liberando memória
    free(alfa);
    free(beta);
    free(merge);

    return 0;
}
