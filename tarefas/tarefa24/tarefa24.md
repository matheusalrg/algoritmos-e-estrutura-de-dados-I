<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 24 </h2>
      <p>Escreva um programa em C que primeiro pergunte ao usuário as dimensões do mapa (número de linhas e colunas) e, em seguida, crie dinamicamente este mapa, preencha-o com dados fornecidos pelo usuário e, por fim, conte e exiba quantos blocos de tijolo (1) existem no nível.</p>
    </td>
  </tr>
</table>

## ❗Problema: Construindo o Mapa do Jogo Dinamicamente 🧱🎮

  - **Contexto:** *Você foi contratado como programador júnior para um novo jogo de plataforma 2D. Sua primeira tarefa é criar a base para o sistema de mapas do jogo. Os designers de níveis querem poder criar mapas de diferentes tamanhos (alguns mais altos, outros mais largos), então o mapa não pode ter um tamanho fixo no código.
O mapa será representado como uma grade (matriz) onde cada célula é um número inteiro que representa um tipo de bloco: <br>
0: Espaço Vazio <br>
1: Bloco de Tijolo <br>
2: Moeda*

## 📋 Requisitos

  - **Dimensões do Mapa:** Peça ao usuário para digitar o número de linhas e o número de colunas do mapa.

  - **Alocação Dinâmica:** Crie a matriz do mapa usando alocação dinâmica com um ponteiro para ponteiro (int **mapa). Você precisará usar malloc para alocar o vetor de ponteiros (linhas) e, em seguida, um laço para alocar cada linha individualmente.

  - **Preenchimento do Mapa:** Peça ao usuário para digitar os valores (0, 1 ou 2) para preencher cada célula do mapa.

  - **Contagem de Blocos:** Percorra toda a matriz e conte quantos elementos são iguais a 1 (Bloco de Tijolo).

  - **Exibição do Resultado:** Ao final, mostre na tela a contagem total de blocos de tijolo. A saída deve ser: "O mapa possui X blocos de tijolo." (onde X é o número contado).

  - **Liberação de Memória:** É fundamental que você libere corretamente toda a memória que foi alocada dinamicamente antes de o programa terminar. Lembre-se que o processo de liberação é o inverso do de alocação.
  
📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/666f98bd0b40da96bf0b881dc08cde708fed53c7/tarefas/tarefa24/tarefa24.c)
