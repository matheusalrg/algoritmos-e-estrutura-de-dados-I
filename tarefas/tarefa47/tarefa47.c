#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definição da estrutura da unidade
typedef struct {
    char nome[50];
    int vida;
    int atk;
} Unidade;

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Quantidade de unidades no esquadrão
    int n;

    // Ponteiro para o vetor de unidades
    Unidade *esquadrao;

    // Ponteiro para o arquivo binário
    FILE *arquivo;

    // Variável para armazenar o índice da unidade com maior ATK
    int i, indiceMaior = 0;

    // Lendo a quantidade de unidades
    printf("Quantas unidades deseja incluir no esquadrão? ");
    scanf("%d", &n);

    // Alocando memória dinamicamente para o vetor de unidades
    esquadrao = (Unidade *) malloc(n * sizeof(Unidade));

    // Verificando se a alocação foi bem sucedida
    if (esquadrao == NULL) {

        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Laço para leitura dos dados das unidades
    for (i = 0; i < n; i++) {

        printf("\n=== Unidade %d ===\n", i + 1);

        // Lendo o nome da unidade
        printf("Digite o nome: ");
        scanf("%s", esquadrao[i].nome);

        // Lendo a vida da unidade
        printf("Digite a vida (HP): ");
        scanf("%d", &esquadrao[i].vida);

        // Lendo o ataque da unidade
        printf("Digite o ataque (ATK): ");
        scanf("%d", &esquadrao[i].atk);
    }

    // Abrindo arquivo no modo escrita binária
    arquivo = fopen("squad.dat", "wb");

    // Verificando se o arquivo abriu corretamente
    if (arquivo == NULL) {

        printf("Erro ao abrir o arquivo!\n");
        free(esquadrao);
        return 1;
    }

    // Gravando o vetor inteiro no arquivo binário em uma única chamada
    fwrite(esquadrao, sizeof(Unidade), n, arquivo);

    // Fechando o arquivo
    fclose(arquivo);

    // Inicializando o maior ATK como o primeiro elemento
    for (i = 1; i < n; i++) {

        // Verificando qual unidade tem maior ataque
        if (esquadrao[i].atk > esquadrao[indiceMaior].atk) {

            indiceMaior = i;
        }
    }

    // Exibindo a unidade com maior ataque
    printf("\nUnidade com maior ATK: %s\n", esquadrao[indiceMaior].nome);

    // Liberando memória alocada
    free(esquadrao);

    return 0;
}
