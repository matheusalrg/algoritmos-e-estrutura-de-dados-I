<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 110 </h2>
      <p>Altere o programa anterior para implementar a funcionalidade de remover o primeiro jogador da fila. A função deve retornar os dados do jogador removido para que o sistema possa, por exemplo, confirmar qual jogador foi alocado para uma partida.</p>
    </td>
  </tr>
</table>

## ❗Problema: Estrutura de Dados Fila: Implementando a Remoção de Elementos (Dequeue)

  - **Contexto:** *O sistema de matchmaking do nosso jogo MOBA já permite que jogadores entrem na fila (enqueue) e que os administradores visualizem a fila. O próximo passo crucial é fazer o sistema funcionar: pegar o primeiro jogador da fila para criar uma nova partida. Esta ação deve seguir rigorosamente o princípio FIFO, garantindo que quem esperou por mais tempo seja o primeiro a jogar.*

## 📋 Requisitos

  - Implemente a função Jogador remover(Fila *f). Esta função deve remover o nó do início da fila e retornar os dados do jogador que estava nesse nó.
  - Dentro da função, você deve: <br>
  a. Tratar o caso de uma fila vazia. Se não houver ninguém para remover, imprima uma mensagem de aviso e retorne uma struct Jogador com um ID inválido (ex: -1) para indicar que a operação falhou. <br>
  b. Se a fila não estiver vazia, guarde os dados do primeiro jogador e um ponteiro para o nó a ser removido. <br>
  c. Atualize o ponteiro inicio da fila para que ele aponte para o segundo elemento. <br>
  d. Caso especial: Se a fila tinha apenas um elemento, após a remoção, o inicio se tornará NULL. Nesse caso, você também deve atualizar o ponteiro fim para NULL. <br>
  e. Libere a memória do nó removido usando a função free(). <br>
  f. Retorne os dados do jogador que foi removido.
  - Atualize o menu no programa principal (main) para incluir a opção "Remover Jogador da Fila" (ou "Iniciar Partida").
  - No main, ao chamar a função remover, verifique o ID do jogador retornado. Se o ID não for inválido, imprima uma mensagem de sucesso, como "O jogador [nickname] (ID: [id]) foi removido da fila e entrou em uma partida.".

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/ed5a629cd643ef7e0fdf7036b5dff676bbe16ac4/tarefas/tarefa110/tarefa110.c)
