#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definição da struct Monstro
typedef struct {
    char nome[50];
    int hp;
} Monstro;

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Número de monstros na horda
    int n;

    // Ponteiro para vetor de monstros
    Monstro *horda;

    // Variáveis auxiliares
    int i, indiceMenor;

    // Lendo quantidade de monstros
    printf("Digite o número de monstros: ");
    scanf("%d", &n);

    // Alocando memória dinamicamente
    horda = (Monstro *) malloc(n * sizeof(Monstro));

    // Verificando falha de alocação
    if (horda == NULL) {

        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Lendo dados dos monstros
    for (i = 0; i < n; i++) {

        printf("\n=== Monstro %d ===\n", i + 1);

        printf("Digite o nome: ");
        scanf("%s", horda[i].nome);

        printf("Digite o HP: ");
        scanf("%d", &horda[i].hp);
    }

    // Inicializando o menor HP como o primeiro elemento
    indiceMenor = 0;

    // Percorrendo vetor para encontrar o menor HP
    for (i = 1; i < n; i++) {

        if (horda[i].hp < horda[indiceMenor].hp) {
            indiceMenor = i;
        }
    }

    // Exibindo resultado
    printf("Alvo prioritario: %s (%d HP)\n",
           horda[indiceMenor].nome,
           horda[indiceMenor].hp);

    // Liberando memória
    free(horda);

    return 0;
}
