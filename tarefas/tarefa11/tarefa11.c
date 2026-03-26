#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Vetores de munição com tamanho 2 (posição 0 = atual, posição 1 = máximo)
    int balas[2] = {30, 60};
    int granadas[2] = {5, 10};
    int foguetes[2] = {2, 4};

    // Vetor de ponteiros chamado inventario para gerenciar as munições
    int *inventario[3];

    // Cada posição do inventário aponta para um tipo de munição
    inventario[0] = balas;
    inventario[1] = granadas;
    inventario[2] = foguetes;

    // Exibe o estado inicial do inventário para o usuário antes do uso
    printf("Inventário inicial:\n");
    printf("Balas: %d\n", inventario[0][0]);
    printf("Granadas: %d\n", inventario[1][0]);
    printf("Foguetes: %d\n", inventario[2][0]);

    // Laço para percorrer o inventário
    for (int i = 0; i < 3; i++) {

        // Diminui em 1 a quantidade atual de cada munição usando aritmética de ponteiros
        *(inventario[i] + 0) = *inventario[i] - 1;
    }

    // Exibe o estado final do inventário para o usuário após o uso
    printf("Inventário após o uso:\n");
    printf("Balas: %d\n", inventario[0][0]);
    printf("Granadas: %d\n", inventario[1][0]);
    printf("Foguetes: %d\n", inventario[2][0]);
    
}
