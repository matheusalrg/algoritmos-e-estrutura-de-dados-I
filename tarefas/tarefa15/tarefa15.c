#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    // Declaração das variáveis para armazenar nome e título do herói
    char nome_jogador[50];
    char titulo_conquistado[50];

    // Lê o nome do herói
    printf("Digite o nome do heroi: \n");
    scanf(" %[^\n]", nome_jogador); // lê até apertar a  tecla enter

    // Lê o título conquistado com os espaçamentos
    printf("Digite o titulo conquistado: \n");
    scanf(" %[^\n]", titulo_conquistado); 

    // Adiciona um espaço ao final do nome
    strcat(nome_jogador, " ");

    // Junta o título ao nome
    strcat(nome_jogador, titulo_conquistado);

    // Mostra o resultado final
    printf("O heroi agora e conhecido como: %s\n", nome_jogador);

    return 0;
}
