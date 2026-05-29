<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 77 </h2>
      <p>Você deve criar um programa em C que leia os dados de vários jogadores (ID e pontuação) e os ordene em ordem decrescente de pontuação usando o algoritmo Quick Sort. A estrutura de dados de cada jogador já está definida para você.</p>
    </td>
  </tr>
</table>

## ❗Problema: Ordenação de Leaderboard com Quick Sort 🗒️

  - **Contexto:** *Supondo um jogo de arena de batalha multiplayer, o placar final de cada partida é um dos momentos mais importantes para os jogadores. O sistema precisa processar rapidamente a pontuação de todos os participantes e exibir um ranking ordenado, do jogador com a maior pontuação para o com a menor. Usar um algoritmo de ordenação eficiente como o Quick Sort é crucial para garantir que o placar apareça instantaneamente, mesmo em partidas com muitos jogadores.*

## 📋 Requisitos

  - Defina uma **struct** chamada **Jogador** que contenha um **id** (inteiro) e uma **pontuacao** (inteiro).
  - Use **typedef** para criar um alias **Jogador** para **struct Jogador**.
  - Implemente o algoritmo **Quick Sort de forma recursiva**.
  - Sua implementação do Quick Sort deve ordenar o vetor de jogadores com base no campo **pontuacao** em ordem decrescente (do maior para o menor).
  - O programa primeiro deve ler um número inteiro **n**, que representa a quantidade de jogadores na partida.
  - Em seguida, o programa deve ler os dados (ID e pontuação) dos **n** jogadores.
  - Após a ordenação, o programa deve imprimir a lista de jogadores ordenada, mostrando o ID e a pontuação de cada um, um por linha.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/3014e60245d08c11cb82c955e4ac20ead94a16c6/tarefas/tarefa77/tarefa77.c)
