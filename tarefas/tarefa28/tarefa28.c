#include <stdio.h>
#include <locale.h>

// Definição da estrutura do jogador
struct Jogador {
    float pos_x;
    int pontuacao;
    int tem_pulo_duplo;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Criando o personagem
    struct Jogador heroi;

    // Estado inicial do jogador
    heroi.pos_x = 50.0;
    heroi.pontuacao = 0;
    heroi.tem_pulo_duplo = 0;

    // Imprimindo o estado inicial
    printf("Inicio da fase! Posicao X: %.1f, Pontos: %d, Pulo Duplo: Nao\n",
           heroi.pos_x, heroi.pontuacao);

    // Simulando a coleta de moeda
    heroi.pontuacao += 10;

    // Simulando a coleta do power-up (pulo duplo)
    heroi.tem_pulo_duplo = 1;

    // Imprimindo o estado final
    printf("Itens coletados! Posicao X: %.1f, Pontos: %d, Pulo Duplo: Sim\n",
           heroi.pos_x, heroi.pontuacao);

    return 0;
}
