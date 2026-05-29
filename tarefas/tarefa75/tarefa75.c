#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função de partição (Lomuto)
int particiona(int v[], int ini, int fim) {

    int pivo = v[fim];
    int i = ini - 1;
    int j, temp;

    for (j = ini; j < fim; j++) {

        if (v[j] <= pivo) {
            i++;

            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }

    // Coloca o pivô na posição correta
    temp = v[i + 1];
    v[i + 1] = v[fim];
    v[fim] = temp;

    return i + 1;
}

// Quick Sort recursivo
void quickSort(int v[], int ini, int fim) {

    if (ini < fim) {

        int p = particiona(v, ini, fim);

        quickSort(v, ini, p - 1);
        quickSort(v, p + 1, fim);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Número de jogadores
    int n;

    // Vetor de MMRs
    int *mmr;

    // Variáveis auxiliares
    int i;

    // Lendo quantidade de jogadores
    printf("Digite o número de jogadores: ");
    scanf("%d", &n);

    // Alocando vetor
    mmr = (int *) malloc(n * sizeof(int));

    if (mmr == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Lendo MMRs
    for (i = 0; i < n; i++) {
        scanf("%d", &mmr[i]);
    }

    // Ordenando com Quick Sort
    quickSort(mmr, 0, n - 1);

    // Exibindo resultado
    for (i = 0; i < n; i++) {
        printf("%d ", mmr[i]);
    }

    printf("\n");

    free(mmr);

    return 0;
}
