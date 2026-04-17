#include <stdio.h>
#include <locale.h>

// Definição da estrutura do personagem
struct Personagem {
    int posX;
    int posY;
    int moedas;
};

// Função que recebe uma cópia e retorna a estrutura atualizada
struct Personagem atualizarPersonagem(struct Personagem p) {

    // Atualizando posição
    p.posX = 10;
    p.posY = 5;

    // Incrementando moedas
    p.moedas++;

    // Retornando a estrutura modificada
    return p;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Criando o personagem
    struct Personagem jogador;

    // Inicializando estado inicial
    jogador.posX = 0;
    jogador.posY = 0;
    jogador.moedas = 0;

    // Exibindo estado inicial
    printf("Posicao inicial: (%d, %d) - Moedas: %d\n",
           jogador.posX, jogador.posY, jogador.moedas);

    // Atualizando o personagem (passagem por valor)
    jogador = atualizarPersonagem(jogador);

    // Exibindo estado final
    printf("Posicao atualizada: (%d, %d) - Moedas: %d\n",
           jogador.posX, jogador.posY, jogador.moedas);

    return 0;
}
