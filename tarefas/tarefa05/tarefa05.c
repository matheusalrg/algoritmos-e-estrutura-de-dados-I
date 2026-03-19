# include <stdio.h>
# include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    // Variável pontuação
    int pontuacao = 0;

    // Ponteiro
    int *ponteiro_pontuacao;

    // Conectando o ponteiro ao endereço de memória da variável pontuação
    ponteiro_pontuacao = &pontuacao;

    // Mostra na tela a pontuação inicial do jogador
    printf("Pontuacao inicial: %d\n", pontuacao);

    // Laço de repetição que representa as 3 moedas cotetadas pelo jogador
    for (int i = 0; i < 3; i++) {
        *ponteiro_pontuacao = *ponteiro_pontuacao + 10;
    }

    // Mostra na tela a pontuação final do jogador
    printf("Pontuacao final apos coletar 3 moedas: %d\n", pontuacao);
    

    return 0;
}
