<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 88 </h2>
      <p>Você deve criar um programa modular que simule cálculos de combate básicos. O programa será dividido em três arquivos: combate.h, combate.c e main.c.</p>
    </td>
  </tr>
</table>

## ❗Problema: Complete o programa em C fornecido, que já gerencia uma lista de jogadores (com matrícula e nome), implementando a função deletar_fim(). Esta função será chamada quando a opção 8 do menu for selecionada.

  - **Contexto:** *Em um jogo multiplayer online, jogadores podem formar parties (grupos) para enfrentar masmorras. Uma dinâmica comum é que o último jogador a entrar no grupo seja o primeiro a sair caso a party precise diminuir de tamanho para uma missão específica (por exemplo, uma missão que só permite 4 membros, mas um 5º jogador havia se juntado).
O sistema de gerenciamento da party usa uma lista encadeada para manter o registro dos jogadores. Adicionar um novo jogador ao grupo é feito inserindo-o no final da lista. Sua tarefa é implementar a operação inversa: remover o jogador que está no final da lista.*

## 📋 Requisitos

  - Sua implementação de **deletar_fim()** deve receber um ponteiro para a lista (**Lista *plista**).
  - **Caso 1 (Lista Vazia)**: Se a lista estiver vazia, a função deve exibir uma mensagem informando que não é possível remover jogadores.
  - **Caso 2 (Apenas um Jogador**): Se a lista contiver apenas um jogador, a função deve remover esse jogador e garantir que a lista fique vazia (o ponteiro de início deve se tornar **NULL**).
  - **Caso 3 (Vários Jogadores)**: Se a lista tiver mais de um jogador, a função deve percorrer a lista para encontrar o penúltimo jogador. Em seguida, deve atualizar o ponteiro prox do penúltimo jogador para **NULL**, tornando-o o novo final da lista, e liberar a memória do jogador que foi removido.
  - O programa principal (**main**) já está configurado para chamar sua função. Não é necessário modificá-lo além de adicionar a chamada para **deletar_fim()** no local apropriado.
    
📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/tree/4f20fe27b7989b1e8e25dd985d425c8cd2aacda8/tarefas/tarefa88)
