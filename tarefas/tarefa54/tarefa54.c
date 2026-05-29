#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definição da estrutura do personagem
typedef struct {
    int id;
    char nome[50];
    float forca;
    float agilidade;
    float inteligencia;
} Personagem;

// Função de busca linear por ID
int buscarPersonagem(Personagem *vetor, int n, int id) {

    int i;

    // Percorrendo o vetor em busca do ID
    for (i = 0; i < n; i++) {

        if (vetor[i].id == id) {
            return i; // retorna o índice encontrado
        }
    }

    return -1; // não encontrado
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Número de personagens
    int n;

    // Ponteiro para vetor de personagens
    Personagem *personagens;

    // Variáveis auxiliares
    int i, opcao, idBusca, indice;
    float media;

    // Lendo quantidade de personagens
    printf("Digite o número total de personagens: ");
    scanf("%d", &n);

    // Alocando memória dinamicamente
    personagens = (Personagem *) malloc(n * sizeof(Personagem));

    // Verificando erro de alocação
    if (personagens == NULL) {

        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Lendo dados dos personagens
    for (i = 0; i < n; i++) {

        printf("\n=== Personagem %d ===\n", i + 1);

        printf("Digite o ID: ");
        scanf("%d", &personagens[i].id);

        printf("Digite o nome: ");
        scanf("%s", personagens[i].nome);

        printf("Digite Força: ");
        scanf("%f", &personagens[i].forca);

        printf("Digite Agilidade: ");
        scanf("%f", &personagens[i].agilidade);

        printf("Digite Inteligência: ");
        scanf("%f", &personagens[i].inteligencia);
    }

    // Menu de consultas
    do {

        printf("\n=== MENU ===\n");
        printf("1 - Consultar Personagem\n");
        printf("2 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {

            // Lendo ID para busca
            printf("Digite o ID do personagem: ");
            scanf("%d", &idBusca);

            // Buscando personagem
            indice = buscarPersonagem(personagens, n, idBusca);

            // Verificando resultado da busca
            if (indice != -1) {

                // Calculando média dos atributos
                media = (personagens[indice].forca +
                         personagens[indice].agilidade +
                         personagens[indice].inteligencia) / 3.0;

                // Exibindo resultado
                printf("\nPersonagem: %s\n", personagens[indice].nome);
                printf("Média de Atributos: %.2f\n", media);

            } else {

                printf("Personagem não existe!\n");
            }
        }

        else if (opcao == 2) {

            printf("Encerrando programa...\n");
        }

        else {

            printf("Opção inválida!\n");
        }

    } while (opcao != 2);

    // Liberando memória
    free(personagens);

    return 0;
}
