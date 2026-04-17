#include <stdio.h>
#include <string.h>
#include <locale.h>

// Definição da estrutura do jogador
struct Jogador {
    char nome[50];
    int vidas;
    int pontuacao;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Criando o jogador
    struct Jogador player1;

    // Inicializando os atributos do jogador
    player1.vidas = 3;
    player1.pontuacao = 0;

    // Variável temporária para armazenar o nome digitado
    char nome_digitado[50];

    // Solicitando o nome do jogador
    printf("Digite o nome do seu personagem: ");

    // Lendo o nome digitado
    scanf("%49s", nome_digitado);

    // Copiando o nome para a estrutura
    strcpy(player1.nome, nome_digitado);

    // Exibindo confirmação
    printf("Personagem criado! Bem-vindo, %s! Vidas: %d, Pontuacao: %d\n",
           player1.nome, player1.vidas, player1.pontuacao);

    return 0;
}
