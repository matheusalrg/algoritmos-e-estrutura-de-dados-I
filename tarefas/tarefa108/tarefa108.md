<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 108 </h2>
      <p>Crie um programa em C que simule a entrada de jogadores em uma fila de matchmaking. O programa deve apresentar um menu com opções para adicionar um novo jogador à fila ou sair. Cada jogador possui um ID numérico e um nickname.</p>
    </td>
  </tr>
</table>

## ❗Problema: Estrutura de Dados Fila: Implementação da Operação de Inserção (Enqueue)

  - **Contexto:** *Em um jogo de arena multiplayer online (MOBA) como 'League of Legends' ou 'Dota 2', quando os jogadores clicam para entrar em uma partida, eles são colocados em uma fila de matchmaking. O sistema do jogo precisa gerenciar essa fila de forma justa, garantindo que o primeiro jogador a entrar seja o primeiro a ser considerado para uma nova partida (princípio FIFO - First-In, First-Out). Você foi encarregado de construir a base desse sistema.*

## 📋 Requisitos

  - Utilize uma struct para representar um jogador, contendo um int para o ID e um char[] para o nickname.
  - Implemente a fila usando uma lista encadeada. Crie uma struct para o nó (No), que armazena os dados do jogador e um ponteiro para o próximo nó.
  - Crie uma struct para a Fila (Fila), que deve conter dois ponteiros: inicio e fim.
  - Implemente a função void inserir(Fila *f, Jogador j) que aloca um novo nó, armazena os dados do jogador nele e o adiciona corretamente ao final da fila.
  - O programa principal (main) deve inicializar uma fila vazia e entrar em um loop que exibe o menu. Se o usuário escolher 'inserir', o programa deve ler os dados de um novo jogador e chamar a função inserir. O loop deve terminar quando o usuário escolher 'sair'.
  - A inserção deve funcionar corretamente tanto para uma fila vazia quanto para uma fila que já contém jogadores.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/56d455e330539152ce1b2df0fddabee19ad92900/tarefas/tarefa108/tarefa108.c)
