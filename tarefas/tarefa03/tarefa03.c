#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Variável que armazena a coordenada X
    float coordenada_x;

    // Criação de um ponteiro para float (irá armazenar o endereço de coordenada_x)
    float *ponteiro_x;

    // Conectando o ponteiro ao endereço de memória da variável coordenada_x
    ponteiro_x = &coordenada_x;

    // Mensagem exibida para o usuário
    printf("Digite a coordenada X do portal: \n");

    // Lê um valor do tipo float digitado pelo usuário e armazena no endereço de coordenada_x
    scanf("%f", &coordenada_x);

    // Exibe o valor da coordenada digitada pelo usuário
    printf("Posicao do portal no eixo X: %.2f\n", coordenada_x);

    // Exibe o endereço de memória onde a coordenada está armazenada
    printf("Endereco do portal para teletransporte: %p", ponteiro_x);

    return 0;
}
