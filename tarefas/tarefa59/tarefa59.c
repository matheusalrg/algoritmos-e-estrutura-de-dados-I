#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definição da struct Monstro
typedef struct {
    int id;
    char nome[50];
    int hp;
    int ataque;
} Monstro;

// Função de busca binária recursiva
int buscaBinariaRecursiva(Monstro v[], int ini, int fim, int id) {

    // Caso base: não encontrado
    if (ini > fim) {
        return -1;
    }

    int meio = (ini + fim) / 2;

    // Se encontrou o monstro
    if (v[meio].id == id) {
        return meio;
    }

    // Se o ID procurado é menor, busca na metade esquerda
    if (id < v[meio].id) {
        return buscaBinariaRecursiva(v, ini, meio - 1, id);
    }

    // Se o ID procurado é maior, busca na metade direita
    return buscaBinariaRecursiva(v, meio + 1, fim, id);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Número de monstros
    int n;

    // Vetor de monstros
    Monstro *bestiario;

    // Variáveis auxiliares
    int i, idBusca, indice;

    // Lendo quantidade de monstros
    printf("Digite o número de monstros: ");
    scanf("%d", &n);

    // Alocando memória para os monstros
    bestiario = (Monstro *) malloc(n * sizeof(Monstro));

    // Verificando falha de alocação
    if (bestiario == NULL) {

        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Lendo os monstros (já ordenados por ID)
    for (i = 0; i < n; i++) {

        printf("\n=== Monstro %d ===\n", i + 1);

        printf("Digite o ID: ");
        scanf("%d", &bestiario[i].id);

        printf("Digite o nome: ");
        scanf("%s", bestiario[i].nome);

        printf("Digite o HP: ");
        scanf("%d", &bestiario[i].hp);

        printf("Digite o ataque: ");
        scanf("%d", &bestiario[i].ataque);
    }

    // Loop de busca
    do {

        printf("\nDigite o ID para busca (0 para sair): ");
        scanf("%d", &idBusca);

        if (idBusca == 0) {
            break;
        }

        // Busca binária recursiva
        indice = buscaBinariaRecursiva(bestiario, 0, n - 1, idBusca);

        if (indice != -1) {

            printf("Monstro Encontrado: %s (ID: %d) - HP: %d, Ataque: %d\n",
                   bestiario[indice].nome,
                   bestiario[indice].id,
                   bestiario[indice].hp,
                   bestiario[indice].ataque);

        } else {

            printf("Monstro com ID %d nao encontrado.\n", idBusca);
        }

    } while (1);

    // Liberando memória
    free(bestiario);

    return 0;
}
