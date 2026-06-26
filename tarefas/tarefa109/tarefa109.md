<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 109 </h2>
      <p>Modifique o programa anterior para adicionar a funcionalidade de exibir todos os jogadores que estão atualmente na fila de matchmaking, na ordem correta em que entraram (do primeiro ao último).</p>
    </td>
  </tr>
</table>

## ❗Problema: Estrutura de Dados Fila: Implementação da Operação de Exibição (Travessia)

  - **Contexto:** *Continuando o desenvolvimento do nosso sistema de matchmaking para o jogo MOBA, agora que os jogadores já podem entrar na fila, é essencial ter uma forma de visualizar quem está esperando e em que ordem. Isso é útil tanto para os administradores do sistema quanto para fornecer uma estimativa de posição para os próprios jogadores.*

## 📋 Requisitos

  - Implemente uma nova função void mostrar(Fila *f).
  - Dentro desta função, utilize um ponteiro auxiliar (No *aux) para percorrer a fila, começando pelo inicio.
  - A função deve iterar por todos os nós até que o ponteiro auxiliar se torne NULL. Em cada iteração, ela deve imprimir os dados (ID e nickname) do jogador contido no nó atual.
  - A função deve ser capaz de lidar com uma fila vazia. Se a fila não tiver nenhum jogador, ela deve imprimir uma mensagem informativa, como "A fila de matchmaking esta vazia.".
  - Modifique o menu no programa principal (main) para incluir uma nova opção para "Mostrar Fila". A opção de "Sair" deve ser a última.
  -Exemplo de novo menu: <br>
  1. Adicionar Jogador na Fila <br>
  2. Mostrar Fila <br>
  3. Sair 
  - Atualize a estrutura switch na função main para chamar a sua nova função mostrar quando a opção correspondente for selecionada.

📌 **Resposta:** [💻 Ver solução em C]()
