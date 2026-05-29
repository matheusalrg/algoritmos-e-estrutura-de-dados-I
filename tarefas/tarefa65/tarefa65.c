#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Estrutura do jogador
typedef struct {
    char nome[50];
    int pontuacao;
} Jogador;

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Número de jogadores
    int n;

    // Vetor de jogadores
    Jogador *jogadores;

    // Variáveis auxiliares
    int i, j;
    Jogador chave;

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

        printf("Digite o nome: ");
        scanf("%s", jogadores[i].nome);

        printf("Digite a pontuação: ");
        scanf("%d", &jogadores[i].pontuacao);
    }

    // Insertion Sort em ordem decrescente
    for (i = 1; i < n; i++) {

        chave = jogadores[i];
        j = i - 1;

        // Desloca elementos menores para a direita
        while (j >= 0 && jogadores[j].pontuacao < chave.pontuacao) {

            jogadores[j + 1] = jogadores[j];
            j--;
        }

        jogadores[j + 1] = chave;
    }

    // Exibindo ranking final
    printf("\n=== RANKING ===\n");

    for (i = 0; i < n; i++) {

        printf("%d %s\n",
               jogadores[i].pontuacao,
               jogadores[i].nome);
    }

    // Liberando memória
    free(jogadores);

    return 0;
}
