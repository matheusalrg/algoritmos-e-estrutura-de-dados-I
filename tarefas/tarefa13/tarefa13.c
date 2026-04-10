#include  <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    // Variável palavra secreta
    char palavra_secreta[] = "LUX";
    // Tentativa do jogador (até 50 caracteres)
    char tentativa_jogador[50];

    // Mensagem para o jogador
    printf("Uma voz ancestral ecoa... 'Diga a palavra e passe':\n");

    // Ler a palavra digitada
    scanf("%s", tentativa_jogador);

    // Comparar as palavras
    if (strcmp(palavra_secreta, tentativa_jogador) == 0) {
        printf("A porta magica se abre!\n");
    } else {
        printf("Nada acontece... Parece que a palavra esta incorreta.\n");
    }

    return 0;
}
