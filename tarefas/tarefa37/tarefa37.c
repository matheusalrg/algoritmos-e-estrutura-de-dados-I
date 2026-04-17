#include <stdio.h>
#include <string.h>
#include <locale.h>

// Estrutura de atributos do personagem
struct Atributos {
    int vida;
    int pontuacao;
};

// Estrutura do personagem com atributos aninhados
struct Personagem {
    char nome[50];
    struct Atributos stats;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Criando o jogador
    struct Personagem jogador;

    // Lendo o nome do jogador
    printf("Digite o nome do personagem: ");
    scanf("%49s", jogador.nome);

    // Inicializando atributos
    jogador.stats.vida = 100;
    jogador.stats.pontuacao = 0;

    // Exibindo status inicial
    printf("Status Inicial -> Nome: %s | Vida: %d | Pontuacao: %d\n",
           jogador.nome, jogador.stats.vida, jogador.stats.pontuacao);

    // Simulando coleta de moeda
    jogador.stats.pontuacao += 10;

    // Simulando dano
    jogador.stats.vida -= 25;

    // Exibindo status final
    printf("Status Final -> Nome: %s | Vida: %d | Pontuacao: %d\n",
           jogador.nome, jogador.stats.vida, jogador.stats.pontuacao);

    return 0;
}
