<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 63 </h2>
      <p>Escreva um programa em C que represente um placar de 5 melhores tempos já ordenado. O programa deve ler um novo tempo de corrida e inseri-lo na posição correta do placar, mantendo a ordem crescente. O placar atualizado com os 5 melhores tempos (incluindo o novo, se aplicável) deve ser impresso no final.</p>
    </td>
  </tr>
</table>

## ❗Problema: Inserindo um Novo Recorde no Placar ✨

  - **Contexto:** *Você está desenvolvendo o sistema de leaderboard para um jogo de corrida arcade. O placar sempre exibe os 5 melhores tempos em ordem crescente (do mais rápido para o mais lento). Quando um jogador termina uma corrida com um novo tempo, esse tempo precisa ser inserido na posição correta, mantendo a ordem do placar. Se o novo tempo for bom o suficiente para entrar no top 5, o tempo mais lento (que estava em 5º lugar) é descartado.*

## 📋 Requisitos

  - Declare e inicialize um vetor de inteiros com 5 tempos já ordenados de forma crescente (ex: 120, 125, 130, 142, 150).
  - Leia um único inteiro, **novo_tempo**, que representa o tempo do jogador.
  - Implemente a lógica para inserir **novo_tempo** no vetor. Esta lógica deve funcionar de trás para frente, comparando **novo_tempo** com os tempos existentes e deslocando os tempos maiores para a direita para abrir espaço.
  - Se **novo_tempo** for mais lento que todos os tempos no placar, o placar não deve ser alterado.
  - Imprima o vetor de 5 posições atualizado, mostrando o novo placar ordenado.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/4302e5dfd82fa1273f2a38177959c3c31949a1d2/tarefas/tarefa63/tarefa63.c)
