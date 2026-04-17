#include <stdio.h>
#include <locale.h>

// Definição da estrutura de posição
struct Posicao {
    int x;
    int y;
};

// Função para mover o personagem usando ponteiro
void mover_personagem(struct Posicao *p, int movimento_x, int movimento_y) {

    // Atualizando as coordenadas usando o ponteiro
    p->x += movimento_x;
    p->y += movimento_y;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Criando a posição inicial do jogador
    struct Posicao posicao_jogador;

    // Inicializando posição
    posicao_jogador.x = 0;
    posicao_jogador.y = 0;

    // Ponteiro apontando para a posição do jogador
    struct Posicao *ponteiro_posicao = &posicao_jogador;

    // Exibindo posição inicial
    printf("Posicao inicial do jogador: X=%d, Y=%d\n",
           posicao_jogador.x, posicao_jogador.y);

    // Movendo o personagem
    mover_personagem(ponteiro_posicao, 10, 5);

    // Exibindo posição final
    printf("Posicao final do jogador: X=%d, Y=%d\n",
           posicao_jogador.x, posicao_jogador.y);

    return 0;
}
