#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Definindo e inicializando o mapa
    int mapa_fase1[5][8] = {
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {1, 1, 0, 0, 2, 0, 1, 1},
        {0, 0, 1, 1, 0, 1, 0, 0},
        {1, 1, 1, 1, 2, 2, 1, 1}
    };

    // Percorrendo a matriz
    for (int i = 0; i < 5; i++) {          // número de linhas
        for (int j = 0; j < 8; j++) {      // número de colunas
            if (mapa_fase1[i][j] == 2) {
                // Mensagem para o usuário
                printf("Espinho encontrado na linha %d, coluna %d\n", i, j);
            }
        }
    }

    return 0;
}
