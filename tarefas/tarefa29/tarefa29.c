#include <stdio.h>
#include <locale.h>

// Definição da estrutura do item coletável
struct ItemColetavel {
    int valor_pontos;
    float peso;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Criando e inicializando os itens
    struct ItemColetavel moeda_bronze = {10, 0.5};
    struct ItemColetavel moeda_prata  = {50, 0.7};
    struct ItemColetavel moeda_ouro   = {100, 1.0};

    // Variável para armazenar a pontuação do jogador
    int pontuacao_jogador = 0;

    // Simulando a coleta da moeda de ouro
    pontuacao_jogador += moeda_ouro.valor_pontos;

    // Exibindo o resultado
    printf("Moeda de ouro coletada! Pontuacao atual: %d\n", pontuacao_jogador);

    return 0;
}
