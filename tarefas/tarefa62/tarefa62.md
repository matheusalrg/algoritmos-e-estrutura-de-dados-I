<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 62 </h2>
      <p>Escreva um programa em C que leia os dados de 'N' jogadores (nome e número de eliminações) e os ordene em ordem decrescente com base no número de eliminações, utilizando o algoritmo de Ordenação por Seleção (Selection Sort). Por fim, o programa deve imprimir o leaderboard ordenado.</p>
    </td>
  </tr>
</table>

## ❗Problema: Criando um Sistema de Leaderboard para um Jogo de Arena 🏟️

  - **Contexto:** *Em um jogo de arena de batalha, ao final de cada partida, os resultados dos jogadores precisam ser exibidos em uma tabela de classificação (leaderboard). Esta tabela deve mostrar os jogadores ordenados do maior para o menor número de eliminações ('kills'). Você foi encarregado de criar o sistema que processa os dados brutos da partida e os organiza para exibição.
*

## 📋 Requisitos

  - Defina uma **struct** chamada **Jogador** que contenha um campo para o nome (uma string de até 50 caracteres) e um campo para o número de eliminações (um inteiro).
  - Utilize **typedef** para criar um alias **Jogador** para a sua estrutura.
  - O programa deve primeiro ler um número inteiro **N**, que representa a quantidade de jogadores na partida.
  - Aloque dinamicamente um vetor de **Jogador** com tamanho **N**.
  - Leia o nome e o número de eliminações de cada um dos **N** jogadores.
  - Implemente o algoritmo de Ordenação por Seleção (Selection Sort) para ordenar o vetor de jogadores em ordem **decrescente** de eliminações.
  - Imprima o nome e as eliminações de cada jogador do vetor já ordenado, um por linha.
  - Lembre-se de liberar a memória alocada dinamicamente ao final do programa.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/dd3a280e58e609b367ec94155e636fdf2e90202b/tarefas/tarefa62/tarefa62.c)
