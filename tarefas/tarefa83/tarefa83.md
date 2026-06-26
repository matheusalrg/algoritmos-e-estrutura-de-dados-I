<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 83 </h2>
      <p>Você deve criar um programa que simule essa fila de espera. O sistema deve permitir que novos jogadores sejam adicionados ao final da fila e que a fila atual seja exibida a qualquer momento, mostrando a ordem correta dos jogadores.</p>
    </td>
  </tr>
</table>

## ❗Problema: Gerenciador de Fila de Batalha

  - **Contexto:** *Supondo um jogo de arena multiplayer, quando os jogadores entram na fila para uma nova partida, eles são adicionados em ordem de chegada. O primeiro a entrar é o primeiro a ser atendido pelo sistema de matchmaking. Isso cria uma fila justa, onde novos jogadores sempre vão para o final da linha.*

## 📋 Requisitos

  - Use uma lista encadeada para representar a fila de jogadores.
  - Cada jogador deve ser representado por uma **struct** contendo uma **matricula** (ID do jogador, int) e um **nome** (string).
  - O programa deve apresentar um menu com as seguintes opções:
  1 - Adicionar jogador no início da fila (para casos de prioridade)
  2 - Adicionar jogador no fim da fila (o caso de uso principal)
  3 - Mostrar fila
  4 - Sair
  - A função para inserir no fim deve ser o foco principal. Ela precisa lidar corretamente tanto com uma fila vazia quanto com uma fila que já contém jogadores.
  - A função de mostrar deve exibir a matrícula e o nome de cada jogador na ordem em que estão na fila.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/85a6f2b1e179a1121ef2576854bf4ff1297d2134/tarefas/tarefa83/tarefa83.c)
