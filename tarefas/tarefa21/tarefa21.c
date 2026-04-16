#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Ponteiro para armazenar a duração da fumaça
    int *duracao_fumaca;

    // Alocação de memória (a bomba explode!)
    duracao_fumaca = (int *) malloc(sizeof(int));

    // Verificando se a alocação foi bem-sucedida
    if (duracao_fumaca == NULL) {
        printf("Erro ao alocar memória para a fumaça.\n");
        return 1;
    }

    // Definindo a duração da fumaça
    *duracao_fumaca = 5;

    // Imprimindo a ativação
    printf("Bomba de fumaca ativada! Duracao: %d segundos.\n", *duracao_fumaca);

    // Liberando a memória (a fumaça se dissipa)
    free(duracao_fumaca);

    // Boa prática: evitando ponteiro pendurado
    duracao_fumaca = NULL;

    // Imprimindo a finalização
    printf("A fumaca se dissipou.\n");

    return 0;
}
