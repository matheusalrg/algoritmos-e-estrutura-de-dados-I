#include <stdio.h>
#include <locale.h>

// Função para ler o cenário usando a aritmética
void ler_cenario(int n, int *cenario) {
    for (int i = 0; i < n; i++) {
        // Usa o ponteiro para acessar cada posição
        scanf("%d", cenario + i);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    // Variável n do tipo inteiro
    int n;

    // Lê o tamanho do cenário digitado pelo usuário
    printf("Digite o número de blocos: \n");
    scanf("%d", &n);

    // Declara o vetor chamado cenario com tamanho n
    int cenario[n];

    // Chama a função para preencher o vetor
    ler_cenario(n, cenario);

    // Procura o primeiro bloco 1 e muda para 2
    for (int i = 0; i < n; i++) {
        if(cenario[i] == 1) {
            cenario[i] = 2;
            // Para ao encontrar o primeiro
            break;
        }
    }
    
    // Imprime o vetor modificado
    for (int i = 0; i < n; i++) {
        printf("%d ", cenario[i]);
    }

    return 0;
}
