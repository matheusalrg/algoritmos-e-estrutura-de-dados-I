#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Estrutura do piloto
typedef struct {
    int posicao;
    char nome[50];
} Piloto;

// Função de intercalação (merge)
void intercala(Piloto *v, int ini, int meio, int fim) {

    int n1 = meio - ini + 1;
    int n2 = fim - meio;

    Piloto *L = (Piloto *) malloc(n1 * sizeof(Piloto));
    Piloto *R = (Piloto *) malloc(n2 * sizeof(Piloto));

    int i, j, k;

    // Copiando para vetor esquerdo
    for (i = 0; i < n1; i++) {
        L[i] = v[ini + i];
    }

    // Copiando para vetor direito
    for (j = 0; j < n2; j++) {
        R[j] = v[meio + 1 + j];
    }

    i = 0;
    j = 0;
    k = ini;

    // Intercalando em ordem crescente de posição
    while (i < n1 && j < n2) {

        if (L[i].posicao <= R[j].posicao) {
            v[k++] = L[i++];
        } else {
            v[k++] = R[j++];
        }
    }

    // Restante da esquerda
    while (i < n1) {
        v[k++] = L[i++];
    }

    // Restante da direita
    while (j < n2) {
        v[k++] = R[j++];
    }

    free(L);
    free(R);
}

// Merge Sort recursivo
void mergeSort(Piloto *v, int ini, int fim) {

    if (ini < fim) {

        int meio = (ini + fim) / 2;

        mergeSort(v, ini, meio);
        mergeSort(v, meio + 1, fim);

        intercala(v, ini, meio, fim);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Número de pilotos
    int n;

    // Vetor de pilotos
    Piloto *pilotos;

    // Variáveis auxiliares
    int i;

    // Lendo quantidade de pilotos
    printf("Digite o número de pilotos: ");
    scanf("%d", &n);

    // Alocando memória
    pilotos = (Piloto *) malloc(n * sizeof(Piloto));

    if (pilotos == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Lendo dados dos pilotos
    for (i = 0; i < n; i++) {

        printf("\n=== Piloto %d ===\n", i + 1);

        printf("Digite a posição: ");
        scanf("%d", &pilotos[i].posicao);

        printf("Digite o nome: ");
        scanf("%s", pilotos[i].nome);
    }

    // Ordenando por posição
    mergeSort(pilotos, 0, n - 1);

    // Exibindo resultado final
    for (i = 0; i < n; i++) {
        printf("%d %s\n", pilotos[i].posicao, pilotos[i].nome);
    }

    free(pilotos);

    return 0;
}
