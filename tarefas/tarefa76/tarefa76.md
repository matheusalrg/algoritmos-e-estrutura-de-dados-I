<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 76 </h2>
      <p>Crie um programa em C que leia o número de jogadores, em seguida a pontuação de cada um, e os ordene em ordem crescente usando o algoritmo Quick Sort com a estratégia de seleção de pivô aleatório.</p>
    </td>
  </tr>
</table>

## ❗Problema: Quick Sort Robusto para Leaderboards 🎮

  - **Contexto:** *Supondo um "online multiplayer arena game", o sistema de ranking precisa processar e ordenar as pontuações dos jogadores ao final de cada partida para exibir o placar final. As pontuações podem chegar em qualquer ordem, e às vezes, chegam quase ordenadas (por exemplo, se os jogadores com melhor desempenho terminam a partida primeiro). Para garantir que o algoritmo de ordenação seja eficiente e não caia em casos de pior desempenho (complexidade O(n²)) com dados quase ordenados, você decide implementar o Quick Sort com um pivô aleatório.*

## 📋 Requisitos

  - O programa deve primeiro ler um número inteiro N, representando o número de jogadores.
  - Em seguida, deve ler N pontuações inteiras e armazená-las em um vetor.
  - Implemente o algoritmo Quick Sort.
  - A função de partição deve selecionar um pivô de forma aleatória dentro dos limites do subvetor atual.
  - Utilize as bibliotecas <stdlib.h> e <time.h> para a geração dos números aleatórios.
  - Ao final, o programa deve imprimir as pontuações ordenadas em uma única linha, separadas por espaços.
  - 
📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/1e4119832d9c4727fd5e213aade85c7ebc3f26e7/tarefas/tarefa76/tarefa76.c)
