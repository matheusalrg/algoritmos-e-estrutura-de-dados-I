#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Definição da estrutura da unidade
typedef struct {
    int x;
    int y;
} Unidade;

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Quantidade de unidades inimigas
    int n;

    // Raio de explosão
    float raio;

    // Ponteiro para o vetor de unidades
    Unidade *unidades;

    // Variáveis de controle
    int i, j;

    // Contador de duplas dentro do raio
    int contador = 0;

    // Lendo o número de unidades
    printf("Digite o número de unidades: ");
    scanf("%d", &n);

    // Alocando memória dinamicamente para as unidades
    unidades = (Unidade *) malloc(n * sizeof(Unidade));

    // Verificando falha na alocação
    if (unidades == NULL) {

        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Lendo as coordenadas das unidades
    for (i = 0; i < n; i++) {

        printf("\nUnidade %d\n", i + 1);

        printf("Digite o x: ");
        scanf("%d", &unidades[i].x);

        printf("Digite o y: ");
        scanf("%d", &unidades[i].y);
    }

    // Lendo o raio de explosão
    printf("\nDigite o raio de explosão: ");
    scanf("%f", &raio);

    // Laços aninhados para comparar todas as duplas (complexidade O(n²))
    for (i = 0; i < n; i++) {

        for (j = i + 1; j < n; j++) {

            // Calculando a distância entre duas unidades
            float distancia = sqrt(pow(unidades[j].x - unidades[i].x, 2) +
                                   pow(unidades[j].y - unidades[i].y, 2));

            // Verificando se estão dentro do raio
            if (distancia <= raio) {

                contador++;
            }
        }
    }

    // Exibindo resultado final
    printf("\nTotal de duplas dentro do raio: %d\n", contador);

    // Liberando memória alocada
    free(unidades);

    return 0;
}
