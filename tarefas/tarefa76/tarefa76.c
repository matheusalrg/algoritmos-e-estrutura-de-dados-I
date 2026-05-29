#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// Função de troca
void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partição com pivô aleatório
int particiona(int v[], int ini, int fim) {

    // Escolhendo pivô aleatório
    int indicePivo = ini + rand() % (fim - ini + 1);

    // Colocando pivô no final (padrão Lomuto)
    troca(&v[indicePivo], &v[fim]);

    int pivo = v[fim];
    int i = ini - 1;
    int j;

    for (j = ini; j < fim; j++) {

        if (v[j] <= pivo) {
            i++;
            troca(&v[i], &v[j]);
        }
    }

    troca(&v[i + 1], &v[fim]);

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

    // Vetor de pontuações
    int *v;

    // Variável auxiliar
    int i;

    // Inicializando gerador de aleatoriedade
    srand(time(NULL));

    // Lendo quantidade de jogadores
    printf("Digite o número de jogadores: ");
    scanf("%d", &n);

    // Alocando vetor
    v = (int *) malloc(n * sizeof(int));

    if (v == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Lendo pontuações
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    // Ordenando com Quick Sort aleatório
    quickSort(v, 0, n - 1);

    // Exibindo resultado
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");

    free(v);

    return 0;
}
