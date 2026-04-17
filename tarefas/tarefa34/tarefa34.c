#include <stdio.h>
#include <locale.h>

// Definição da estrutura do herói
struct Heroi {
    int saude;
    int pontuacao;
    int posX;
    int posY;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Criando e inicializando o herói
    struct Heroi meuHeroi;
    meuHeroi.saude = 100;
    meuHeroi.pontuacao = 0;
    meuHeroi.posX = 0;
    meuHeroi.posY = 0;

    // Imprimindo o estado inicial do herói
    printf("Estado inicial do heroi:\n");
    printf("Saude: %d\n", meuHeroi.saude);
    printf("Pontuacao: %d\n", meuHeroi.pontuacao);
    printf("PosX: %d\n", meuHeroi.posX);
    printf("PosY: %d\n", meuHeroi.posY);

    // Criando um ponteiro para o herói
    struct Heroi *ptrHeroi;
    ptrHeroi = &meuHeroi;

    // Simulando o herói sofrendo dano
    ptrHeroi->saude -= 25;
    printf("\nNova saude do heroi: %d\n", ptrHeroi->saude);

    // Simulando o herói coletando moedas
    ptrHeroi->pontuacao += 50;
    printf("Nova pontuacao do heroi: %d\n", ptrHeroi->pontuacao);

    // Simulando o movimento do herói
    ptrHeroi->posX += 10;
    ptrHeroi->posY -= 5;
    printf("Nova posicao do heroi: PosX=%d, PosY=%d\n", ptrHeroi->posX, ptrHeroi->posY);

    // Imprimindo o estado final completo do herói usando apenas o ponteiro
    printf("\nEstado final do heroi:\n");
    printf("Saude: %d\n", ptrHeroi->saude);
    printf("Pontuacao: %d\n", ptrHeroi->pontuacao);
    printf("PosX: %d\n", ptrHeroi->posX);
    printf("PosY: %d\n", ptrHeroi->posY);

    return 0;
}
