#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definição da estrutura do inimigo
typedef struct {
    char tipo[50];
    int hp;
} Inimigo;

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Quantidade de inimigos
    int n;

    // Ponteiro para vetor de inimigos
    Inimigo *inimigos;

    // Variável de controle do laço
    int i;

    // Lendo a quantidade de inimigos
    printf("Digite a quantidade de inimigos: ");
    scanf("%d", &n);

    // Alocando memória para os inimigos
    inimigos = (Inimigo *) malloc(n * sizeof(Inimigo));

    // Verificando falha na alocação
    if (inimigos == NULL) {

        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Laço para leitura dos dados dos inimigos (complexidade O(n))
    for (i = 0; i < n; i++) {

        // Lendo tipo do inimigo
        printf("\nDigite o tipo do inimigo: ");
        scanf("%s", inimigos[i].tipo);

        // Lendo HP do inimigo
        printf("Digite o HP do inimigo: ");
        scanf("%d", &inimigos[i].hp);

        // Impressão imediata dos dados
        printf("Inimigo: %s, HP: %d\n", inimigos[i].tipo, inimigos[i].hp);
    }

    // Liberando memória alocada
    free(inimigos);

    return 0;
}
