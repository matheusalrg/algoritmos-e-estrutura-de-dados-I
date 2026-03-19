#include <stdio.h>
#include <locale.h>

// Função sem retorno que dobra a pontuação do jogador utilizando um ponteiro
void aplicar_powerup_pontuacao_dupla ( int *pontuacao ) {
    // Acessa o valor apontado pelo ponteiro e o multiplica por 2, alterando diretamente a variável original
    *pontuacao = *pontuacao * 2;    
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Variável que armazena a pontuação do jogador
    int pontuacao_jogador = 1500;

    // Exibe a pontuação do jogador antes do power-up
    printf("Pontuacao antes do power-up: %d\n", pontuacao_jogador);

    // Chama a função passando o endereço da variável para que ela seja modificada diretamente
    aplicar_powerup_pontuacao_dupla(&pontuacao_jogador);

    // Exibe a pontuação do jogador após o power-up
    printf("Pontuacao apos o power-up: %d\n", pontuacao_jogador);

    return 0;
}
