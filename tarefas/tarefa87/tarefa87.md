<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 87 </h2>
      <p>Você foi encarregado de desenvolver o núcleo do sistema de fila de matchmaking. Seu programa deve gerenciar uma lista de jogadores esperando para entrar em uma partida. A principal funcionalidade a ser implementada nesta tarefa é a remoção do primeiro jogador da fila para iniciar um novo jogo.</p>
    </td>
  </tr>
</table>

## ❗Problema: Implementando uma Fila de Matchmaking para um Jogo Multiplayer 🎮

  - **Contexto:** *Em jogos multiplayer online, quando um jogador decide entrar em uma partida, ele é colocado em uma fila de matchmaking. O sistema então forma as partidas pegando os jogadores que estão há mais tempo na fila, ou seja, os primeiros que entraram. Este comportamento é classicamente conhecido como 'primeiro a entrar, primeiro a sair' (FIFO - First-In, First-Out).
<br>
Uma lista encadeada é uma estrutura de dados perfeita para implementar essa fila, onde adicionar um novo jogador ao final da fila corresponde a uma inserção no fim, e remover um jogador para colocá-lo em uma partida corresponde a deletar o nó do início da lista.*

## 📋 Requisitos

  - Crie uma **struct Jogador** que armazene um **id** (inteiro) e um **nome** (string).
  - Use as **structs No** e **Lista** para implementar a lista encadeada.
  - Implemente um menu com as seguintes opções: <br>
  1: Adicionar jogador ao fim da fila (inserir no fim). <br>
  2: Iniciar partida (deletar o primeiro jogador da fila). <br>
  3: Mostrar fila de espera. <br>
  4: Sair.
  - A função para '**Iniciar partida**' deve remover o primeiro **Jogador** da lista. Se a fila estiver vazia, o programa deve informar que 'Não há jogadores na fila'.
  - O programa deve rodar em um loop, permitindo que o usuário realize múltiplas operações até escolher a opção de sair.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/c2662f9d2068e1b725d4b1d467c0920caaaa1cce/tarefas/tarefa87/tarefa87.c)
