#include <std.io>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    // Declaração da variável que armazenará o nome do jogador
    char nome_jogador[50];
    
    // Exibe uma mensagem solicitando que o usuário digite o nome do jogador
    printf("Digite o nome do seu jogador: \n");
    
    // Lê uma linha inteira (incluindo espaços) até encontrar a quebra de linha
    scanf("%[^\n]s", nome_jogador);
    
    // Verifica o tamanho da string com strlen:
    // Se for menor ou igual a 15 caracteres, o nome é válido, caso contrário, é inválido.
    if (strlen(nome_jogador) <= 15) {
        printf("Nome válido! Bem-vindo ao jogo");
    } 
    else {
        printf("Nome muito longo! Por favor, escolha um nome com ate 15 caracteres.");
    }
    
    return 0;
}
