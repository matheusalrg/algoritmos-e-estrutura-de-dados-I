#include <stdio.h>
#include <string.h>
#include <locale.h>

// Definição da estrutura do item coletável
struct ItemColetavel {
    char nome[50];
    int valor_pontos;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Vetor para armazenar os itens coletados
    struct ItemColetavel inventario[3];

    // Entrada de dados dos itens
    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do item %d: ", i + 1);
        scanf("%49s", inventario[i].nome);

        printf("Digite o valor em pontos do item %d: ", i + 1);
        scanf("%d", &inventario[i].valor_pontos);
    }

    // Inicializando o item mais valioso com o primeiro item
    struct ItemColetavel mais_valioso = inventario[0];

    // Procurando o item com maior valor
    for (int i = 1; i < 3; i++) {
        if (inventario[i].valor_pontos > mais_valioso.valor_pontos) {
            mais_valioso = inventario[i];
        }
    }

    // Exibindo o resultado
    printf("O item mais valioso coletado foi: %s\n", mais_valioso.nome);

    return 0;
}
