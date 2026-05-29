#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definição da estrutura Jogador
typedef struct {
    int id;
    int pontuacao;
} Jogador;

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Número de jogadores
    int n;

    // Ponteiro para vetor de jogadores
    Jogador *jogadores;

    // Variáveis auxiliares
    int i, j;
    Jogador temp;

    // Lendo quantidade de jogadores
    printf("Digite o número de jogadores: ");
    scanf("%d", &n);

    // Alocando memória dinamicamente
    jogadores = (Jogador *) malloc(n * sizeof(Jogador));

    // Verificando falha de alocação
    if (jogadores == NULL) {

        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Lendo dados dos jogadores
    for (i = 0; i < n; i++) {

        printf("\n=== Jogador %d ===\n", i + 1);

        printf("Digite o ID: ");
        scanf("%d", &jogadores[i].id);

        printf("Digite a pontuação: ");
        scanf("%d", &jogadores[i].pontuacao);
    }

    // Bubble Sort em ordem decrescente por pontuação
    for (i = 0; i < n - 1; i++) {

        for (j = 0; j < n - i - 1; j++) {

            if (jogadores[j].pontuacao < jogadores[j + 1].pontuacao) {

                temp = jogadores[j];
                jogadores[j] = jogadores[j + 1];
                jogadores[j + 1] = temp;
            }
        }
    }

    // Exibindo jogadores ordenados
    for (i = 0; i < n; i++) {

        printf("%d %d\n", jogadores[i].id, jogadores[i].pontuacao);
    }

    // Liberando memória
    free(jogadores);

    return 0;
}
