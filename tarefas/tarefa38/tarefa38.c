#include <stdio.h>
#include <locale.h>

// Definição do enum para os estados do personagem
enum EstadoPersonagem {
    PARADO,
    CORRENDO,
    PULANDO
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Variável para armazenar o estado atual
    enum EstadoPersonagem estado_atual;

    // Variável auxiliar para entrada do usuário
    int entrada;

    // Solicitando entrada
    printf("Digite o estado do personagem (0=PARADO, 1=CORRENDO, 2=PULANDO): ");
    scanf("%d", &entrada);

    // Atribuindo valor ao enum
    estado_atual = entrada;

    // Verificando o estado e exibindo resultado
    if (estado_atual == PARADO) {
        printf("O personagem esta parado.\n");
    } else if (estado_atual == CORRENDO) {
        printf("O personagem esta correndo!\n");
    } else if (estado_atual == PULANDO) {
        printf("O personagem esta pulando no ar!\n");
    } else {
        printf("Estado invalido!\n");
    }

    return 0;
}
