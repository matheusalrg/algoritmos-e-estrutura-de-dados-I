#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Estrutura da nave inimiga
typedef struct {
    int id;
    int nivel_ameaca;
} Nave;

// Função de merge
void merge(Nave *v, int ini, int meio, int fim) {

    int n1 = meio - ini + 1;
    int n2 = fim - meio;

    Nave *L = (Nave *) malloc(n1 * sizeof(Nave));
    Nave *R = (Nave *) malloc(n2 * sizeof(Nave));

    int i, j, k;

    // Copiando dados para vetores temporários
    for (i = 0; i < n1; i++)
        L[i] = v[ini + i];

    for (j = 0; j < n2; j++)
        R[j] = v[meio + 1 + j];

    i = 0;
    j = 0;
    k = ini;

    // Intercalação ordenada por nível de ameaça (crescente)
    while (i < n1 && j < n2) {

        if (L[i].nivel_ameaca <= R[j].nivel_ameaca) {
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
void mergeSort(Nave *v, int ini, int fim) {

    if (ini < fim) {

        int meio = (ini + fim) / 2;

        mergeSort(v, ini, meio);
        mergeSort(v, meio + 1, fim);
        merge(v, ini, meio, fim);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Número de naves
    int n;

    // Vetor de naves
    Nave *naves;

    // Variáveis auxiliares
    int i;

    // Lendo quantidade de naves
    printf("Digite o número de naves inimigas: ");
    scanf("%d", &n);

    // Alocando memória
    naves = (Nave *) malloc(n * sizeof(Nave));

    if (naves == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Lendo dados das naves
    for (i = 0; i < n; i++) {

        printf("\n=== Nave %d ===\n", i + 1);

        printf("Digite o ID: ");
        scanf("%d", &naves[i].id);

        printf("Digite o nível de ameaça: ");
        scanf("%d", &naves[i].nivel_ameaca);
    }

    // Ordenando com Merge Sort
    mergeSort(naves, 0, n - 1);

    // Exibindo apenas os IDs ordenados por prioridade
    for (i = 0; i < n; i++) {
        printf("%d ", naves[i].id);
    }

    printf("\n");

    free(naves);

    return 0;
}
