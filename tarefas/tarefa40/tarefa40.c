#include <stdio.h>
#include <locale.h>

// Definição da estrutura do jogador
struct Jogador {
    char nome[50];
    int pontuacao;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Variável para quantidade de jogadores
    int n;

    // Lendo quantidade de jogadores
    printf("Digite a quantidade de jogadores: ");
    scanf("%d", &n);

    // Criando vetor de jogadores
    struct Jogador jogadores[n];

    // Variável para guardar posição do maior score
    int maior_indice = 0;

    // Ponteiro para o arquivo
    FILE *arquivo;

    // Lendo dados dos jogadores
    for (int i = 0; i < n; i++) {

        printf("\nDigite o nome do jogador %d: ", i + 1);
        scanf("%s", jogadores[i].nome);

        printf("Digite a pontuacao do jogador %d: ", i + 1);
        scanf("%d", &jogadores[i].pontuacao);
    }

    // Procurando o jogador com maior pontuação
    for (int i = 1; i < n; i++) {

        if (jogadores[i].pontuacao > jogadores[maior_indice].pontuacao) {

            maior_indice = i;
        }
    }

    // Abrindo arquivo no modo escrita
    arquivo = fopen("highscore.txt", "w");

    // Verificando se o arquivo foi aberto corretamente
    if (arquivo == NULL) {

        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    // Escrevendo dados do recordista no arquivo
    fprintf(arquivo,
            "Nome: %s, Pontuacao: %d",
            jogadores[maior_indice].nome,
            jogadores[maior_indice].pontuacao);

    // Fechando o arquivo
    fclose(arquivo);

    // Mensagem de confirmação
    printf("\nHighscore salvo com sucesso!\n");

    return 0;
}
