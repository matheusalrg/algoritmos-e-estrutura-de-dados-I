<table>
  <tr>
    <td width="220" valign="top">
      <img src="https://raw.githubusercontent.com/matheusalrg/assets/main/HelloWorld.gif" width="180">
    </td>
    <td valign="top">
      <h2>📝 Tarefa 112 </h2>
      <p>Implemente no programa a funcionalidade de consultar os dados do primeiro jogador da fila sem alterar a fila de forma alguma.</p>
    </td>
  </tr>
</table>

## ❗Problema: Estrutura de Dados Fila: Operação para Obter o Início (Peek/Front)

  - **Contexto:** *Para melhorar a experiência do usuário no lobby do nosso jogo MOBA, a equipe de design quer exibir uma mensagem dinâmica mostrando quem é o próximo jogador na fila. Isso cria uma sensação de progresso e informa aos jogadores que o sistema está ativo. Para fazer isso, precisamos de uma maneira de "espiar" o primeiro jogador da fila sem removê--lo, pois a partida ainda não começou.*

## 📋 Requisitos

  - Crie a função Jogador verInicio(Fila *f). Esta função deve retornar os dados do jogador que está no início da fila.
  - Importante: A função não deve remover o nó nem modificar qualquer ponteiro da fila (inicio, fim).
  - A função deve lidar com o caso de uma fila vazia. Se a fila estiver vazia, ela deve retornar uma struct Jogador com um ID inválido (ex: -1) para indicar que não há ninguém na frente.
  - Atualize o menu no programa principal para incluir uma nova opção, como "Ver quem e o proximo da Fila".
  - Modifique a função main para que, ao selecionar esta nova opção, ela chame a função verInicio. Se um jogador válido for retornado, exiba uma mensagem como: "O proximo jogador a entrar na partida e: [nickname] (ID: [id])". Se a fila estiver vazia, informe o usuário.

📌 **Resposta:** [💻 Ver solução em C](https://github.com/matheusalrg/algoritmos-e-estrutura-de-dados-I/blob/1e30ee171776db7770f5530d64d1f1ca99d55a46/tarefas/tarefa112/tarefa112.c)
