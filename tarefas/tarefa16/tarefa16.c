#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    // Inventário: 5 itens, cada um com até 19 caracteres + '\0'
    char inventario[5][20];
    char itemNecessario[20];
    int encontrado = 0;

    // Preenchendo o inventário
    printf("Digite os 5 itens do inventário:\n");
    for (int i = 0; i < 5; i++) {
        printf("Item %d: ", i + 1);
        scanf("%19s", inventario[i]); // evita overflow
    }

    // Ler item necessário
    printf("\nDigite o item necessário para abrir a porta: ");
    scanf("%19s", itemNecessario);

    // Verificar se o item está no inventário
    for (int i = 0; i < 5; i++) {
        if (strcmp(inventario[i], itemNecessario) == 0) {
            encontrado = 1;
            break;
        }
    }

    // Exibindo resultado para o usuário
    if (encontrado) {
        printf("Porta aberta!\n");
    } else {
        printf("Você não tem o item necessário.\n");
    }

    return 0;
}
