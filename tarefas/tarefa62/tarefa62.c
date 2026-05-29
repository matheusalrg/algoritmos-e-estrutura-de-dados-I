#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definição da estrutura Jogador
typedef struct {
    char nome[50];
    int eliminacoes;
} Jogador;

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Número de jogadores
    int n;

    // Ponteiro para vetor de jogadores
    Jogador *jogadores;

    // Variáveis auxiliares
    int i, j, maxIndex;
    Jogador temp;

    // Lendo quantidade de jogadores
    printf("Digite o número de jogadores: ");
    scanf("%d", &n);

    // Alocando memória dinamicamente
    jogadores = (Jogador *) malloc(n * sizeof(Jogador));

    // Verificando erro de alocação
    if (jogadores == NULL) {

        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Lendo dados dos jogadores
    for (i = 0; i < n; i++) {

        printf("\n=== Jogador %d ===\n", i + 1);

        printf("Digite o nome: ");
        scanf("%s", jogadores[i].nome);

        printf("Digite o número de eliminações: ");
        scanf("%d", &jogadores[i].eliminacoes);
    }

    // Selection Sort em ordem decrescente
    for (i = 0; i < n - 1; i++) {

        maxIndex = i;

        for (j = i + 1; j < n; j++) {

            if (jogadores[j].eliminacoes > jogadores[maxIndex].eliminacoes) {
                maxIndex = j;
            }
        }

        // Troca de jogadores
        temp = jogadores[i];
        jogadores[i] = jogadores[maxIndex];
        jogadores[maxIndex] = temp;
    }

    // Exibindo leaderboard
    printf("\n=== LEADERBOARD ===\n");

    for (i = 0; i < n; i++) {

        printf("%s - %d eliminações\n",
               jogadores[i].nome,
               jogadores[i].eliminacoes);
    }

    // Liberando memória
    free(jogadores);

    return 0;
}
