# include <stdio.h>

int main() {
    // Variável de vida
    int vida_jogador = 100;

    // Criação do ponteiro para a vida 
    int *ponteiro_vida;

    // Simulador de dano
    vida_jogador = 50;
    printf("O jogador sofreu dano! Vida atual: %d\n", vida_jogador);

    // Conectando o ponteiro ao endereço de vida do jogador
    ponteiro_vida = &vida_jogador;

    // Power-up (restaurando a vida via ponteiro) 
    *ponteiro_vida = 100;
    printf("Power-up coletado! Vida restaurada: %d\n", vida_jogador);

    return 0;
}
