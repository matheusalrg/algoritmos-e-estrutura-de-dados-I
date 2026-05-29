#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Estrutura do jogador
typedef struct {
    int id;
    int pontuacao;
} Jogador;

// Função de troca
void troca(Jogador *a, Jogador *b) {
    Jogador temp = *a;
    *a = *b;
    *b = temp;
}

// Partição (Lomuto) - ordem decrescente por pontuação
int particiona(Jogador v[], int ini, int fim) {

    int pivo = v[fim].pontuacao;
    int i = ini - 1;
    int j;

    for (j = ini; j < fim; j++) {

        // Decrescente: maior vem primeiro
        if (v[j].pontuacao >= pivo) {
            i++;
            troca(&v[i], &v[j]);
        }
    }

    troca(&v[i + 1], &v[fim]);

    return i + 1;
}

// Quick Sort recursivo
void quickSort(Jogador v[], int ini, int fim) {

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

    // Vetor de jogadores
    Jogador *v;

    // Variável auxiliar
    int i;

    // Lendo quantidade de jogadores
    printf("Digite o número de jogadores: ");
    scanf("%d", &n);

    // Alocando vetor
    v = (Jogador *) malloc(n * sizeof(Jogador));

    if (v == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Lendo dados dos jogadores
    for (i = 0; i < n; i++) {

        printf("\n=== Jogador %d ===\n", i + 1);

        printf("Digite o ID: ");
        scanf("%d", &v[i].id);

        printf("Digite a pontuação: ");
        scanf("%d", &v[i].pontuacao);
    }

    // Ordenando com Quick Sort
    quickSort(v, 0, n - 1);

    // Exibindo ranking
    for (i = 0; i < n; i++) {
        printf("%d %d\n", v[i].id, v[i].pontuacao);
    }

    free(v);

    return 0;
}
